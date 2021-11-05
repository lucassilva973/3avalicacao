 #ifndef GESTAO_INSERIR_H
#define GESTAO_INSERIR_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QTableWidget>
#include <QTime>
#include <QDateTime>
#include <QDate>

namespace Ui {
class gestao_inserir;
}

class gestao_inserir : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_inserir(QWidget *parent = nullptr);
    ~gestao_inserir();
    void remover_linhas(QTableWidget *tw);
private slots:
    void on_btn_gi_pesquisar_clicked();

    void on_btn_gi_adicionar_clicked();

    void on_btn_gi_voltar_clicked();

    void on_pushButton_clicked();

private:
    Ui::gestao_inserir *ui;
    QTime *tempo;
};

#endif // GESTAO_INSERIR_H
