/********************************************************************************
** Form generated from reading UI file 'gestao_log.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_LOG_H
#define UI_GESTAO_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestao_log
{
public:
    QTableWidget *tw_gl_log;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDateEdit *gl_EscolheDataInicio;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QDateEdit *gl_escolheDataFim;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_gl_filtrar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_gl_AbrirPdf;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_gl_voltar;
    QPushButton *btn_gl_gerarPDF;

    void setupUi(QDialog *gestao_log)
    {
        if (gestao_log->objectName().isEmpty())
            gestao_log->setObjectName(QString::fromUtf8("gestao_log"));
        gestao_log->resize(518, 456);
        gestao_log->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color:#000;\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"background-color:#fff;\n"
"color:#000;\n"
"padding:10px;\n"
"border-radius:10px;\n"
"borde:1px solid #fff;\n"
"}\n"
"\n"
"QLabel{\n"
"color:#fff\n"
"}"));
        tw_gl_log = new QTableWidget(gestao_log);
        tw_gl_log->setObjectName(QString::fromUtf8("tw_gl_log"));
        tw_gl_log->setGeometry(QRect(10, 118, 491, 291));
        label = new QLabel(gestao_log);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(127, 0, 261, 51));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setFocusPolicy(Qt::NoFocus);
        layoutWidget = new QWidget(gestao_log);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 62, 491, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        gl_EscolheDataInicio = new QDateEdit(layoutWidget);
        gl_EscolheDataInicio->setObjectName(QString::fromUtf8("gl_EscolheDataInicio"));

        verticalLayout_2->addWidget(gl_EscolheDataInicio);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        gl_escolheDataFim = new QDateEdit(layoutWidget);
        gl_escolheDataFim->setObjectName(QString::fromUtf8("gl_escolheDataFim"));

        verticalLayout->addWidget(gl_escolheDataFim);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btn_gl_filtrar = new QPushButton(layoutWidget);
        btn_gl_filtrar->setObjectName(QString::fromUtf8("btn_gl_filtrar"));

        verticalLayout_3->addWidget(btn_gl_filtrar);


        horizontalLayout_4->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(gestao_log);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 409, 491, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_gl_AbrirPdf = new QPushButton(layoutWidget1);
        btn_gl_AbrirPdf->setObjectName(QString::fromUtf8("btn_gl_AbrirPdf"));

        horizontalLayout_2->addWidget(btn_gl_AbrirPdf);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_gl_voltar = new QPushButton(layoutWidget1);
        btn_gl_voltar->setObjectName(QString::fromUtf8("btn_gl_voltar"));

        horizontalLayout->addWidget(btn_gl_voltar);

        btn_gl_gerarPDF = new QPushButton(layoutWidget1);
        btn_gl_gerarPDF->setObjectName(QString::fromUtf8("btn_gl_gerarPDF"));

        horizontalLayout->addWidget(btn_gl_gerarPDF);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(gestao_log);

        QMetaObject::connectSlotsByName(gestao_log);
    } // setupUi

    void retranslateUi(QDialog *gestao_log)
    {
        gestao_log->setWindowTitle(QCoreApplication::translate("gestao_log", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gestao_log", "Registro de log", nullptr));
        label_2->setText(QCoreApplication::translate("gestao_log", "Data Inicial", nullptr));
        label_3->setText(QCoreApplication::translate("gestao_log", "Data Final", nullptr));
        btn_gl_filtrar->setText(QCoreApplication::translate("gestao_log", "Filtrar", nullptr));
        btn_gl_AbrirPdf->setText(QCoreApplication::translate("gestao_log", "Abrir Pdf", nullptr));
        btn_gl_voltar->setText(QCoreApplication::translate("gestao_log", "Voltar", nullptr));
        btn_gl_gerarPDF->setText(QCoreApplication::translate("gestao_log", "Gerar Relat\303\263rioPDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestao_log: public Ui_gestao_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_LOG_H
