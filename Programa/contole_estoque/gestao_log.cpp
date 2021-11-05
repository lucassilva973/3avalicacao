#include "gestao_log.h"
#include "ui_gestao_log.h"

gestao_log::gestao_log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_log)
{
    ui->setupUi(this);

    remover_linhas(ui->tw_gl_log);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_log order by data");
    if(query.exec()){
        ui->tw_gl_log->setColumnCount(6);
        while (query.next()) {
            ui->tw_gl_log->insertRow(cont_linhas);
            ui->tw_gl_log->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gl_log->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gl_log->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gl_log->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_gl_log->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));
            ui->tw_gl_log->setItem(cont_linhas,5,new QTableWidgetItem(query.value(5).toString()));
            ui->tw_gl_log->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_gl_log->setColumnWidth(0,70);
        ui->tw_gl_log->setColumnWidth(1,70);
        ui->tw_gl_log->setColumnWidth(2,120);
        ui->tw_gl_log->setColumnWidth(3,70);
        ui->tw_gl_log->setColumnWidth(4,70);
        ui->tw_gl_log->setColumnWidth(5,70);
        QStringList cabecalhos={"Resgistro","Código","Produto","Quantidade","Hora","Data"};
        ui->tw_gl_log->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_gl_log->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_gl_log->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_gl_log->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_gl_log->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível listar os produtos");
    }




}

gestao_log::~gestao_log()
{
    delete ui;
}

void gestao_log::on_btn_gl_voltar_clicked()
{
    this->close();
}

void gestao_log::remover_linhas(QTableWidget *tw){
    while(tw->rowCount()>0){
       tw->removeRow(0);
    }
}

void gestao_log::on_btn_gl_gerarPDF_clicked()
{
    QString Nome_Arquivo=QDate::currentDate().toString("dd_MM_yyyy")+"_Register.pdf";
    QString caminho=QDir::currentPath();

    QPrinter textoPdf;
    textoPdf.setOutputFormat(QPrinter::PdfFormat);
    textoPdf.setOutputFileName(caminho+"/"+Nome_Arquivo);

    QPainter escrever_no_pdf;

    if(!escrever_no_pdf.begin(&textoPdf)){
        QMessageBox::warning(this,"Erro","Não foi Possível gerar o relatório pdf");
        return;
    }

    int linha=250;
    int salto=20;



        escrever_no_pdf.drawText(350,100,"Registro de Log");
        escrever_no_pdf.drawText(100,180,"Gerado na Data: "+QDate::currentDate().toString("dd/MM/yyyy"));
        escrever_no_pdf.drawText(250,180,"Hora: "+QTime::currentTime().toString("hh:mm:ss"));


        escrever_no_pdf.drawText(100,230,"Registro");
        escrever_no_pdf.drawText(200,230,"Código");
        escrever_no_pdf.drawText(300,230,"Produto");
        escrever_no_pdf.drawText(425,230,"Quantidade");
        escrever_no_pdf.drawText(550,230,"Hora");
        escrever_no_pdf.drawText(650,230,"Data");

    for (int i=0;i<ui->tw_gl_log->rowCount() ;i++ ) {
       escrever_no_pdf.drawText(110,linha,ui->tw_gl_log->item(i,0)->text()); //registro
       escrever_no_pdf.drawText(210,linha,ui->tw_gl_log->item(i,1)->text()); //id
       escrever_no_pdf.drawText(300,linha,ui->tw_gl_log->item(i,2)->text()); //nome
       escrever_no_pdf.drawText(435,linha,ui->tw_gl_log->item(i,3)->text()); //qtde
       escrever_no_pdf.drawText(540,linha,ui->tw_gl_log->item(i,4)->text()); //hora
       escrever_no_pdf.drawText(640,linha,ui->tw_gl_log->item(i,5)->text()); //data
       linha+=salto;
    }

    escrever_no_pdf.end();

}


void gestao_log::on_btn_gl_AbrirPdf_clicked()
{
    QString Nome_Arquivo=QDate::currentDate().toString("dd_MM_yyyy")+"_Register.pdf";
    QString caminho=QDir::currentPath();
    QDesktopServices::openUrl(QUrl("file:///"+caminho+"/"+Nome_Arquivo));
}


void gestao_log::on_btn_gl_filtrar_clicked()
{
    remover_linhas(ui->tw_gl_log);
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_log where data between '"+ui->gl_EscolheDataInicio->text()+"'and '"+ui->gl_escolheDataFim->text()+"'");
    if(query.exec()){
        ui->tw_gl_log->setColumnCount(6);
        while (query.next()) {
            ui->tw_gl_log->insertRow(cont_linhas);
            ui->tw_gl_log->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gl_log->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gl_log->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gl_log->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_gl_log->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));
            ui->tw_gl_log->setItem(cont_linhas,5,new QTableWidgetItem(query.value(5).toString()));
            ui->tw_gl_log->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
        ui->tw_gl_log->setColumnWidth(0,70);
        ui->tw_gl_log->setColumnWidth(1,70);
        ui->tw_gl_log->setColumnWidth(2,120);
        ui->tw_gl_log->setColumnWidth(3,70);
        ui->tw_gl_log->setColumnWidth(4,70);
        ui->tw_gl_log->setColumnWidth(5,70);
        QStringList cabecalhos={"Resgistro","Código","Produto","Quantidade","Hora","Data"};
        ui->tw_gl_log->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_gl_log->setStyleSheet("QTableView (selection-background-color:blue)");
        ui->tw_gl_log->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_gl_log->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_gl_log->verticalHeader()->setVisible(false);
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível filtrar os produtos");
    }
}

