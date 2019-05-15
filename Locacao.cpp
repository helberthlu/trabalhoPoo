#include <string>
#include<iostream>
#include "Amigo.h"
#include"Locacao.h"
#include"Data.h"

using namespace std;

int Locacao::contadorLocacao = 0;

Locacao::Locacao():dataLocacao(0,0,0),dataDevolucao(0,0,0)
{
    gerarId();
}

bool Locacao::getStatus()
{
    return status;
}

bool Locacao::locar(int _idAmigo , int _idFilme)
{
   status = true;
}

void Locacao::devolver(int _id,Data _dataDevolucao)
{
    status = false;
}

int Locacao::gerarId()
{
     id = contadorLocacao + 1;
     return contadorLocacao ++;
}

int Locacao::getId()
{
    return id;
}

void Locacao::setDataLocacao(Data _data)
{
    dataLocacao = _data;
}

void Locacao::setDataDevolucao(Data _data)
{
    dataDevolucao = _data;
}

Data Locacao::getDataLocacao()
{
    return dataLocacao;
}

Data Locacao::getDataDevolucao()
{
    return dataDevolucao;
}

int Locacao::getDiasLocacao()
{
    return DiasLocacao;
}

void Locacao::setDiasLocacao(int _diasLocacao)
{
    DiasLocacao = _diasLocacao;
}





