// EXER 45 REPETIÇÃO
#include <iostream>
//#include <stdlib.h>
using namespace std;

int main(){

    float massaI = 0,massaF, h, min, seg;

    cout << "Informe a massa inicial em gramas: ";
    cin >> massaI;
    massaF = massaI;

    while(massaF > 0.5){
        massaF = massaF / 2;
        seg = seg + 50;
        h = h + 0.0138889;
        min = min + 0.833333;
    }
    cout << "Quantidade de horas: " << h << endl;
    cout << "Quantidade de minutos: " << min << endl;
    cout << "Quantidade de segundos: " << seg << endl;
    cout << "A massa final: " << massaF << endl;
    cout.precision(0);
    cout << fixed << "A massa inicial: " << massaI << endl;
    return 0;
}