#ifndef AMIGO_H_INCLUDED
#define AMIGO_H_INCLUDED
#include<string>

using namespace std;
class Amigo
{
        public:
        Amigo();
        void setId(int);
        void setNome(string);
        void setTelefone(string);
        void setEndereco(string);

        int getId();
        string getNome();
        string getTelefone();
        string getEndereco();

        private:
        static int contador;
        int id;
        string nome;
        string telefone;
        string endereco;
};

#endif // AMIGO_H_INCLUDED
