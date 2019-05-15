#ifndef LOCACAO_H_INCLUDED
#define LOCACAO_H_INCLUDED
#include<string>
#include"Data.h"
#include"Filme.h"
#include"Amigo.h"

using namespace std;
class Locacao
{

  private:

        int id;
        Data dataLocacao,dataDevolucao;

        static int contadorLocacao;
        int DiasLocacao;
        bool status;


  public:
        Locacao();

        int gerarId();
        int getId();

        bool locar(int, int);
        void devolver(int,Data);

        void setDataLocacao(Data);
        void setDataDevolucao(Data);
        void setDiasLocacao(int);

        bool getStatus();

        Data getDataLocacao();
        Data getDataDevolucao();
        int  getDiasLocacao();

};
#endif // LOCACAO_H_INCLUDED
