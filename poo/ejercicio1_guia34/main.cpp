#include <iostream>
#include <stdalign.h> // con esta libreria funciona new y delete

/*
   1) Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
      por parámetro en la ultima posición.
*/
using namespace std;

void pedirnumeros (); // prototipo
void mostrarelementos (); // prototipo
void agregarelvalorultimapo (int *vecdinamico, int cantelementos, int valor); // prototipo

int cantelementos; // variable global
int *vecdinamico; // puntero vecdinamico global
int valor;

int main()
{
    pedirnumeros();
    agregarelvalorultimapo (vecdinamico, cantelementos, valor);
    mostrarelementos();

    return 0;
}

void pedirnumeros ()
{
    cout<<"ingrese la cantidad de elementos: ";
    cin>>cantelementos;

    vecdinamico = new int [cantelementos]; // creando arreglo dinamico

    for (int i=0; i<cantelementos;i++)
    {
        cout<<"ingrese un elemento para el vector dinamico: ";
        cin>>vecdinamico[i];
    }
    cout<<"ingrese el valor para la ultima posicion del vector dinamico: ";
    cin>>valor;
}

void mostrarelementos()
{
    cout<<"elementos del vector dinamico: "<<endl;

    for (int i=0;i<cantelementos;i++)
    {
        cout<<i<<" - "<<" "<<vecdinamico[i]<<" , ";
    }
}

void agregarelvalorultimapo (int *vecdinamico, int cantelementos, int valor)
{
    vecdinamico[cantelementos-1] = valor;
}
