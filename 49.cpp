#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num_pes, num_pes_total, audienc_4, audienc_5, audienc_7, audienc_13;
  int num_canal;
  char tv;

  num_pes = num_pes_total = audienc_4 = audienc_5 = audienc_7 = audienc_13 = 0;

  do {
    cout << "Quantas pessoas há na casa? ";
    cin >> num_pes;
    cout << "A televisão estava ligada? [s/n] ";
    cin >> tv;
    if (tv == 's') {
      cout << "Qual canal estavam assistindo? [0, 4, 5, 7 ou 13] ";
      cin >> num_canal;
      num_pes_total += num_pes;
      switch (num_canal) {
      case 0:
        break;
      case 4:
        audienc_4 += num_pes;
        break;
      case 5: 
        audienc_5 += num_pes;
        break;
      case 7: 
        audienc_7 += num_pes;
        break;
      case 13: 
        audienc_13 += num_pes;
        break;        
      default:
        cout << "Canal inválido!";
        break;
      }
    }
       
  } while (num_canal != 0);

  cout << "A porcentagem de audiência da emissora 4 é: " << audienc_4 * 100 / num_pes_total << "%\n";
  cout << "A porcentagem de audiência da emissora 5 é: " << audienc_5 * 100 / num_pes_total << "%\n";
  cout << "A porcentagem de audiência da emissora 7 é: " << audienc_7 * 100 / num_pes_total << "%\n";
  cout << "A porcentagem de audiência da emissora 13 é: " << audienc_13 * 100 / num_pes_total << "%\n";

  return 0;
}
