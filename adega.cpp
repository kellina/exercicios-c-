//a) qtde de cada tipo de vinho?
//b) a safra e o nome do vinho mais velho e mais novo?
//c)qtde total de garrafas de vinho?
//d)percentagem de vinho rosê?
#include <iostream>
#include <stdlib.h>

using namespace std;

class Vinho { //criar uma classe de objetos para facilitar execução do algoritmo.
  public:
    string nome;
    int ano; 
    int tipo; 
};

int main(){
  setlocale(LC_ALL, "Portuguese");
  Vinho registros[450]; //cria um vetor com a qtde desejada de registros,como se fosse uma tabela.
  int total_vinhos = 0;
  char proximo;
  float percent_rose = 0.0;
  int tipo1, tipo2, tipo3, menor_ano, maior_ano;
  tipo1 = tipo2 = tipo3 = menor_ano = maior_ano = 0;


  do {
    cout << "Informe o nome do vinho: ";
    cin >> registros[total_vinhos].nome;
    cout << "Informe o ano do vinho: ";
    cin >> registros[total_vinhos].ano;
    cout << "Informe o tipo [1- branco, 2- tinto, 3- rosê]: ";
    cin >> registros[total_vinhos].tipo;

    if(registros[menor_ano].ano > registros[total_vinhos].ano){ //para saber qual o vinho mais antigo.
      menor_ano = total_vinhos;
    }
    if(registros[maior_ano].ano < registros[total_vinhos].ano){
      maior_ano = total_vinhos;
    }

    switch (registros[total_vinhos].tipo) { //para registrar a qtde de vinhos por tipo
    case 1:
      tipo1++;
      break;
    case 2:
      tipo2++;
      break;
    case 3:
      tipo3++;
      break;
    default:
      break;
    }

    total_vinhos++;
    
    cout << "---Registrar próximo vinho[s/n]---: ";
    cin >> proximo;
  } while (proximo == 's');

  percent_rose = (tipo3 * 100) / total_vinhos;

  cout << "O total de vinhos na adega é de: " << total_vinhos << "\n";
  cout << "Quantidade de vinho do tipo 1: " << tipo1 << "\n" ; 
  cout << "Quantidade de vinho do tipo 2: " << tipo2 << "\n";
  cout << "Quantidade de vinho do tipo 3: " << tipo3 << "\n";
  cout << "A percentagem de garrafas de vinho rosê é de: " << percent_rose << "%\n";
  cout << "A safra do vinho mais velho é de: " << registros[menor_ano].ano << "\tvinho: " << registros[menor_ano].nome << "\n";
  cout << "A safra do vinho mais novo é de: " << registros[maior_ano].ano << "\tvinho: " << registros[maior_ano].nome << "\n";

  return 0;
}

