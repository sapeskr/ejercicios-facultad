#include <iostream>

/*
Escriba 3 funciones sobrecargando el nombre intercambio(..) de modo que cada una
de ellas pueda ser invocada y produzca el intercambio de 2 datos que se pasan
como parámetros: 2 datos de tipo char, 2 datos enteros, dos arreglos de flotantes.
*/

using namespace std;

void intercambio (char &dato1, char &dato2);

void intercambio (int &entero1, int &entero2);

void intercambio (float arreglo1[], float arreglo2[], int dimen);



int main()
{

    char dato1, dato2;
    int entero1, entero2, dimen=3;
    float arreglo1[3];
    float arreglo2[3];

    cout<<"ingrese un char: ";
    cin>>dato1;
    cout<<"ingrese otro char: ";
    cin>>dato2;
    cout<<"ingrese un entero: ";
    cin>>entero1;
    cout<<"ingrese otro entero: ";
    cin>>entero2;

    for (int i=0;i<3;i++)
    {
        cout<<"ingrese un float para el arreglo 1: ";
        cin>>arreglo1[i];
    }

    for (int i=0;i<3;i++)
    {
        cout<<"ingrese un float para el arreglo 2: ";
        cin>>arreglo2[i];
    }

    intercambio (dato1, dato2);
    intercambio (entero1, entero2);
    intercambio (arreglo1, arreglo2, dimen);

    cout<<"char intercambiados: "<<dato1<<"  "<<dato2<<endl;
    cout<<"entero intercambiado: "<<entero1<<"  "<<entero2<<endl;
    cout<<"arreglo intercambiado: "<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<arreglo1[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<arreglo2[i]<<" ";
    }
    cout<<endl;
    return 0;
}

void intercambio (char &dato1, char &dato2)
{
    char aux;

    aux=dato1;
    dato1=dato2;
    dato2=aux;
}

void intercambio (int &entero1, int &entero2)
{
    int aux;

    aux=entero1;
    entero1=entero2;
    entero2=aux;
}

void intercambio (float arreglo1[], float arreglo2[], int dimen=3)
{
    float aux[dimen];
for(int i=0;i<dimen;i++){
    aux[i]=arreglo1[i];
    arreglo1[i]=arreglo2[i];
    arreglo2[i]=aux[i];
}
}

