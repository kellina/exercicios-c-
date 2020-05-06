// EXER 34 REPETIÇÃO
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){


    setlocale(LC_ALL,"Portuguese");

    int i, num, menor, q_n, escolha;

    cout << "Quantos números o conjunto possui? ";
    cin >> q_n;

    cout << "Digite o número: ";
    cin >> num;
    menor = num;

    while(escolha != -1){

        for(i = 1; i < q_n; i++){

            cout << "Digite o número: ";
            cin >> num;

                if (num < menor){
                    menor = num;
                }

            }
            cout << "Deseja digitar mais algum valor? [1] para sim e [-1] para não: ";
            cin >> escolha;
           }
        cout << "O menor valor do conjunto é o: " << menor << endl;
        return 0;
}