#include "iostream"
using namespace std;
int UnSegundoDespues (int, int, int);
int main (void){
    int hh, mm, ss;
    cout << endl << "Calculo de la hora un segundo despues" << endl << endl;
    cout << "Introduzca la hora en formato de 24 horas: ";
    cin >> hh;
    cout << "Introduzca los minutos: ";
    cin >> mm;
    cout << "Introduzca los segundos: ";
    cin >> ss;
    UnSegundoDespues(hh, mm, ss);
return 0;
}

int UnSegundoDespues (int h, int m, int s){
    if (h>23||m>59||s>59){      //se descartan valores muy altos
        cout << "el tiempo introducido no es valido";
        return 0;
    }
    else {
        s++;                    //se le suma 1 a los segundos
        if (s=60){
            s=0;
            m++;                //si los segundos se vuelven 60 se aumenta 1 minuto
            if (m=60){
                m=0;
                h++;            //si los minutos se vuelven 60 se aumenta 1 hora
                if (h=24){
                    h=0;        //si las horas se vuelven 24 se convierten en 0
                }
            }
        }
    }
    cout << "La hora despues de un segundo es: " << h << ": " << m << ": " << s;
}