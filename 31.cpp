//31) Ler nomes do teclado e contar quantos nomes foram lidos para apresentar na tela no final nas
//seguintes situações: o algoritmo receberá nomes até que o nome informado seja "FIM". O algoritmo
//receberá nomes enquanto a pergunta "Há mais nomes a serem informados?" for respondida com "sim".
//32) Repetir o problema acima com números para informar a soma deles até que: - O número informado
//seja zero - A resposta à pergunta "Há mais números a serem somados?" seja não.

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
  setlocale (LC_ALL, "Portuguese");
  int i = 0;
  int nom_lidos;
  string nome;
  string resposta;
  
  do {
    cout << "Digite um nome: ";
    cin >> nome;
    
    cout << "Há mais nomes a serem informados [Sim/Fim]? ";
    cin >> resposta;

    //essa função serve para converter a string para minuscula.
    transform(resposta.begin(), resposta.end(), resposta.begin(), ::tolower); 
    
    i++;
  } while (resposta == "sim");
  
  nom_lidos = i;
  cout << "\nQuantidade de nomes lidos foi: " << nom_lidos << "\n";
  
  return 0;  
}

