#ifndef ESTRUTURA_DO_ESTOQUE_H
#define ESTRUTURA_DO_ESTOQUE_H

#endif // ESTRUTURA_DO_ESTOQUE_H

#include <iostream>
#include <vector>
using namespace std;

struct produto{
    static int codigo;
    static string produto_novos;
    static int quantidade_do_produto;
};

static vector <produto> vetor_de_produtos;
