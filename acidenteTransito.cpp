/*4.Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
- código da cidade
- estado (RN, CE, PI, PE, MA, ...)
- número de veículos de passeio
- número de acidentes de trânsito com vítimas
Deseja-se saber:
a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
b) qual a média de veículos nas cidades brasileiras
c) qual a média de acidentes com vítimas entre as cidades do Ceará.*/
#include <iostream>
using namespace std;

class Transito {
  public:
    string estado;
    int codigo; 
    int num_veiculos; 
    int num_acidentes;
};

int main() {
  Transito cidades[200]; //Tabela de registro de acidentes nas cidades
  int tot_registros = 0; //qtde de registros na tabela
  float tot_acid_ce = 0; //qtde total de acidentes no Ceará.
  float num_cid_ce = 0; //qtde de cidades no Ceará que registraram acidentes.
  int posicao_maior = 0; // numero da linha na tabela que contem maior num de acidentes
  int posicao_menor = 0; // num da linha na tabela que contem o menor num de acidentes
  int maior_num_acid = 0; // maior qtde de acidentes na tabela
  int menor_num_acid = INT32_MAX; //menor qtde de acidentes na tabela, inicializado com o maior numero inteiro possivel
  float total_veiculos = 0;// soma do numero veiculos.
  float media_acid_ce;
  float media_veiculos;
  char proximo; //ponto de parada do laço
  string estado;
  
 
  cout << "\nCOLETA DE DADOS DE ACIDENTES DE TRANSITO\n";
  do {
    cout << "Informe o código da cidade: ";
    cin >> cidades[tot_registros].codigo;
    cout << "Informe a sigla do estado: ";
    cin >> cidades[tot_registros].estado;
    cout << "Informe o número do veículo: ";
    cin >> cidades[tot_registros].num_veiculos;
    cout << "Informe o numero de acidentes com vitima: ";
    cin >> cidades[tot_registros].num_acidentes;

    tot_registros++;
    
    cout << "---Registrar próxima cidade[s/n]---: ";
    cin >> proximo;
  } while (proximo == 's');

  //fazer um for para percorrer a tabela e achar as posições do maior e do menor
  for(int i = 0; i < tot_registros; i++){
    if(maior_num_acid < cidades[i].num_acidentes){
      maior_num_acid = cidades[i].num_acidentes;
      posicao_maior = i;
    }
    if(menor_num_acid > cidades[i].num_acidentes){
      menor_num_acid = cidades[i].num_acidentes;
      posicao_menor = i;
    }

    total_veiculos += cidades[i].num_veiculos;
  
    if(cidades[i].estado == "ce"){
      tot_acid_ce += cidades[i].num_acidentes;
      num_cid_ce++;
    }

  }
  
  media_veiculos = total_veiculos / tot_registros;
  media_acid_ce = tot_acid_ce / num_cid_ce;
    
  cout << "\n\nPesquisa Finalizada !\n\n";
  cout << "O maior indice de acidades foi na cidade: " << cidades[posicao_maior].codigo << " com " << cidades[posicao_maior].num_acidentes << " acidestes\n";
  cout << "O menor indice de acidades foi na cidade: " << cidades[posicao_menor].codigo << " com " << cidades[posicao_menor].num_acidentes << " acidestes\n";
  cout << "A media de veiculos nas cidades é de: " << media_veiculos << "\n";
  cout << "A média de acidentes com vítimas no Ceará é de: " << media_acid_ce << "\n";

  return 0;
}