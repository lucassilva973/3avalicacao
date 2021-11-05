/********************************************************************************
** Form generated from reading UI file 'gestao_remover.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_REMOVER_H
#define UI_GESTAO_REMOVER_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestao_remover
{
public:
    QPushButton *btn_gr_pesquisar;
    QTableWidget *tw_gr_mostraPesquisa;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rb_gr_cod;
    QRadioButton *rb_gr_nome;
    QLineEdit *txt_gr_pesquisa;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QLineEdit *txt_gr_codigo;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_6;
    QLineEdit *txt_gr_nome;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_7;
    QLineEdit *txt_gr_qtde_estoque;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *txt_gr_qtde_remover;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_gr_voltar;
    QPushButton *btn_gr_remove;
    QPushButton *btn_txt_mostra_podutos;

    void setupUi(QDialog *gestao_remover)
    {
        if (gestao_remover->objectName().isEmpty())
            gestao_remover->setObjectName(QString::fromUtf8("gestao_remover"));
        gestao_remover->resize(711, 364);
        gestao_remover->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        btn_gr_pesquisar = new QPushButton(gestao_remover);
        btn_gr_pesquisar->setObjectName(QString::fromUtf8("btn_gr_pesquisar"));
        btn_gr_pesquisar->setGeometry(QRect(269, 32, 71, 21));
        tw_gr_mostraPesquisa = new QTableWidget(gestao_remover);
        tw_gr_mostraPesquisa->setObjectName(QString::fromUtf8("tw_gr_mostraPesquisa"));
        tw_gr_mostraPesquisa->setGeometry(QRect(20, 100, 320, 231));
        groupBox = new QGroupBox(gestao_remover);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 121, 80));
        groupBox->setStyleSheet(QString::fromUtf8("color:#fff;"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 60, 46));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rb_gr_cod = new QRadioButton(layoutWidget_2);
        rb_gr_cod->setObjectName(QString::fromUtf8("rb_gr_cod"));
        rb_gr_cod->setStyleSheet(QString::fromUtf8("color:#fff"));
        rb_gr_cod->setChecked(true);

        verticalLayout_6->addWidget(rb_gr_cod);

        rb_gr_nome = new QRadioButton(layoutWidget_2);
        rb_gr_nome->setObjectName(QString::fromUtf8("rb_gr_nome"));
        rb_gr_nome->setStyleSheet(QString::fromUtf8("color:#fff"));

        verticalLayout_6->addWidget(rb_gr_nome);

        txt_gr_pesquisa = new QLineEdit(gestao_remover);
        txt_gr_pesquisa->setObjectName(QString::fromUtf8("txt_gr_pesquisa"));
        txt_gr_pesquisa->setGeometry(QRect(150, 59, 191, 31));
        txt_gr_pesquisa->setStyleSheet(QString::fromUtf8("color:#000"));
        layoutWidget = new QWidget(gestao_remover);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 30, 301, 301));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_9->addWidget(label_5);

        txt_gr_codigo = new QLineEdit(layoutWidget);
        txt_gr_codigo->setObjectName(QString::fromUtf8("txt_gr_codigo"));

        verticalLayout_9->addWidget(txt_gr_codigo);


        verticalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_10->addWidget(label_6);

        txt_gr_nome = new QLineEdit(layoutWidget);
        txt_gr_nome->setObjectName(QString::fromUtf8("txt_gr_nome"));

        verticalLayout_10->addWidget(txt_gr_nome);


        verticalLayout_2->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_11->addWidget(label_7);

        txt_gr_qtde_estoque = new QLineEdit(layoutWidget);
        txt_gr_qtde_estoque->setObjectName(QString::fromUtf8("txt_gr_qtde_estoque"));

        verticalLayout_11->addWidget(txt_gr_qtde_estoque);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        txt_gr_qtde_remover = new QLineEdit(layoutWidget);
        txt_gr_qtde_remover->setObjectName(QString::fromUtf8("txt_gr_qtde_remover"));

        verticalLayout->addWidget(txt_gr_qtde_remover);


        verticalLayout_11->addLayout(verticalLayout);


        verticalLayout_2->addLayout(verticalLayout_11);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_gr_voltar = new QPushButton(layoutWidget);
        btn_gr_voltar->setObjectName(QString::fromUtf8("btn_gr_voltar"));

        horizontalLayout->addWidget(btn_gr_voltar);

        btn_gr_remove = new QPushButton(layoutWidget);
        btn_gr_remove->setObjectName(QString::fromUtf8("btn_gr_remove"));

        horizontalLayout->addWidget(btn_gr_remove);


        verticalLayout_3->addLayout(horizontalLayout);

        btn_txt_mostra_podutos = new QPushButton(gestao_remover);
        btn_txt_mostra_podutos->setObjectName(QString::fromUtf8("btn_txt_mostra_podutos"));
        btn_txt_mostra_podutos->setGeometry(QRect(150, 32, 111, 21));

        retranslateUi(gestao_remover);

        QMetaObject::connectSlotsByName(gestao_remover);
    } // setupUi

    void retranslateUi(QDialog *gestao_remover)
    {
        gestao_remover->setWindowTitle(QCoreApplication::translate("gestao_remover", "Dialog", nullptr));
        btn_gr_pesquisar->setText(QCoreApplication::translate("gestao_remover", "Pesquisar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gestao_remover", "Metodo de pesquisa", nullptr));
        rb_gr_cod->setText(QCoreApplication::translate("gestao_remover", "C\303\263digo", nullptr));
        rb_gr_nome->setText(QCoreApplication::translate("gestao_remover", "Nome", nullptr));
        label_5->setText(QCoreApplication::translate("gestao_remover", "C\303\263digo do produto", nullptr));
        label_6->setText(QCoreApplication::translate("gestao_remover", "Nome do produto", nullptr));
        label_7->setText(QCoreApplication::translate("gestao_remover", "Quantidade em estoque", nullptr));
        label_8->setText(QCoreApplication::translate("gestao_remover", "Quantidade a remover", nullptr));
        btn_gr_voltar->setText(QCoreApplication::translate("gestao_remover", "Voltar", nullptr));
        btn_gr_remove->setText(QCoreApplication::translate("gestao_remover", "remover", nullptr));
        btn_txt_mostra_podutos->setText(QCoreApplication::translate("gestao_remover", " Todos os produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestao_remover: public Ui_gestao_remover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_REMOVER_H
