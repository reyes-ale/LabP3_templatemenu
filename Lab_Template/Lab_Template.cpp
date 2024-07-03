
#include <iostream>
#include <locale>
#include <stdlib.h>
using namespace std;

void menu() {
    setlocale(LC_ALL, "spanish"); 
    srand(time(NULL));
    int numeroAleatorio = rand() % 55 + 1; //55 limite - empieza en 1

    int opcion; 

    do {
        cout << "---- Menú ---- \n1. ... \n2. ... \n3. Salir \n\nIngrese la opción que desea realizar: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                break;

            case 2:
                break;

        default:
            if (opcion != 3) {
                cout << endl;
                cout << "Ingrese la opción nuevamente: " << endl;
            }
            break;
        }


    } while (opcion != 3);
}

int main() {
    menu(); 
    return 0;
}

