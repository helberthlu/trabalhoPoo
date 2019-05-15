#include <string>
#include<iostream>
#include "Amigo.h"

using namespace std;

int Amigo::contador =0;

Amigo:: Amigo()
{
  gerarId();
}

int Amigo::gerarId()
{
     id = contador + 1;
     return contador ++;
}

int Amigo::getId()
{
    return id;
}

void Amigo:: setNome(string _nome)
{
    nome = _nome;
}

void Amigo:: setTelefone(string _telefone)
{
    telefone = _telefone;
}

void Amigo:: setEndereco(string _endereco)
{
    endereco = _endereco;
}

string Amigo:: getNome()
{
    return nome;
}



