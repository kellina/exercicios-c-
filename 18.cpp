#include <iostream>
using namespace std;

int main() {
 setlocale (LC_ALL, "Portuguese");
 
  int i = 0;
  int nums;
  
  cout << "Quantos filhos você tem: ";
  cin >> nums;
  
  string nomes [nums];

  cout << "Qual(is) o(s) nome(s) dele(s): \n"; 
  for(i = 0; i < nums; i++){
    cout << "Filho(a) " << i + 1 << ": ";
    cin >> nomes[i];
  }
}