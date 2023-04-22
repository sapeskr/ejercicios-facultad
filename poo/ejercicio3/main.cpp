#include <iostream>

/*
Se ingresan los nombres y edades de los 457 miembros de una asociación
cooperadora. Determinar el nombre y la edad del mayor de los integrantes.
Validar la entrada de los datos correspondientes a las edades, los cuales deben estar
dentro el rango 12..90, con una función llamada validar_edad() en la cual, al
verificarse una edad fuera del rango, se debe indicar un mensaje de error y permitir el
reingreso del dato.
*/
using namespace std;

bool validar_edad (int edad);

int main()
{
    string nombre;
    string nombremayor;
    int edad;
    int edadmayor=0;
    bool validando;

    for (int i=0;i<3;i++)
    {
        cout<<"ingrese el nombre de la persona: ";
        getline (cin, nombre);
        cout<<"ingrese la edad de la persona: ";
        cin>>edad;
        cin.get();

        validando = validar_edad(edad);

        if (validando==false)
        {
            cout<<"FATAL ERROR"<<endl;
            cout<<"reingrese la edad de la persona: ";
            cin>>edad;
            cin.get();

        }
        else
        {
            if (edad>edadmayor)
            {
                edadmayor=edad;
                nombremayor=nombre;
            }
        }
    }

    cout<<"integrante mayor: "<<nombremayor<<"  "<<edadmayor<<endl;

    return 0;
}


bool validar_edad (int edad)
{
    if (edad>=12 && edad<=90)
    {
        return true;
    }
    else
    {
        return false;
    }
}


