#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include<string>

using namespace std;
class Data
{
        public:
        Data(int,int,int);
        void setDia(int);
        void setMes(int);
        void setAno(int);

        string getData();
        int diferencaDias(Data);
        int getDia();
        int getMes();
        int getAno();


        private:
        int dia;
        int mes;
        int ano;
 };


#endif // DATA_H_INCLUDED
