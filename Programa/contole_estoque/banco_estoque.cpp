#include "banco_estoque.h"

banco_estoque::banco_estoque()
{

    local=qApp->applicationDirPath();
    banco=local+"/db/estoque";
    dados=QSqlDatabase::addDatabase("QSQLITE");

}

void fechar(){
    dados.close();
}
