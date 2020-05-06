//Nesta questão optei usar o número zero como ponto de parada (Flag) do programa.
//Dessa forma a entrada do usuário é mais rápida.

#include <iostream>
using namespace std;

int main() {
  setlocale (LC_ALL, "Portuguese");
  int num = 0;
  int soma = 0;
  int qtde_num = 0;
  
  do
  {
    cout << "Informe um número inteiro: ";
    cin >> num;
    soma += num;
    qtde_num++;
  } while (num != 0);

  cout << "A soma dos números informados é: " << soma;
  cout << "\nForam informados " << qtde_num << " números\n"; 

  return 0;
}