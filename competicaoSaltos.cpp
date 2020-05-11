#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//Declarando uma classe chamada NotaAtleta
class NotaAtleta {
  public:
    int atleta;
    float nota_final;
};

int main()
{
  setlocale(LC_ALL, "Portuguese");
 
  int numeroAtletas;
  float media_DoParticipante, nota_juiz, MAnota, MEnota;
  MAnota = 0; //notas dos juizes variam de 0 a 10.
  MEnota = 10; 

  NotaAtleta notas[100]; //representação de uma tabela de notas dos atletas, pode ter no máximo 100 atletas.

  //Primeiro deve informar a quantidade de competidores e só depois o numero de cada um.
  cout << "Informe a quantidade de atletas: ";
  cin >> numeroAtletas;

  for(int linha = 0; linha < numeroAtletas; linha++){
    cout << "Informe o numero do competidor: ";
    cin >> notas[linha].atleta;
    
    for(int juiz = 1; juiz <= 6; juiz++){
      cout << "Digite a nota do juiz: ";
      cin >> nota_juiz;
      notas[linha].nota_final += nota_juiz;
      if(MAnota < nota_juiz){
        MAnota = nota_juiz;
      }
      if(MEnota > nota_juiz){
        MEnota = nota_juiz;
      }
    }
    notas[linha].nota_final = (notas[linha].nota_final - MAnota - MEnota) / 4;
  }

  cout << "===========================================\n";
  for(int linha = 0; linha < numeroAtletas; linha++){
    cout << "A nota final do atleta " << notas[linha].atleta << "\t é igual a " << notas[linha].nota_final << "\n";
  }
    
  return 0;  
}
  

