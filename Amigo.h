#ifndef AMIGO_H_INCLUDED
#define AMIGO_H_INCLUDED
#include<string>

using namespace std;
class Amigo
{
        public:
        Amigo();

        void setNome(string);
        void setTelefone(string);
        void setEndereco(string);

        int gerarId();
        int getId();
        string getNome();
        string getTelefone();
        string getEndereco();

        private:

        int id;
        string nome;
        string telefone;
        string endereco;
        static int contador;
};

#endif // AMIGO_H_INCLUDED
