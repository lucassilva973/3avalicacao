#include "gestao_cadastro.h"
#include "ui_gestao_cadastro.h"



gestao_cadastro::gestao_cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_cadastro)
{

    ui->setupUi(this);

}

gestao_cadastro::~gestao_cadastro()
{
    delete ui;
   }

void gestao_cadastro::on_cad_btn_limpar_clicked()
{
    ui->cad_cod_line->clear();
    ui->cad_nome_line->clear();
    ui->cad_qte_line->clear();
    ui->cad_cod_line->setFocus();
}


void gestao_cadastro::on_cad_btn_cadastro_clicked()
{
        int repetido=0;

        QString cad_codigo = ui->cad_cod_line->text();
        QString cad_nome = ui->cad_nome_line->text();
        QString cad_quantidade = ui->cad_qte_line->text();

        QSqlQuery query;
        query.prepare("select codígo,nome_produto from tb_estoque");

        if(query.exec()){
            while (query.next()) {
                if(cad_codigo.toInt() == query.value(0) ){
                    QMessageBox::warning(this,"Erro","O código utilizado já existe!");
                    repetido = 1;
                    ui->cad_cod_line->clear();
                    ui->cad_cod_line->setFocus();
                    break;

                }else if(cad_nome == query.value(1)){
                    QMessageBox::warning(this,"Erro","O nome utilizado já existe!");
                    repetido =1;
                    ui->cad_nome_line->clear();
                    ui->cad_nome_line->setFocus();
                    break;
                }
            }

         if(repetido == 0 ){
            query.prepare("insert into tb_estoque (codígo,nome_produto,quantidade) values("+QString::number(cad_codigo.toInt())+",'"+cad_nome+"',"+QString::number(cad_quantidade.toInt())+")");

            if(query.exec()){
                QMessageBox::information(this,"","Produto cadastrado com sucesso");
                ui->cad_cod_line->clear();
                ui->cad_nome_line->clear();
                ui->cad_qte_line->clear();
                ui->cad_cod_line->setFocus();
            }else
                QMessageBox::warning(this,"ERRO","não executou a query");
        }

    }


}

void gestao_cadastro::on_cad_btn_voltar_clicked()
{
    this->close();
}

