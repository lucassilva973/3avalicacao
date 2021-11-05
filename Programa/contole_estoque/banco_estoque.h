#ifndef BANCO_ESTOQUE_H
#define BANCO_ESTOQUE_H

#endif // BANCO_ESTOQUE_H

#include <QtSql>
#include <QDebug>
#include <QFileInfo>

static QSqlDatabase edados;
static QString elocal;
static QString banco;

class banco_estoque
{
public:

    banco_estoque(){
        edados=QSqlDatabase::addDatabase("QSQLITE");
        elocal=qApp->applicationDirPath();
        banco=elocal+"/db/estoque.db";


    };

    void fechar(){
        edados.close();
    };
    static bool abrir(){
        edados.setDatabaseName(banco);
        if(!edados.open())
            return false;
        else
            return true;
    };
    static bool aberto(){
        if(edados.isOpen())
            return true;
        else
            return false;
    };

};


