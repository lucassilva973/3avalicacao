/********************************************************************************
** Form generated from reading UI file 'janela_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_PRINCIPAL_H
#define UI_JANELA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janela_principal
{
public:
    QAction *actionCadastro;
    QAction *actionInserir;
    QAction *actionRemover;
    QAction *actionSair;
    QAction *actionSobre;
    QAction *actionLog;
    QWidget *centralwidget;
    QTableWidget *tw_janela_principal;
    QLabel *label;
    QPushButton *principal_btn_atualizar;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuOp_es;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *janela_principal)
    {
        if (janela_principal->objectName().isEmpty())
            janela_principal->setObjectName(QString::fromUtf8("janela_principal"));
        janela_principal->resize(308, 430);
        janela_principal->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:#000;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        actionCadastro = new QAction(janela_principal);
        actionCadastro->setObjectName(QString::fromUtf8("actionCadastro"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/cadastro.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCadastro->setIcon(icon);
        actionInserir = new QAction(janela_principal);
        actionInserir->setObjectName(QString::fromUtf8("actionInserir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/icones/mais.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInserir->setIcon(icon1);
        actionRemover = new QAction(janela_principal);
        actionRemover->setObjectName(QString::fromUtf8("actionRemover"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/icones/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemover->setIcon(icon2);
        actionSair = new QAction(janela_principal);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/icones/sair.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon3);
        actionSobre = new QAction(janela_principal);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/icones/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon4);
        actionLog = new QAction(janela_principal);
        actionLog->setObjectName(QString::fromUtf8("actionLog"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/icones/log-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog->setIcon(icon5);
        centralwidget = new QWidget(janela_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tw_janela_principal = new QTableWidget(centralwidget);
        tw_janela_principal->setObjectName(QString::fromUtf8("tw_janela_principal"));
        tw_janela_principal->setGeometry(QRect(10, 40, 292, 301));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 8, 121, 31));
        label->setStyleSheet(QString::fromUtf8("color:#fff"));
        principal_btn_atualizar = new QPushButton(centralwidget);
        principal_btn_atualizar->setObjectName(QString::fromUtf8("principal_btn_atualizar"));
        principal_btn_atualizar->setGeometry(QRect(160, 14, 141, 21));
        principal_btn_atualizar->setStyleSheet(QString::fromUtf8(""));
        janela_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(janela_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 308, 20));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuOp_es = new QMenu(menubar);
        menuOp_es->setObjectName(QString::fromUtf8("menuOp_es"));
        janela_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(janela_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        janela_principal->setStatusBar(statusbar);
        toolBar = new QToolBar(janela_principal);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        janela_principal->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuOp_es->menuAction());
        menuGest_o->addAction(actionCadastro);
        menuGest_o->addSeparator();
        menuGest_o->addAction(actionInserir);
        menuGest_o->addAction(actionRemover);
        menuGest_o->addSeparator();
        menuGest_o->addAction(actionLog);
        menuOp_es->addAction(actionSair);
        menuOp_es->addSeparator();
        menuOp_es->addSeparator();
        menuOp_es->addAction(actionSobre);
        toolBar->addAction(actionCadastro);
        toolBar->addAction(actionInserir);
        toolBar->addAction(actionRemover);
        toolBar->addAction(actionLog);
        toolBar->addAction(actionSobre);

        retranslateUi(janela_principal);

        QMetaObject::connectSlotsByName(janela_principal);
    } // setupUi

    void retranslateUi(QMainWindow *janela_principal)
    {
        janela_principal->setWindowTitle(QCoreApplication::translate("janela_principal", "janela_principal", nullptr));
        actionCadastro->setText(QCoreApplication::translate("janela_principal", "Cadastro", nullptr));
        actionInserir->setText(QCoreApplication::translate("janela_principal", "Inserir", nullptr));
        actionRemover->setText(QCoreApplication::translate("janela_principal", "Remover", nullptr));
        actionSair->setText(QCoreApplication::translate("janela_principal", "Sair", nullptr));
        actionSobre->setText(QCoreApplication::translate("janela_principal", "Sobre", nullptr));
        actionLog->setText(QCoreApplication::translate("janela_principal", "Log", nullptr));
        label->setText(QCoreApplication::translate("janela_principal", "Produtos em estoque", nullptr));
        principal_btn_atualizar->setText(QCoreApplication::translate("janela_principal", "Atualizar", nullptr));
        menuGest_o->setTitle(QCoreApplication::translate("janela_principal", "Gest\303\243o", nullptr));
        menuOp_es->setTitle(QCoreApplication::translate("janela_principal", "Op\303\247\303\265es", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("janela_principal", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela_principal: public Ui_janela_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_PRINCIPAL_H
