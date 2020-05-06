//[07:58] OTILIA CASSIANO NOGUEIRA
#include <iostream>
#include <iomanip>

using namespace std;
    
int main()
{
  int i, idade, cont_otimo, cont_bom, cont_regular, cont_ruim, cont_pessimo;
  int cont_idade_ruim, cont_idade_pessimo, maior_idade_pessimo, maior_idade_otimo, maior_idade_ruim;
  int difer_maior_idade;
  char opiniao;
  float media_idade;
  setlocale (LC_ALL, "Portuguese");

  cont_otimo = 0;
  cont_bom = 0;
  cont_regular = 0;
  cont_ruim = 0;
  cont_pessimo = 0;
  cont_idade_ruim = 0;
  maior_idade_pessimo = 0;
  maior_idade_otimo = 0;
  maior_idade_ruim = 0;

  cout << ">>>>Pesquisa de Opiniao_Cinema<<<< \n";
  cout << "Nota \tSignificado";
  cout << "\nA \tOtimo";
  cout << "\nB \tBom";
  cout << "\nC \tRegular";
  cout << "\nD \tRuim";
  cout << "\nE \tPessimo\n";

  for (i = 1; i <= 10; i++)
  {
    cout << i << ".";
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Digite a sua opiniao conforme a tabela acima: \n";
    cin >> opiniao;
    opiniao = tolower(opiniao);

    switch (opiniao)
    {
    case 'a':
      cont_otimo++;
      if (maior_idade_otimo < idade)
      {
        maior_idade_otimo = idade;
      }
      break;
    case 'b':
      cont_bom++;
      break;
    case 'c':
      cont_regular++;
      break;
    case 'd':
      cont_ruim++;
      cont_idade_ruim += idade;
      if (maior_idade_ruim < idade)
      {
        maior_idade_ruim = idade;
      }
      break;
    case 'e':
      cont_pessimo++;
      if (maior_idade_pessimo < idade)
      {
        maior_idade_pessimo = idade;
      }
      break;
    default:
      cout << "Opiniao Invalida";
      break;
    }
  }

  float dif_perc = (cont_bom - cont_regular) * 100 / 10;
  float med_ida_ruim = cont_idade_ruim / cont_ruim;
  float perc_pessimo = (cont_pessimo * 100) / 10;
  if (maior_idade_otimo > maior_idade_ruim)
    int difer_maior_idade = maior_idade_otimo - maior_idade_ruim;
   else 
    difer_maior_idade = maior_idade_ruim - maior_idade_otimo;
  
  cout << "\nO numero de respostas otimo foi: " << cont_otimo;
  cout << fixed << setprecision(2);
  cout << "\nA diferença percentual entre respostas bom e regular foi: " << dif_perc;
  cout << "\nA média de idade das pessoas que responderam ruim foi: " << med_ida_ruim;
  cout << "\nA percentagem de respostas péssimo foi: " << perc_pessimo;
  cout << "\nA maior idade que respondeu péssimo foi: " << maior_idade_pessimo;
  cout << "\nA diferença de idade entre a maior idade que respondeu "
       << "Ótimo e a maior idade que respondeu ruim: " << difer_maior_idade << "\n";
}
