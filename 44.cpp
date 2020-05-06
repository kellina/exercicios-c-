#include <iostream>
using namespace std;

int main() {
  int ano, a,  b;
  ano = 0;
  a = 90000000;
  b = 200000000;

  while (a <= b)
  {
    a = a * 1.03;
    b = b * 1.015;
    ano++;
  }

  cout << "\nAnos: " << ano << "\n";
  return 0;
  
}