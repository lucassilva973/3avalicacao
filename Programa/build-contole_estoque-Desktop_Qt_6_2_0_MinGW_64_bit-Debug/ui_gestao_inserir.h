/********************************************************************************
** Form generated from reading UI file 'gestao_inserir.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_INSERIR_H
#define UI_GESTAO_INSERIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestao_inserir
{
public:
    QTableWidget *tw_gi_mostraPesquisa;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_gi_cod;
    QRadioButton *rb_gi_nome;
    QPushButton *btn_gi_pesquisar;
    QLineEdit *txt_gi_pesquisa;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *txt_gi_nome;
    QLabel *label;
    QLineEdit *txt_gi_codigo;
    QLabel *label_3;
    QLineEdit *txt_gi_qtde_estoque;
    QLabel *label_4;
    QLineEdit *txt_gi_qtde_adicionar;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_gi_voltar;
    QPushButton *btn_gi_adicionar;
    QPushButton *pushButton;

    void setupUi(QDialog *gestao_inserir)
    {
        if (gestao_inserir->objectName().isEmpty())
            gestao_inserir->setObjectName(QString::fromUtf8("gestao_inserir"));
        gestao_inserir->resize(693, 347);
        gestao_inserir->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        tw_gi_mostraPesquisa = new QTableWidget(gestao_inserir);
        tw_gi_mostraPesquisa->setObjectName(QString::fromUtf8("tw_gi_mostraPesquisa"));
        tw_gi_mostraPesquisa->setGeometry(QRect(10, 100, 320, 231));
        groupBox = new QGroupBox(gestao_inserir);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 121, 80));
        groupBox->setStyleSheet(QString::fromUtf8("color:#fff"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 60, 46));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rb_gi_cod = new QRadioButton(layoutWidget);
        rb_gi_cod->setObjectName(QString::fromUtf8("rb_gi_cod"));
        rb_gi_cod->setStyleSheet(QString::fromUtf8("color:#fff"));
        rb_gi_cod->setChecked(true);

        verticalLayout->addWidget(rb_gi_cod);

        rb_gi_nome = new QRadioButton(layoutWidget);
        rb_gi_nome->setObjectName(QString::fromUtf8("rb_gi_nome"));
        rb_gi_nome->setStyleSheet(QString::fromUtf8("color:#fff"));

        verticalLayout->addWidget(rb_gi_nome);

        btn_gi_pesquisar = new QPushButton(gestao_inserir);
        btn_gi_pesquisar->setObjectName(QString::fromUtf8("btn_gi_pesquisar"));
        btn_gi_pesquisar->setGeometry(QRect(259, 29, 71, 21));
        txt_gi_pesquisa = new QLineEdit(gestao_inserir);
        txt_gi_pesquisa->setObjectName(QString::fromUtf8("txt_gi_pesquisa"));
        txt_gi_pesquisa->setGeometry(QRect(140, 59, 191, 31));
        layoutWidget1 = new QWidget(gestao_inserir);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(350, 40, 311, 291));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        txt_gi_nome = new QLineEdit(layoutWidget1);
        txt_gi_nome->setObjectName(QString::fromUtf8("txt_gi_nome"));

        verticalLayout_3->addWidget(txt_gi_nome);


        verticalLayout_2->addLayout(verticalLayout_3);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        txt_gi_codigo = new QLineEdit(layoutWidget1);
        txt_gi_codigo->setObjectName(QString::fromUtf8("txt_gi_codigo"));

        verticalLayout_2->addWidget(txt_gi_codigo);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        txt_gi_qtde_estoque = new QLineEdit(layoutWidget1);
        txt_gi_qtde_estoque->setObjectName(QString::fromUtf8("txt_gi_qtde_estoque"));

        verticalLayout_2->addWidget(txt_gi_qtde_estoque);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        txt_gi_qtde_adicionar = new QLineEdit(layoutWidget1);
        txt_gi_qtde_adicionar->setObjectName(QString::fromUtf8("txt_gi_qtde_adicionar"));

        verticalLayout_2->addWidget(txt_gi_qtde_adicionar);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_gi_voltar = new QPushButton(layoutWidget1);
        btn_gi_voltar->setObjectName(QString::fromUtf8("btn_gi_voltar"));

        horizontalLayout_2->addWidget(btn_gi_voltar);

        btn_gi_adicionar = new QPushButton(layoutWidget1);
        btn_gi_adicionar->setObjectName(QString::fromUtf8("btn_gi_adicionar"));

        horizontalLayout_2->addWidget(btn_gi_adicionar);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_7);

        pushButton = new QPushButton(gestao_inserir);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 29, 111, 21));

        retranslateUi(gestao_inserir);

        QMetaObject::connectSlotsByName(gestao_inserir);
    } // setupUi

    void retranslateUi(QDialog *gestao_inserir)
    {
        gestao_inserir->setWindowTitle(QCoreApplication::translate("gestao_inserir", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gestao_inserir", "Metodo de pesquisa", nullptr));
        rb_gi_cod->setText(QCoreApplication::translate("gestao_inserir", "C\303\263digo", nullptr));
        rb_gi_nome->setText(QCoreApplication::translate("gestao_inserir", "Nome", nullptr));
        btn_gi_pesquisar->setText(QCoreApplication::translate("gestao_inserir", "Pesquisar", nullptr));
        label_2->setText(QCoreApplication::translate("gestao_inserir", "Nome do produto", nullptr));
        label->setText(QCoreApplication::translate("gestao_inserir", "C\303\263digo do produto", nullptr));
        label_3->setText(QCoreApplication::translate("gestao_inserir", "Quantidade em estoque", nullptr));
        label_4->setText(QCoreApplication::translate("gestao_inserir", "Quantidade a adicionar", nullptr));
        btn_gi_voltar->setText(QCoreApplication::translate("gestao_inserir", "Voltar", nullptr));
        btn_gi_adicionar->setText(QCoreApplication::translate("gestao_inserir", "Adicionar", nullptr));
        pushButton->setText(QCoreApplication::translate("gestao_inserir", "Todos os produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestao_inserir: public Ui_gestao_inserir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_INSERIR_H
