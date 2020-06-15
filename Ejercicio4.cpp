#include "iostream"
using namespace std;
bool DiaMaximo (int, int, int);
bool bisiesto (int);    //misma función que Ejercicio3

int main (){
    int dd, mm, aa;
    cout << endl << "Calculo de la fecha un dia despues" << endl << endl;
    cout << "Introduzca el dia: ";
    cin >> dd;
    cout << "Introduzca el mes: ";
    cin >> mm;
    cout << "Introduzca el anno: ";
    cin >> aa;
    if (DiaMaximo(dd,mm,aa)==true){        //si el día excede al posible se detendrá//
        cout << "La fecha no es valida";
        return 0;
    }
    else {
        dd++;               //si el día es uno valido, se le suma 1//
        if (DiaMaximo(dd,mm,aa)==true){    
            dd=1;
            mm++;
        }
            if (mm>12) {     
                mm=1;
                aa++;
        }
    }
    cout << "La fecha un dia despues es: " << dd << "/" << mm << "/" << aa;
}

bool DiaMaximo (int dd, int mm, int aa){
    switch (mm){
        //si el valor devuelto es true el día excede el maximo posible en dicho mes//
        case 1:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        case 2:
            if (bisiesto(aa)==true&&dd>29)
                return true;
            else if (bisiesto(aa)==false&&dd>28)
                return true;
            else 
                return false;
            break;
        case 3:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        case 4:
            if (dd>30)
                return true;
            else 
                return false;
            break;
        case 5:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        case 6:
            if (dd>30)
                return true;
            else 
                return false;
            break;
        case 7:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        case 8:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        case 9:
            if (dd>30)
                return true;
            else 
                return false;
            break;
        case 10:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        case 11:
            if (dd>30)
                return true;
            else 
                return false;
            break;
        case 12:
            if (dd>31)
                return true;
            else 
                return false;
            break;
        default:
            return true;
            break;
    }
}

bool bisiesto (int aa){
    if (aa%400==0)      //Si el año es divisible entre 400 es bisiesto
        return true;
    else if (aa%4==0 && aa%100!=0)  //si el año es divisible entre 4 y no es divisible entre 100 es bisiesto 
        return true;
    else 
        return false;
}