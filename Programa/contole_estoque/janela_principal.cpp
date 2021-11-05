#include "janela_principal.h"
#include "ui_janela_principal.h"

static QSqlDatabase Banco_de_dados=QSqlDatabase::addDatabase("QSQLITE");

janela_principal::janela_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::janela_principal)
{
    ui->setupUi(this);
    QString local=QApplication::applicationDirPath()+"/db/estoque.db";
    Banco_de_dados.setDatabaseName(local);

    if(!Banco_de_dados.open()){
        QMessageBox::warning(this,"Erro",local);
    }

    remover_linhas(ui->tw_janela_principal);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_estoque order by codígo");
    if(query.exec()){
        ui->tw_janela_principal->setColumnCount(3);
        while (query.next()) {
            ui->tw_janela_principal->insertRow(cont_linhas);
            ui->tw_janela_principal->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_janela_principal->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_janela_principal->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_janela_principal->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_janela_principal->setColumnWidth(0,70);
        ui->tw_janela_principal->setColumnWidth(1,150);
        ui->tw_janela_principal->setColumnWidth(2,70);
        QStringList cabecalhos={"Código","Produto","Quantidade"};
        ui->tw_janela_principal->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_janela_principal->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_janela_principal->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_janela_principal->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_janela_principal->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }




}

janela_principal::~janela_principal()
{
    delete ui;
}


void janela_principal::on_actionCadastro_triggered()
{
    if(!Banco_de_dados.isOpen()){
        QMessageBox::warning(this,"Erro","estoque não foi aberto");
        return;
    }

    gestao_cadastro cadastro;
    cadastro.exec();

}


void janela_principal::on_actionSair_triggered()
{

    this->close();
}


void janela_principal::on_principal_btn_atualizar_clicked()
{
    remover_linhas(ui->tw_janela_principal);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_estoque order by codígo");
    if(query.exec()){
        ui->tw_janela_principal->setColumnCount(3);
        while (query.next()) {
            ui->tw_janela_principal->insertRow(cont_linhas);
            ui->tw_janela_principal->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_janela_principal->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_janela_principal->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_janela_principal->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_janela_principal->setColumnWidth(0,70);
        ui->tw_janela_principal->setColumnWidth(1,150);
        ui->tw_janela_principal->setColumnWidth(2,70);
        QStringList cabecalhos={"Código","Produto","Quantidade"};
        ui->tw_janela_principal->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_janela_principal->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_janela_principal->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_janela_principal->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_janela_principal->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }
}

void janela_principal::remover_linhas(QTableWidget *tw){
    while(tw->rowCount()>0){
       tw->removeRow(0);
    }
}

void janela_principal::on_actionInserir_triggered()
{
    gestao_inserir insere;
    insere.exec();
}


void janela_principal::on_actionLog_triggered()
{
    gestao_log registro_log;
    registro_log.exec();
}






void janela_principal::on_actionSobre_triggered()
{
    QMessageBox::information(this,"Sobre o aplicativo","3ª Avaliação da Disciplina de Programação Estruturada\nProfessor: Sebastião Alves\nNome do projeto: Controle de Estoque\nProjeto desenvolvido por: João Lucas e Lisandra Cristina");


}


void janela_principal::on_actionRemover_triggered()
{
    gestao_remover remover;
    remover.exec();
}

