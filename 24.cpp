//Exer 24 Lista de repetição
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

    string nome, sexo;
    int idade;

    for(int i = 1; i <= 3; i++){

        cout << "\nDigite o " << i << " nome: ";
        cin >> nome;
        cout << "Digite o sexo [M/F]: ";
        cin >> sexo;
        cout << "Digite a sua idade: ";
        cin >> idade;
        if((sexo == "M" || sexo == "m") && (idade > 21)){
            cout << "\nO seu nome é " << nome << " com " << idade << " anos.";
        }
        cout << "\n_\n";
    }
    return 0;
}