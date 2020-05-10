//Calcular a diferença entre o 6º e o 12º numeros primos. 2,3,5,7, 11,(13),17,19, 23,29, 31,(37), 41,43,47
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool ehPrimo(int n) { //função para saber se é primo
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int geraPrimo(int semente) { //função para gerar o próximo num primo
  do {
    semente++;
  } while (!ehPrimo(semente));
  
  return semente;
}

int main() { //função indicar a posição (i) do num primo e calcular
  setlocale(LC_ALL, "Portuguese");
  int n_primo = 2;
  int primo_6;
  int primo_12;
  for (int i = 2; i <= 12; i++){
    n_primo = geraPrimo(n_primo);
    if (i == 6){
      primo_6 = n_primo;
    } else if (i == 12){
      primo_12 = n_primo;
    }
  }

  cout << "A diferença entre 12º e o 6º numero primo é " << primo_12 - primo_6 << ".\n";
  return 0;
}