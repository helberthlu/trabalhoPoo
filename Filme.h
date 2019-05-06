#ifndef FILME_H_INCLUDED
#define FILME_H_INCLUDED
#include<string>

using namespace std;
class Filme
        public:
        void setId(int);
        void setTitulo(string);
        void setGenero(string);
        void setAno(int);
        void cadastroAmigo();

        int getId();
        string getTitulo();
        string getGenero();
        int getAno();


        private:
        int id;
        string titulo:
        string genero;
        int ano;

};




#endif // FILME_H_INCLUDED
