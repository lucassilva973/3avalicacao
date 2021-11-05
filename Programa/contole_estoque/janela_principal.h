#ifndef JANELA_PRINCIPAL_H
#define JANELA_PRINCIPAL_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMainWindow>
#include "gestao_cadastro.h"
#include <QMessageBox>
#include <QTableWidget>
#include "gestao_inserir.h"
#include <QDir>
#include "gestao_log.h"
#include <QDir>
#include "gestao_remover.h"
QT_BEGIN_NAMESPACE
namespace Ui { class janela_principal; }
QT_END_NAMESPACE

class janela_principal : public QMainWindow
{
    Q_OBJECT

public:
    janela_principal(QWidget *parent = nullptr);
    ~janela_principal();
    void remover_linhas(QTableWidget *tw);
private slots:
    void on_actionCadastro_triggered();

    void on_actionSair_triggered();

    void on_principal_btn_atualizar_clicked();

    void on_actionInserir_triggered();

    void on_actionLog_triggered();

    void on_actionSobre_triggered();

    void on_actionRemover_triggered();


private:
    Ui::janela_principal *ui;
};
#endif // JANELA_PRINCIPAL_H
