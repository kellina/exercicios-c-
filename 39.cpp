// EXER 39
#include <iostream>
//#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");
    string nome, escolha, nome1, nome2, auxn;
    double altura, maior1, maior2, aux;
    int q_m;

    maior1 = 0;
    maior2 = 0;

    while(escolha != "Não" && escolha != "N" && escolha != "n"){
        q_m = q_m + 1;
        cout << "\nInforme o nome da moça: ";
        cin >> nome;
        cout << "Digite a altura: ";
        cin >> altura;

        cout << "\n__\n";

        cout << "\nDeseja continuar? ";
        cin >> escolha;

        if(altura > maior1){
            aux = maior1;
            maior1 = altura;
            auxn = nome1;
            nome1 = nome;
        }
        if(aux > maior2){
            maior2 = aux;
            nome2 = auxn;
        }
    }
        cout << "\nA quantidade de moças é " << q_m;
        cout << "\nA primeira mais alta é " << nome1 << " com " <<  maior1;
        cout << "\nA segunda mais alta é " << nome2 << " com " << maior2;
        return 0;
}