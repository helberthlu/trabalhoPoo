#include <string>
#include<iostream>
#include "Amigo.h"

using namespace std;

int Amigo::contador = 0;

Amigo:: Amigo()
{
    id++;
    contador ++;
}
void Amigo::setId(int _id)
{
    id = _id;
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

