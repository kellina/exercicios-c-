//19) Faça um algoritmo que seja uma calculadora.

#include <iostream>
using namespace std;

int main() {
  
  int num;
  int resultado = 0;
  char operador = '+';

  do {
    cout << "digite um numero: ";
    cin >> num;
        
    switch (operador) {
    case '+':
      resultado += num;
      break;
    case '-':
      resultado -= num;
      break;
    case '*':
      resultado *= num;
      break;
    case '/':
      resultado /= num;
      break;
    case '%':
      resultado %= num;
      break;
    default:
      cout << "Operador inválido";
      break;

    }

    cout << "digite o operador [+, - , *, /, %, =]: ";
    cin >> operador;
  } while (operador != '=');

  cout << "O resultado é: " << resultado <<"\n";
  
  return 0;
}