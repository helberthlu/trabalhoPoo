#include <iostream>
#include<string>
#include<stdlib.h>
#include <iomanip>
#include<windows.h>
#include"Amigo.h"
#include"Filme.h"
#include"Data.h"
#include "Locacao.h"
#define MAX  10

using namespace std;
static int cont = 0;
static int contFilme = 0;
static int contLocacao = 0;

Amigo amigo[MAX];
Filme filme[MAX];
Locacao locacao[MAX];
Data dt(0,0,0);

int menu(void)
{
  int opt;

 cout<<"Escolha a opcao"<<endl;
 cout<<"1. Cadastrar Amigo"<<endl;
 cout<<"2. Exibir Amigos"<<endl;
 cout<<"3. Cadastrar Filme" <<endl;
 cout<<"4. Exibir Filme" <<endl;
 cout<<"5. Cadastrar Locação " <<endl;
 cout<<"6. Lista de  Locaçãos " <<endl;
 cout<<"7. Devolução " <<endl;
 cout<<"8. Lista Devolução " <<endl;
 cout<<"9. Sair"<<endl;
 cout<<"Opcao: ";
 cin >> opt;

 return opt;
}

void addFilme()
{
   int i= contFilme;
   char op;

   while(true)
   {
       int ano;
       string titulo;
       string genero;

       cout<<"Informe o titulo "<<endl;
       cin>>titulo;

       cout<<"Informe o genero "<<endl;
       cin>>genero;

       cout<<"Informe o ano"<<endl;
       cin>>ano;

       filme[i].setTitulo(titulo);
       filme[i].setGenero(titulo);
       filme[i].setAno(ano);

       cout<<"Deseja Continuar?"<<endl;
       cin>>op;

       cout<<filme[i].getId() << filme[i].getTitulo()<<endl;

       i++;
       contFilme ++;

       if(op == 'n')
       {
           break;
       }

   }
}

void addAmigo()
{
  int  i=cont;
  char op;

   while(true)
   {
       string nome;
       string endereco;
       string telefone;

       cout<<"Informe o Nome "<<endl;
       cin>>nome;

       cout<<"Informe o telefone "<<endl;
       cin>>telefone;

       cout<<"Informe o endereço"<<endl;
       cin>>endereco;


       amigo[i].setNome(nome);
       amigo[i].setEndereco(telefone);
       amigo[i].setTelefone(endereco);


       cout<<"Deseja Continuar"<<endl;
       cin>>op;

       cout<<"\n"<<amigo[i].getId() << amigo[i].getNome()<<"\n"<<endl;

       i++;
       cont ++;

       if(op == 'n')
       {
           break;
       }
   }
}


void listaAmigo()
{

    for(int i = 0; i < cont; i++)
    {
        if(amigo[i].getNome() == "")
        {
         cout<<"Cadastre amigos \n\n"<< endl;
        }
        else
        {
            cout<<"\n"<<amigo[i].getId() <<" "<< amigo[i].getNome() <<"\n"<< endl;
        }
    }
}

bool validarIDAmigo(int _id)
{
    int i = 0;

    while(i  <= cont)
    {
        if(amigo[i].getId() == _id)
        {
            return true;
        }
        else
        {
           i++;
        }
    }
    return false;
}

bool validarIDFilme(int _id)
{
    int i = 0;

    while(i  <= contFilme)
    {
        if(filme[i].getId() == _id)
        {
            return true;
        }
        else
        {
           i++;
        }
    }
    return false;
}

bool validarDevolucao(int _id)
{
    int i = 0;

    while(i  < contLocacao)
    {
        if(locacao[i].getId() == _id)
        {
            return true;
        }
        else
        {
           i++;
        }
    }
    return false;
}

void listaFilme()
{
    for(int i = 0; i < contFilme; i++)
    {
       if(filme[i].getId() < 1)
       {
           cout<<"Adicione Filmes \n" << endl;
       }
       else
       {
         cout<<filme[i].getId() <<" "<< filme[i].getTitulo() << endl;
       }
    }
}

void listaLocacaoAtivas()
{
    for(int i = 0; i < contLocacao; i++)
    {
       if(locacao[i].getId() < 1)
       {
           cout<<"Sem Locações \n\n" << endl;
       }
       else
       {
           if(locacao[i].getStatus())
           {
             cout<<locacao[i].getId() <<" "<<locacao[i].getDataLocacao().getData()<< endl;
           }
        }
    }
}

void addDevolucao()
{
    int _idLocacao, _dia,_mes,_ano;

    cout<<"informe o id da locação que deseja devolver"<<endl;
    cin>>_idLocacao;

    cout<<"informe dia"<<endl;
    cin>>_dia;
    cout<<"informe mes"<<endl;
    cin>>_mes;
    cout<<"informe ano"<<endl;
    cin>>_ano;






}


void addLocacao()
{
    int _dia,_mes,_ano;
    int i = 0;
    int _idAmigo = 0,_idFilme=0;
    char op;

    cout<<"\n\n";

    while(true)
    {

            listaAmigo();
            cout<<"\nInforme  o ID de um Amigo para Locar"<<endl;
            cin>>_idAmigo;

            listaFilme();

            cout<<"\nInforme  o ID de um Filme para o Amigo"<<endl;
            cin>>_idFilme;

            if(validarIDAmigo(_idAmigo))
            {
                cout<<"informe dia"<<endl;
                cin>>_dia;
                cout<<"informe mes"<<endl;
                cin>>_mes;
                cout<<"informe ano"<<endl;
                cin>>_ano;

              if(_dia > 0 && _dia < 32 && _mes > 0 &&  _mes < 13 && _ano > 1990  )
                {
                  Data dt(_dia,_mes,_ano);
                  cout<<"\nData Emprestimo "<<dt.getData()<<endl;

                  if(_mes == 12)
                    {
                      _mes=1,_ano =_ano+1;
                    }
                  else
                    {
                      _mes=_mes+1;
                    }

                  Data dv(_dia,_mes,_ano);
                  cout<<"\nData Devolucao "<<dv.getData()<<endl;
                  locacao[i].setDataLocacao(dt);
                  locacao[i].setDataDevolucao(dv);

                  locacao[i].setDiasLocacao(dv.diferencaDias(dt));
                  locacao[i].locar(_idAmigo,_idFilme);

                  cout<<"\n\nDias locacao "<< abs(locacao[i].getDiasLocacao())<<endl;

                }
              else
                {
                 cout<<"\nData invalida\n"<<endl;
                }
        }
        else
        {
          cout<<"Id de Amigo ou de Filme incorreto ou Inexistente"<<endl;
          break;
        }

       cout<<"Deseja Continuar"<<endl;
       cin>>op;

       i++;
       contLocacao++;

       if(op=='n')
       {
           break;
       }

    }
}

void opcao(int op)
{
  switch(op){
  case 1:
      system("cls");
    addAmigo();
   break;

  case 2:
    system("cls");
    listaAmigo();
   break;

  case 3:
    system("cls");
    addFilme();
   break;

  case 4:
    system("cls");
    listaFilme();
   break;

  case 5:
    system("cls");
    addLocacao();
   break;

   case 6:
    system("cls");
    listaLocacaoAtivas();
   break;

    case 7:
    system("cls");
    addDevolucao();
   break;

  case 9:
   system("cls");
   cout<<"SAINDO";
   for(int x =0;x<5;x++)
   {
       cout<<".";
       Sleep(300);
   }
   exit(0);
   break;

  default:
   cout<< "Comando invalido\n\n";
 }
}

int main()
{
    int opt;

    do{
        opt=menu();
        opcao(opt);
      }while(opt);

   return 0;
}
