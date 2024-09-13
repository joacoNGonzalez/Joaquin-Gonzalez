#include <iostream>
using namespace std;

int main(){

    int opcion;
do{
    cout << "--MENU DE OPCIONES--" << endl;
    cout << "1. Determinar si un año es bisiesto" << endl;
    cout << "2. Tabla de multiplicar inversa" << endl;
    cout << "3. FizzBuzz" << endl;
    cout << "4. SALIR" << endl;
    cout << "Ingrese una opcion: "; cin >> opcion;
    cout << endl;

    switch(opcion){

    case 1:

        int anio;

        cout << "Determinar si un año es bisiesto" << endl;
        cout << "ingrese un año: "; cin >> anio;

        if(anio % 4 == 0){
            cout << anio << " es un anio bisiesto." << endl;

        }else if(anio % 400 == 0){
            cout << anio << " es un anio bisiesto." << endl;

        }else if(anio % 100 != 0){
            cout << anio << " No es un anio bisiesto." << endl;
        }

        cout << endl;
        break;

    case 2:

        int numeroAmultiplicar;

        cout << "Tabla de multiplicar inversa" << endl;
        cout << "ingrese un numero: "; cin >> numeroAmultiplicar;

        cout << numeroAmultiplicar << " * 10 = " <<numeroAmultiplicar * 10 << endl;
        cout << numeroAmultiplicar << " * 9 = " <<numeroAmultiplicar * 9 << endl;
        cout << numeroAmultiplicar << " * 8 = " <<numeroAmultiplicar * 8 << endl;
        cout << numeroAmultiplicar << " * 7 = " <<numeroAmultiplicar * 7 << endl;
        cout << numeroAmultiplicar << " * 6 = " <<numeroAmultiplicar * 6 << endl;
        cout << numeroAmultiplicar << " * 5 = " <<numeroAmultiplicar * 5 << endl;
        cout << numeroAmultiplicar << " * 4 = " <<numeroAmultiplicar * 4 << endl;
        cout << numeroAmultiplicar << " * 3 = " <<numeroAmultiplicar * 3 << endl;
        cout << numeroAmultiplicar << " * 2 = " <<numeroAmultiplicar * 2 << endl;
        cout << numeroAmultiplicar << " * 1 = " <<numeroAmultiplicar * 1 << endl;

        break;
    case 3:

        int numeroDelUsuario;

        cout << "FizzBuzz" << endl;
        cout << "ingrese un numero limite mayor a 15: "; cin >> numeroDelUsuario;

        for(int i ; i == numeroDelUsuario ; i++){

        if(numeroDelUsuario % 3 == 0){

            if(numeroDelUsuario % 5 == 0){
                cout << "FizzBuzz";
            }else{
                cout << "Fizz";
            }

        }else if(numeroDelUsuario % 5 == 0){
            cout << "Buzz";

        }else {
            cout << i;
        }

        break;
    }
    }
cout << endl;

}while(opcion !=4);

    return 0;
}
