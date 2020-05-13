#include <iostream>

using namespace std;

class Computador2 {
  public:
    string fabricante;
    string nome_computador;
    int memoria;
};

int main(){
  Computador2 registros[5000];
  char proximo;
  int total_computadores = 0;
  int maior_memoria = 0;
  int posicao_maior_memoria = 0;
  int qtde_comput_cobra = 0;
  int posicao_maxxi = 0;

  do {
    cout << "Informe o nome do fabricante: ";
    cin >> registros[total_computadores].fabricante;
    cout << "Informe o nome do computador: ";
    cin >> registros[total_computadores].nome_computador;
    cout << "Informe a capacidade de memória: ";
    cin >> registros[total_computadores].memoria;

    total_computadores++;
    cout << "Deseja informar o proximo[s/n]: ";
    cin >> proximo;
  } while (proximo == 's');

  for(int i = 0; i < total_computadores; i++){
    if(maior_memoria < registros[i].memoria){
      maior_memoria = registros[i].memoria;
      posicao_maior_memoria = i;
    }
    if(registros[i].fabricante == "cobra"){
      qtde_comput_cobra++;
    }
    if (registros[i].nome_computador == "maxxi"){
      posicao_maxxi = i;
    }
  }
  
  cout << "Nome do computador com maior memória: " << registros[posicao_maior_memoria].nome_computador << "\n";
  cout << "A Cobra fabrica " << qtde_comput_cobra << " computadores\n";
  cout << "O nome do fabricante do computador Maxxi é: " << registros[posicao_maxxi].fabricante <<"\n";

  return 0;
}
    