#ifndef LOCACAO_H_INCLUDED
#define LOCACAO_H_INCLUDED
#include<string>
#include <Data.h>
#include<Filme.h>
#include<Amigo.h>

using namespace std;
class locacao
        public:

        void devolver (int id,Data dataDevolucao);
        void setDataDevolucao(Data dataDevolucao);
        void setDiasLocacao(Data dataLocacao);

        Data getDataLocacao();
        Data getDataDevolucao();
        int getDiasLocacao();
        bool locar(Amigo amigo, Filme filme);

        private:
        int id;
        Data dataLocacao;
        Data dataDevolucao;
        int DiasLocacao;
        bool status;
};
#endif // LOCACAO_H_INCLUDED
