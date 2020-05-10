/*57) Uma agência de uma cidade do interior tem, no máximo, 10.000 clientes.
Criar um algoritmo que possa entrar com número da conta, nome e saldo de cada cliente.
Imprimir todas as contas, os respectivos saldos e uma das mensagens: positivo/negativo.
A digitação acaba quando se digita - 9999 para número da conta ou quando chegar a 10.000.
deverá sair o total de clientes com saldo negativo, o total de clientes da agência e o saldo da agência.*/
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Conta {
  public:
    int numero;
    string nome;
    float saldo;
};

int main() {
  setlocale(LC_ALL, "Portuguese");
  Conta contas [10000];

  int t_cliente = 0;
  int saldo_positivo = 0; int num_positivados = 0;
  int saldo_negativo = 0; int num_negativados = 0;
  float saldo_total = 0;

  cout << "-----Digite 9999 no numero da conta para SAIR!------\n";
  do {
    cout << "Informe o número da conta: ";
    cin >> contas[t_cliente].numero;
    if(contas[t_cliente].numero == 9999){
      break;
    }
    cout << "Informe o nome: ";
    cin >> contas[t_cliente].nome;
    cout << "Informe o saldo: ";
    cin >> contas[t_cliente].saldo;

    t_cliente++;
  } while (true);
  
  cout << "\nConta \tNome \tSaldo \tMensagem\n";
  cout << "---------------------------------\n";
  for(int i = 0; i < t_cliente; i++) {
    string mensagem = "positivo";
    if (contas[i].saldo < 0){
      mensagem = "negativo";
      saldo_negativo += contas[i].saldo;
      num_negativados++;
    }else {
      saldo_positivo += contas[i].saldo;
      num_positivados++;
    }
    cout << contas[i].numero << "\t" << contas[i].nome << "\t" << contas[i].saldo << "\t" << mensagem << "\n";
  }
  saldo_total = saldo_positivo + saldo_negativo;
  cout << "------------------------------------------------------\n";
  cout << "O total de clientes da agência é: " << t_cliente << "\n";
  cout << "O total de clientes com saldo negativo é: " << num_negativados << "\n";
  cout << "O total de clientes com saldo positivo é: " << num_positivados << "\n";
  cout << "O saldo total da agência é: " << saldo_total << "\n";
  cout << "------------------------------------------------------\n";
  return 0;
}
