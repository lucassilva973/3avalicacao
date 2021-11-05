/********************************************************************************
** Form generated from reading UI file 'gestao_cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_CADASTRO_H
#define UI_GESTAO_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gestao_cadastro
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *cad_cod_line;
    QLabel *label_2;
    QLineEdit *cad_nome_line;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *cad_qte_line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cad_btn_voltar;
    QPushButton *cad_btn_limpar;
    QPushButton *cad_btn_cadastro;

    void setupUi(QDialog *gestao_cadastro)
    {
        if (gestao_cadastro->objectName().isEmpty())
            gestao_cadastro->setObjectName(QString::fromUtf8("gestao_cadastro"));
        gestao_cadastro->resize(563, 336);
        gestao_cadastro->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        verticalLayout_6 = new QVBoxLayout(gestao_cadastro);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(gestao_cadastro);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cad_cod_line = new QLineEdit(gestao_cadastro);
        cad_cod_line->setObjectName(QString::fromUtf8("cad_cod_line"));

        verticalLayout->addWidget(cad_cod_line);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(gestao_cadastro);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        cad_nome_line = new QLineEdit(gestao_cadastro);
        cad_nome_line->setObjectName(QString::fromUtf8("cad_nome_line"));

        verticalLayout_2->addWidget(cad_nome_line);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(gestao_cadastro);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        cad_qte_line = new QLineEdit(gestao_cadastro);
        cad_qte_line->setObjectName(QString::fromUtf8("cad_qte_line"));

        verticalLayout_3->addWidget(cad_qte_line);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cad_btn_voltar = new QPushButton(gestao_cadastro);
        cad_btn_voltar->setObjectName(QString::fromUtf8("cad_btn_voltar"));

        horizontalLayout_2->addWidget(cad_btn_voltar);

        cad_btn_limpar = new QPushButton(gestao_cadastro);
        cad_btn_limpar->setObjectName(QString::fromUtf8("cad_btn_limpar"));

        horizontalLayout_2->addWidget(cad_btn_limpar);

        cad_btn_cadastro = new QPushButton(gestao_cadastro);
        cad_btn_cadastro->setObjectName(QString::fromUtf8("cad_btn_cadastro"));

        horizontalLayout_2->addWidget(cad_btn_cadastro);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(gestao_cadastro);

        QMetaObject::connectSlotsByName(gestao_cadastro);
    } // setupUi

    void retranslateUi(QDialog *gestao_cadastro)
    {
        gestao_cadastro->setWindowTitle(QCoreApplication::translate("gestao_cadastro", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gestao_cadastro", "Cod\303\255go", nullptr));
        label_2->setText(QCoreApplication::translate("gestao_cadastro", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("gestao_cadastro", "Quantidade", nullptr));
        cad_btn_voltar->setText(QCoreApplication::translate("gestao_cadastro", "Voltar", nullptr));
        cad_btn_limpar->setText(QCoreApplication::translate("gestao_cadastro", "Limpar", nullptr));
        cad_btn_cadastro->setText(QCoreApplication::translate("gestao_cadastro", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestao_cadastro: public Ui_gestao_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_CADASTRO_H
