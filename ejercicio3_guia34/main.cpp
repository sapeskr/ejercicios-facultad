#include <iostream>

/*3. Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
 por parámetro en una posición pasada por parámetros*/

using namespace std;

int cantidadelementos;
int *vectordinamico;
int valor;
int posicion;

void pedirnumeros ();
void agregarvalorespecifico (int *vectordinamico, int valor, int posicion);
void mostrarelementos ();


int main()
{

    pedirnumeros();
    agregarvalorespecifico(vectordinamico, valor, posicion);
    mostrarelementos();

    return 0;
}

void pedirnumeros (){

    cout<<"ingrese la cantidad de elementos del vector: ";
    cin>>cantidadelementos;

    vectordinamico = new int [cantidadelementos];

    for (int i=0;i<cantidadelementos;i++){

        cout<<"ingrese un valor para el vector: ";
        cin>>vectordinamico[i];
    }

    cout<<"ingrese el valor a agregar: ";
    cin>>valor;
    cout<<"ingrese la posicion que ocuparia el nuevo valor: ";
    cin>>posicion;
}

void agregarvalorespecifico (int *vectordinamico, int valor, int posicion){

    vectordinamico[posicion]=valor;
}

void mostrarelementos (){

    cout<<"el vector dinamico es: ";

    for (int i=0;i<cantidadelementos;i++){

        cout<<"pos -> "<<i<<" numero -> "<<vectordinamico[i]<<" // ";
    }

}
