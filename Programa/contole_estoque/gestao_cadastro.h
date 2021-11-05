#ifndef GESTAO_CADASTRO_H
#define GESTAO_CADASTRO_H
#include <QtSql>
#include <QDialog>
#include <QMessageBox>


namespace Ui {
class gestao_cadastro;
}

class gestao_cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_cadastro(QWidget *parent = nullptr);
    ~gestao_cadastro();

private slots:
    void on_cad_btn_limpar_clicked();

    void on_cad_btn_cadastro_clicked();

    void on_cad_btn_voltar_clicked();

private:
    Ui::gestao_cadastro *ui;
};

#endif // GESTAO_CADASTRO_H
