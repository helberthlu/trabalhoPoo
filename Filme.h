#ifndef FILME_H_INCLUDED
#define FILME_H_INCLUDED
#include<string>

using namespace std;
class Filme
{
        public:
        Filme();
        void setTitulo(string);
        void setGenero(string);
        void setAno(int);
        int gerarId();

        int getId();
        string getTitulo();
        string getGenero();
        int getAno();


        private:

        int id;
        static int contadorFilme;
        string titulo;
        string genero;
        int ano;

};
#endif // FILME_H_INCLUDED

