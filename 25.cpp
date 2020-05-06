// EXERC 25 REPETIÇÃO
#include <iostream>
//#include <stdlib.h>
#include <string.h>
using namespace std;


int main(){

    int fatorial, n;
    string escolha;

    setlocale(LC_ALL,"Portuguese");
    n = 1;
    escolha = "S";

    while(escolha == "S"){
        while(n > 0){
            cout << "Digite o número inteiro positivo que deseja apresentar o fatorial: ";
            cin >> n;
            cout << n << "! - ";
            fatorial = 1;

            while(n >= 1){
                cout << n;
                fatorial = fatorial * n;
                n = n - 1;
                if(n >= 1)
                    cout << " x ";
                else
                    cout << " = ";
            }
            cout << fatorial;
        }
        cout << "\nVocê deseja continuar? ";
        cin >> escolha;
        return 0;
    }
}