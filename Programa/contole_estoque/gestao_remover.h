#ifndef GESTAO_REMOVER_H
#define GESTAO_REMOVER_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QTableWidget>
#include <QTime>
#include <QDateTime>
#include <QDate>
namespace Ui {
class gestao_remover;
}

class gestao_remover : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_remover(QWidget *parent = nullptr);
    ~gestao_remover();
    void remover_linhas(QTableWidget *tw);
private slots:
    void on_btn_gr_pesquisar_clicked();

    void on_btn_gr_voltar_clicked();

    void on_btn_gr_remove_clicked();

    void on_btn_txt_mostra_podutos_clicked();

private:
    Ui::gestao_remover *ui;
    QTime *tempo;
};

#endif // GESTAO_REMOVER_H
