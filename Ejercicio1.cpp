#include "iostream"
using namespace std;
int eucles (int, int, int); 
int main (void){
    int may, men, res;
    cout << endl << "MCD de dos numeros" << endl << endl;
    cout << "Introduzca el numero mayor: ";
    cin >> may;
    cout << "Introduzca el numero menor: ";
    cin >> men;
    eucles (may, men, res);
    return 0;
}

int eucles (int may, int men, int res){
    do {
        res=may%men;    //se busca conocer el residuo de la division
        if (res!=0){    //se intercambian los valores para seguir dividiendo dado que el residuo no sea 0
            may=men;
            men=res;
        }
    }
    while (res!=0);     //mintras que el residuo sea diferente de 0 se volvera al loop
    cout << "El MCD es: " << men;
}