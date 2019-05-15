#include <string>
#include<iostream>
#include "Filme.h"

using namespace std;


int Filme::contadorFilme = 0;

Filme:: Filme()
{
  gerarId();
}

int Filme::getId()
{
    return id;
}
int Filme::gerarId()
{
     id = contadorFilme + 1;
     return contadorFilme++;
}

void Filme:: setTitulo(string _titulo)
{
    titulo = _titulo;
}

void Filme::setAno(int _ano)
{
    ano = _ano;
}

void Filme::setGenero(string _genero)
{
    genero = _genero;
}

string Filme::getTitulo()
{
    return titulo;
}

string Filme::getGenero()
{
    return genero;
}

int Filme::getAno()
{
    return ano;
}
