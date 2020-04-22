#include <iostream>
using namespace std;

#include<locale>
#define NC 50
  struct cliente_banco
{
  
char nome[NC], endereco[NC], cpf[15];
   
int num_conta, ano_abertura_conta;
   
float saldo;
 
};

 
 
typedef struct cliente_banco Tipo_Cliente;

 
int
main ()
{
  
Tipo_Cliente cliente;
  
 
cout << "Informe o CPF: " << endl;
  
cin.getline (cliente.cpf, 15);
  
cout << "Informe o nome: " << endl;
  
cin.getline (cliente.nome, NC);
  
cout << "Informe o endereC'o: " << endl;
  
cin.getline (cliente.endereco, NC);
  
cout << "Informe o numero da conta: " << endl;
  
cin >> cliente.num_conta;
  
cout << "Informe o ano de abertura da conta: " << endl;
  
cin >> cliente.ano_abertura_conta;
  
cout << "Informe o saldo: " << endl;
  
cin >> cliente.saldo;
  
cout << cliente.nome << endl;
  
cout << cliente.cpf << endl;
  
cout << cliente.endereco << endl;
  
cout << cliente.num_conta << endl;
  
cout << cliente.ano_abertura_conta << endl;
  
cout << cliente.saldo << endl;

}
