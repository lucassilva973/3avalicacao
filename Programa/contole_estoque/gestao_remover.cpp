#include "gestao_remover.h"
#include "ui_gestao_remover.h"

gestao_remover::gestao_remover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_remover)
{
    ui->setupUi(this);
    remover_linhas(ui->tw_gr_mostraPesquisa);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_estoque order by codígo");
    if(query.exec()){
        ui->tw_gr_mostraPesquisa->setColumnCount(3);
        while (query.next()) {
            ui->tw_gr_mostraPesquisa->insertRow(cont_linhas);
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gr_mostraPesquisa->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_gr_mostraPesquisa->setColumnWidth(0,70);
        ui->tw_gr_mostraPesquisa->setColumnWidth(1,150);
        ui->tw_gr_mostraPesquisa->setColumnWidth(2,70);
        QStringList cabecalhos={"Código","Produto","Quantidade"};
        ui->tw_gr_mostraPesquisa->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_gr_mostraPesquisa->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_gr_mostraPesquisa->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_gr_mostraPesquisa->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_gr_mostraPesquisa->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }
}

gestao_remover::~gestao_remover()
{
    delete ui;
}

void gestao_remover::remover_linhas(QTableWidget *tw){
    while(tw->rowCount()>0){
       tw->removeRow(0);
    }
}


void gestao_remover::on_btn_gr_pesquisar_clicked()
{
    QString busca;
    if(ui->txt_gr_pesquisa->text() ==""){
        if(ui->rb_gr_cod->isChecked()){
            busca="select * from tb_estoque by order codígo";
         }else
            busca="select * from tb_estoque by order nome_produto";
    }else{
        if(ui->rb_gr_cod->isChecked()){
            busca="select * from tb_estoque where codígo='"+ui->txt_gr_pesquisa->text()+"'";
            remover_linhas(ui->tw_gr_mostraPesquisa);
        }else{
            busca="select * from tb_estoque where nome_produto='"+ui->txt_gr_pesquisa->text()+"'";
            remover_linhas(ui->tw_gr_mostraPesquisa);
        }
    }
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare(busca);

    if(query.exec()){
        while (query.next()) {
            ui->tw_gr_mostraPesquisa->insertRow(cont_linhas);
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gr_mostraPesquisa->setRowHeight(cont_linhas,20);
            cont_linhas++;
            ui->txt_gr_codigo->setText(query.value(0).toString());
            ui->txt_gr_nome->setText(query.value(1).toString());
            ui->txt_gr_qtde_estoque->setText(query.value(2).toString());
        }
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível pesquisar o produto\nCampo de pesquisa vázio!");
    }

}


void gestao_remover::on_btn_gr_voltar_clicked()
{
    this->close();
}


void gestao_remover::on_btn_gr_remove_clicked()
{
    QString remover="RMV";
    QString id=ui->txt_gr_codigo->text();
    QString nome_prod=ui->txt_gr_nome->text();
    QString qtde_remover = ui->txt_gr_qtde_remover->text();
    QString tempoTexto=QTime::currentTime().toString("hh:mm:ss");
    QString dataTexto=QDate::currentDate().toString("dd/MM/yyyy");

    QString Aux_Qtde_rmv = ui->txt_gr_qtde_remover->text();
    QString Aux_Qtde_est = ui->txt_gr_qtde_estoque->text();

    int ser_removida= ui->txt_gr_qtde_remover->text().toInt();
    int estoque_possui=ui->txt_gr_qtde_estoque->text().toInt();

    int qtde_estoque=0;

    int existe_produto=0;
    QSqlQuery existe_prod;
    existe_prod.prepare("select codígo,nome_produto from tb_estoque");

    if(existe_prod.exec()){
        while (existe_prod.next()) {
            if(id.toInt() == existe_prod.value(0) ){
                existe_produto =1;
                ui->txt_gr_pesquisa->clear();
                ui->txt_gr_pesquisa->setFocus();
                break;

            }else if(nome_prod == existe_prod.value(1)){
                existe_produto =1;
                ui->txt_gr_pesquisa->clear();
                ui->txt_gr_pesquisa->setFocus();
                break;
            }
        }
    }
    if(existe_produto==1){
        if(ser_removida<=estoque_possui){
            if(ui->txt_gr_qtde_remover->text() != ""){
                QSqlQuery query;
                query.prepare("insert into tb_log (registro,id,nome,qtde,hora,data) values('"+remover+"',"+QString::number(id.toInt())+",'"+nome_prod+"',"+QString::number(qtde_remover.toInt())+",'"+tempoTexto+"','"+dataTexto+"')");
                if(query.exec()){
                    QMessageBox::information(this,"","Quantidade do produto adicionada");
                    ui->txt_gr_codigo->clear();
                    ui->txt_gr_nome->clear();
                    ui->txt_gr_qtde_estoque->clear();
                    ui->txt_gr_qtde_remover->clear();
                    ui->txt_gr_pesquisa->clear();
                    ui->txt_gr_pesquisa->setFocus();
                }else{
                    QMessageBox::warning(this,"Erro","Não foi possível adicionar a quantidade do produto");
                }
            }else{
                QMessageBox::information(this,"","Digite a Quantidade a ser adicionada");
            }
          }else{
            QMessageBox::information(this,"","Digite a nova quantidade a ser removida");
            ui->txt_gr_qtde_remover->clear();
            ui->txt_gr_pesquisa->clear();
            ui->txt_gr_qtde_remover->setFocus();
          }

            QSqlQuery atualiza_estoque;
            atualiza_estoque.prepare("select * from tb_estoque");
            if(!atualiza_estoque.exec()){
                QMessageBox::warning(this,"Erro","Não foi possivel abrir o estoque");
            }else{
                while (atualiza_estoque.next()) {
                    if(atualiza_estoque.value(0)==QString::number(id.toInt())){
                        qtde_estoque=Aux_Qtde_est.toInt()-Aux_Qtde_rmv.toInt();
                        QString::number(qtde_estoque);
                        QString estoque = QString::number(qtde_estoque);
                        if(ser_removida<=estoque_possui){
                            atualiza_estoque.prepare("update tb_estoque set quantidade='"+estoque+"' where codígo='"+id+"'");
                            if(atualiza_estoque.exec())
                                QMessageBox::information(this,"","Estoque atualizado");
                            else
                                QMessageBox::information(this,"","Não foi possivel atualizar o estoque");
                        }else{
                            QMessageBox::warning(this,"Erro","A Quantidade a ser removida é maior do que no estoque");
                        }
                    }
                }
            }

        remover_linhas(ui->tw_gr_mostraPesquisa);
        int cont_linhas=0;
        QSqlQuery query;
        query.prepare("select * from tb_estoque order by codígo");
        if(query.exec()){
            ui->tw_gr_mostraPesquisa->setColumnCount(3);
            while (query.next()) {
                ui->tw_gr_mostraPesquisa->insertRow(cont_linhas);
                ui->tw_gr_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tw_gr_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tw_gr_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
                ui->tw_gr_mostraPesquisa->setRowHeight(cont_linhas,20);
                cont_linhas++;
            }
            ui->tw_gr_mostraPesquisa->setColumnWidth(0,70);
            ui->tw_gr_mostraPesquisa->setColumnWidth(1,150);
            ui->tw_gr_mostraPesquisa->setColumnWidth(1,100);
            QStringList cabecalhos={"Código","Produto","Quantidade"};
            ui->tw_gr_mostraPesquisa->setHorizontalHeaderLabels(cabecalhos);
            ui->tw_gr_mostraPesquisa->setStyleSheet("QTableView (selection-background-color:blue)");
            ui->tw_gr_mostraPesquisa->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tw_gr_mostraPesquisa->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_gr_mostraPesquisa->verticalHeader()->setVisible(false);
        }else{
            QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
        }
    }else{
        QMessageBox::warning(this,"Erro","Esse produto não foi cadastrado!\nCadastre o produto primeiro");
    }
}


void gestao_remover::on_btn_txt_mostra_podutos_clicked()
{
    remover_linhas(ui->tw_gr_mostraPesquisa);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_estoque order by codígo");
    if(query.exec()){
        ui->tw_gr_mostraPesquisa->setColumnCount(3);
        while (query.next()) {
            ui->tw_gr_mostraPesquisa->insertRow(cont_linhas);
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gr_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gr_mostraPesquisa->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_gr_mostraPesquisa->setColumnWidth(0,70);
        ui->tw_gr_mostraPesquisa->setColumnWidth(1,150);
        ui->tw_gr_mostraPesquisa->setColumnWidth(2,70);
        QStringList cabecalhos={"Código","Produto","Quantidade"};
        ui->tw_gr_mostraPesquisa->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_gr_mostraPesquisa->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_gr_mostraPesquisa->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_gr_mostraPesquisa->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_gr_mostraPesquisa->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }
    ui->txt_gr_codigo->clear();
    ui->txt_gr_nome->clear();
    ui->txt_gr_qtde_estoque->clear();
    ui->txt_gr_qtde_remover->clear();
    ui->txt_gr_pesquisa->clear();
    ui->txt_gr_pesquisa->setFocus();
}


