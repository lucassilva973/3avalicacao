#ifndef GESTAO_LOG_H
#define GESTAO_LOG_H

#include <QDialog>
#include <QDate>
#include <QTableWidget>
#include <QMessageBox>
#include <QtSql>
#include <QPrinter>
#include <QPainter>
#include <QDir>
#include <QDesktopServices>
#include <QTime>
#include <QDateTime>
namespace Ui {
class gestao_log;
}

class gestao_log : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_log(QWidget *parent = nullptr);
    ~gestao_log();
    void remover_linhas(QTableWidget *tw);
private slots:
    void on_btn_gl_voltar_clicked();

    void on_btn_gl_gerarPDF_clicked();

    void on_btn_gl_AbrirPdf_clicked();

    void on_btn_gl_filtrar_clicked();

private:
    Ui::gestao_log *ui;
    QTime *tempo;
};

#endif // GESTAO_LOG_H
