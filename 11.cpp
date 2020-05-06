//11) Entrar com 10 números e imprimir a metade de cada número.
#include <iostream>
using namespace std;

int main() {
  setlocale (LC_ALL, "Portuguese");
 
  int nums[10];
  int i = 0;
  
  for(i = 0; i < 10; i++) {
    cout << "Digite o número " << i + 1 << ": ";
    cin >> nums[i];
  }

  cout << "A metade de cada numero é: ";
  for(i = 0; i < 10; i++){
    cout << nums[i] / 2 << " ";
  }
  
  cout << "\n";
  
  return 0;
}