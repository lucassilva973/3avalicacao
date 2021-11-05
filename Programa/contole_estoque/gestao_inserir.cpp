#include "gestao_inserir.h"
#include "ui_gestao_inserir.h"

gestao_inserir::gestao_inserir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_inserir)
{
    ui->setupUi(this);

    remover_linhas(ui->tw_gi_mostraPesquisa);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_estoque order by codígo");
    if(query.exec()){
        ui->tw_gi_mostraPesquisa->setColumnCount(3);
        while (query.next()) {
            ui->tw_gi_mostraPesquisa->insertRow(cont_linhas);
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gi_mostraPesquisa->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_gi_mostraPesquisa->setColumnWidth(0,70);
        ui->tw_gi_mostraPesquisa->setColumnWidth(1,150);
        ui->tw_gi_mostraPesquisa->setColumnWidth(1,100);
        QStringList cabecalhos={"Código","Produto","Quantidade"};
        ui->tw_gi_mostraPesquisa->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_gi_mostraPesquisa->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_gi_mostraPesquisa->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_gi_mostraPesquisa->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_gi_mostraPesquisa->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }

}

gestao_inserir::~gestao_inserir()
{
    delete ui;
}

void gestao_inserir::remover_linhas(QTableWidget *tw){
    while(tw->rowCount()>0){
       tw->removeRow(0);
    }
}

void gestao_inserir::on_btn_gi_pesquisar_clicked()
{

    QString busca;
    if(ui->txt_gi_pesquisa->text() ==""){
        if(ui->rb_gi_cod->isChecked()){
            busca="select * from tb_estoque by order codígo";
         }else
            busca="select * from tb_estoque by order nome_produto";
    }else{
        if(ui->rb_gi_cod->isChecked()){
            busca="select * from tb_estoque where codígo='"+ui->txt_gi_pesquisa->text()+"'";
            remover_linhas(ui->tw_gi_mostraPesquisa);
        }else{
            busca="select * from tb_estoque where nome_produto='"+ui->txt_gi_pesquisa->text()+"'";
            remover_linhas(ui->tw_gi_mostraPesquisa);
        }
    }
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare(busca);

    if(query.exec()){
        while (query.next()) {
            ui->tw_gi_mostraPesquisa->insertRow(cont_linhas);
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gi_mostraPesquisa->setRowHeight(cont_linhas,20);
            cont_linhas++;
            ui->txt_gi_codigo->setText(query.value(0).toString());
            ui->txt_gi_nome->setText(query.value(1).toString());
            ui->txt_gi_qtde_estoque->setText(query.value(2).toString());
        }
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível pesquisar o produto\nCampo de pesquisa vázio!");
    }

}


void gestao_inserir::on_btn_gi_adicionar_clicked()
{


    QString adicionar="ADD";
    QString id=ui->txt_gi_codigo->text();
    QString nome_prod=ui->txt_gi_nome->text();
    QString qtde_adiciona = ui->txt_gi_qtde_adicionar->text();
    QString tempoTexto=QTime::currentTime().toString("hh:mm:ss");
    QString dataTexto=QDate::currentDate().toString("dd/MM/yyyy");

    QString Aux_Qtde_add = ui->txt_gi_qtde_adicionar->text();
    QString Aux_Qtde_est = ui->txt_gi_qtde_estoque->text();

    int qtde_estoque=0;

    int existe_produto=0;
    QSqlQuery existe_prod;
    existe_prod.prepare("select codígo,nome_produto from tb_estoque");

    if(existe_prod.exec()){
        while (existe_prod.next()) {
            if(id.toInt() == existe_prod.value(0) ){
                existe_produto =1;
                ui->txt_gi_pesquisa->clear();
                ui->txt_gi_pesquisa->setFocus();
                break;

            }else if(nome_prod == existe_prod.value(1)){
                existe_produto =1;
                ui->txt_gi_pesquisa->clear();
                ui->txt_gi_pesquisa->setFocus();
                break;
            }
        }
    }
    if(existe_produto==1){
        if(ui->txt_gi_qtde_adicionar->text() != ""){
            QSqlQuery query;
            query.prepare("insert into tb_log (registro,id,nome,qtde,hora,data) values('"+adicionar+"',"+QString::number(id.toInt())+",'"+nome_prod+"',"+QString::number(qtde_adiciona.toInt())+",'"+tempoTexto+"','"+dataTexto+"')");
            if(query.exec()){
                QMessageBox::information(this,"","Quantidade do produto adicionada");
                ui->txt_gi_codigo->clear();
                ui->txt_gi_nome->clear();
                ui->txt_gi_qtde_estoque->clear();
                ui->txt_gi_qtde_adicionar->clear();
                ui->txt_gi_pesquisa->clear();
                ui->txt_gi_pesquisa->setFocus();
            }else{
                QMessageBox::warning(this,"Erro","Não foi possível adicionar a quantidade do produto");
            }
        }else{
            QMessageBox::information(this,"","Digite a Quantidade a ser adicionada");
        }

        QSqlQuery atualiza_estoque;
        atualiza_estoque.prepare("select * from tb_estoque");
        if(!atualiza_estoque.exec()){
            QMessageBox::warning(this,"Erro","Não foi possivel abrir o estoque");
        }else{
            while (atualiza_estoque.next()) {
                if(atualiza_estoque.value(0)==QString::number(id.toInt())){
                    qtde_estoque=Aux_Qtde_est.toInt()+Aux_Qtde_add.toInt();
                    QString::number(qtde_estoque);
                    QString estoque = QString::number(qtde_estoque);
                    atualiza_estoque.prepare("update tb_estoque set quantidade='"+estoque+"' where codígo='"+id+"'");
                    if(atualiza_estoque.exec())
                        QMessageBox::information(this,"","Estoque atualizado");
                    else
                        QMessageBox::information(this,"","Não foi possivel atualizar o estoque");
                }
            }

        }




        remover_linhas(ui->tw_gi_mostraPesquisa);
        int cont_linhas=0;
        QSqlQuery query;
        query.prepare("select * from tb_estoque order by codígo");
        if(query.exec()){
            ui->tw_gi_mostraPesquisa->setColumnCount(3);
            while (query.next()) {
                ui->tw_gi_mostraPesquisa->insertRow(cont_linhas);
                ui->tw_gi_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tw_gi_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tw_gi_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
                ui->tw_gi_mostraPesquisa->setRowHeight(cont_linhas,20);
                cont_linhas++;
            }
            ui->tw_gi_mostraPesquisa->setColumnWidth(0,70);
            ui->tw_gi_mostraPesquisa->setColumnWidth(1,150);
            ui->tw_gi_mostraPesquisa->setColumnWidth(1,100);
            QStringList cabecalhos={"Código","Produto","Quantidade"};
            ui->tw_gi_mostraPesquisa->setHorizontalHeaderLabels(cabecalhos);
            ui->tw_gi_mostraPesquisa->setStyleSheet("QTableView (selection-background-color:blue)");
            ui->tw_gi_mostraPesquisa->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tw_gi_mostraPesquisa->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_gi_mostraPesquisa->verticalHeader()->setVisible(false);
        }else{
            QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
        }
    }else{
        QMessageBox::warning(this,"Erro","Esse produto não foi cadastrado!\nCadastre o produto primeiro");
    }


}


void gestao_inserir::on_btn_gi_voltar_clicked()
{
    this->close();
}


void gestao_inserir::on_pushButton_clicked()
{
    remover_linhas(ui->tw_gi_mostraPesquisa);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_estoque order by codígo");
    if(query.exec()){
        ui->tw_gi_mostraPesquisa->setColumnCount(3);
        while (query.next()) {
            ui->tw_gi_mostraPesquisa->insertRow(cont_linhas);
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gi_mostraPesquisa->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gi_mostraPesquisa->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_gi_mostraPesquisa->setColumnWidth(0,70);
        ui->tw_gi_mostraPesquisa->setColumnWidth(1,150);
        ui->tw_gi_mostraPesquisa->setColumnWidth(1,100);
        QStringList cabecalhos={"Código","Produto","Quantidade"};
        ui->tw_gi_mostraPesquisa->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_gi_mostraPesquisa->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_gi_mostraPesquisa->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_gi_mostraPesquisa->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_gi_mostraPesquisa->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }
    ui->txt_gi_codigo->clear();
    ui->txt_gi_nome->clear();
    ui->txt_gi_qtde_estoque->clear();
    ui->txt_gi_qtde_adicionar->clear();
    ui->txt_gi_pesquisa->clear();
    ui->txt_gi_pesquisa->setFocus();
}

