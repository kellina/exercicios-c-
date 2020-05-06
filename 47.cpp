#include <iostream>
using namespace std;
int main()
{
  //declarar variáveis
  char sexo, resp;
  int i, cont_s, cont_n, cont_NM, cont_SF;
  float porcSF, porcNM;
  cont_n = 0;
  cont_s = 0;
  cont_NM = 0;
  cont_SF = 0;

  cout << ">>>>Pesquisa de Opiniao<<<<\n";
  for (i = 1; i <= 10; i++)
  {
    cout << "\nSexo [f/m]: ";
    cin >> sexo;
    cout << "\nGostou [s/n]: ";
    cin >> resp;

    if (resp == 's')
    {
      cont_s++;
      if(sexo == 'f') {
        cont_SF++;
      }
    }
    else
    {
      cont_n++;
      if (sexo == 'm')
      {
        cont_NM++;
      }
    }
  }
  porcSF = (cont_SF * 100) / 10;
  porcNM = (cont_NM * 100) / 10;
  cout << "\nO numero de pessoas que disseram sim foi: " << cont_s;
  cout << "\nO numero de pessoas que disseram não foi: " << cont_n;
  cout << "\nO percentual de mulheres que disseram sim foi: " << porcSF;
  cout << "\nO percentual de homens que disseram não foi: " << porcNM << "\n";
}