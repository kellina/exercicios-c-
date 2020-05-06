#include <iostream>

using namespace std;
int main()
{
  int alunos = 0;
  int alunos_200 = 0; int alu_r_maior = 0;
  float r_pessoal, r_familia, t_g_alim, t_g_outr_desp;
  float porc_alunos_200;

  do {
    cout << "\nInforme sua renda pessoal: ";
    cin >> r_pessoal;
    if (r_pessoal == 0){
      break;
    }
    cout << "\nInforme a renda familiar: ";
    cin >> r_familia;
    cout << "\nInforme o total de gastos com alimentação: ";
    cin >> t_g_alim;
    cout << "\nInforme o total de gastos com outras despesas: ";
    cin >> t_g_outr_desp;
    alunos++;
    
    if(t_g_outr_desp > 200){
      alunos_200++;
    }
    if(r_pessoal > r_familia) {
      alu_r_maior++;
    }

  } while (true);

  porc_alunos_200 = alunos_200 * 100 / alunos;  
  cout << "\nA porcentagem de alunos que gasta acima de 200 com outras despesas eh: " << porc_alunos_200 << "%"; 
  cout << "\nO numero de alunos com renda pessoal maior que a familiar eh: " << alu_r_maior;
  cout << "\nPercentagem de gastos com alimentacao e outras despesas: ";
}

//c) a porcentagem gastas com alimentação e outras despesas em relação às rendas pessoal e familiar.
