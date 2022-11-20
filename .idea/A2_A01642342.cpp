#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;

    do {
        system("cls");

        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                int numero;
                div_t resultado;

                while (1 == 1) {
                    cout << "Ingrese un numero para verificar si es par" << endl;
                    cin >> numero;
                    resultado = div(numero, 2);

                    if (resultado.rem > 0) {
                        cout << numero << " Es impar" << endl;
                    } else {
                        cout << numero << " Es par" << endl;
                    }
                }

                system("pause>nul"); // Pausa
                break;

            case 2:{
                int suma = 0;

                for (int i = 1; i <= 100; i++) {
                    if (i % 2 == 0) suma += i;
                }

                std::cout << "\nLa suma de los numeros pares es: " << suma << std::endl;

                return 0;

                }
                    system("pause>nul"); // Pausa
                    break;


            case 3:{
                int total;
                cout<<"Ingrese el total de numeros: ";
                cin>>total;
                float aux , suma=0;
                for(int i = 0; i<total;i++)
                {

                    cout<<"Ingrese el numero"<<(i+1)<<" : ";
                    cin>>aux;
                    suma+=aux;

                }
                cout<<"El valor de la media: "<<(suma/total);
            }

                system("pause>nul"); // Pausa
                break;

            case 4: {
                int numero, dato, contador = 0;

                srand(time(NULL)); //generar un numero aleatorio entre 1-100
                dato = 1 + rand() % (101 - 1);

                do {
                    cout << "Digite un numero: ";
                    cin >> numero;
                    if (numero > dato) {
                        cout << "Es un numero menor\n";
                    } else if (numero < dato) {
                        cout << "Es un numero mayor\n";
                    }
                    contador++;
                } while (numero != dato);

                cout << "\n�FELICIDADES ADIVINO EL NUMERO!" << endl;
                cout << "Numero de intentos: " << contador << endl;

                return 0;
            }

                system("pause>nul"); // Pausa
                break;

            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}
