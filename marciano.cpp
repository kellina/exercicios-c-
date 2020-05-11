#include <iostream>

using namespace std;

int main()
{

  int arvore1 = 0, arvore2 = 0, balas = 0;
  cout << "Um marciano chegou a uma floresta e se escondeu atras de uma das 100 arvores quando viu um cacador. O cacador so tinha cinco balas em sua espingarda.";
  cout << "\nJogador 1, voce sera o marciano, em que arvore vai se esconder? ";
  cin >> arvore1;
  cout << "\nJogador 2, voce sera o cacador e tem que adivinhar onde o marciano se esconde. Boa sorte!";
  cout << "\n\nMarciano: Haha, duvido voce me achar!!!";

  for (balas = 5; balas >= 0; balas--)
  {
    cout << "\n\nQual o numero da arvore onde o marciano esta? ";
    cin >> arvore2;
    if (arvore1 == arvore2)
    {
      cout << "Marciano: Voce me pegou!! : ";
      break;
    }
    else
    {
      cout << "Haha, estou mais a ";

      if (arvore1 < arvore2)
      {
        cout << "esquerda e voce tem mais " << balas << " chance(s)!";
      }
      else
      {
      }

      if (arvore2 < arvore1)
      {
        cout << "direita e voce tem mais " << balas << "chance(s)!";
      }
      else
      {
      }
    }
  }

  cout << "\n\n";
  system("pause");
  return 0;
}