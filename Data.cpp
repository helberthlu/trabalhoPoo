#include<iostream>
#include "Data.h"
#include <string>
#include <sstream>
#include<stdlib.h>
using namespace std;

Data::Data(int _dia,int _mes, int _ano)
{
    Data::setDia(_dia);
    Data::setMes(_mes);
    Data::setAno(_ano);
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}


int Data::getAno()
{
    return ano;
}

void Data::setDia(int _dia)
{
    dia = _dia;
}

void Data::setMes(int _mes)
{
    mes = _mes;
}

void Data::setAno(int _ano)
{
    ano = _ano;
}

int Data::diferencaDias(Data _data)
 {
     int aux=0;
     aux = (_data.dia-dia) + (_data.mes-mes) * 30 + (_data.ano-ano)*360;
     return aux;
 }


string Data::getData()
{
  	string stringData = "";

	std::stringstream _dia;
	_dia << Data::getDia();

	std::stringstream _mes;
	_mes << Data::getMes();

    std::stringstream _ano;
	_ano << Data::getAno();

	return stringData =  _dia.str()+"/"+_mes.str()+"/"+_ano.str();


}

