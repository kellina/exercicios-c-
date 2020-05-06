#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int voto = 0;
  int total_votos = 0;
  float perc_vb, perc_vn;
  int voto1, voto2, voto3, voto4, voto_nulo, voto_branco;
  voto1 = voto2 = voto3 = voto4 = voto_nulo = voto_branco = 0;
  
  do {
    cout << "Informe seu voto: ";
    cin >> voto;
    switch (voto) {
    case 1:
      voto1++;
      break;
    case 2:
      voto2++;
      break;
    case 3:
      voto3++;
      break;
    case 4:
      voto4++;
      break;
    case 5:
      voto_nulo++;
      break;
    case 6:
      voto_branco++;
      break;
    case 0:
      break;
    default:
      cout << "Voto inválido!";
      break;
    }
    if (voto != 0){
      total_votos++;
    }

  } while (voto != 0);

  perc_vb = (voto_branco * 100) / total_votos;
  perc_vn = (voto_nulo * 100) / total_votos;


  cout << "\nO total de votos para o canditado 1 foi: " << voto1;
  cout << "\nO total de votos para o canditado 2 foi: " << voto2;
  cout << "\nO total de votos para o canditado 3 foi: " << voto3;
  cout << "\nO total de votos para o canditado 4 foi: " << voto4;
  cout << "\nO total de votos nulos foi: " << voto_nulo;
  cout << "\nO total de votos em  branco foi: " << voto_branco;
  cout << "\nPercentual dos votos em branco é de: " << perc_vb << "%";
  cout << "\nPercentual dos votos nulo é de: " << perc_vn << "%";
  cout << "\nPercentual dos votos em branco e nulos sobre o total é de : " << (perc_vb + perc_vn) << "%\n";
    
  
  return 0;
}