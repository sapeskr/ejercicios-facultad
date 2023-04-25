#include <iostream>

/*
Escribir un programa C++ que calcule el importe de una factura sabiendo que el IVA
a aplicar es del 13% y que si el importe bruto de la factura es superior a 50, se debe
realizar un descuento del 5%.
*/

using namespace std;

int ivafuncion (int importebruto);

int main()
{
 int importebruto;
 int importeconiva;
 int descuento;
 int importecondescuento;

 cout<<"ingrese el importe de la factura: ";
 cin>>importebruto;

 importeconiva = ivafuncion(importebruto);

 if (importebruto>=50)
    {
      descuento = (importebruto*5)/100;
      importecondescuento = importebruto-descuento;
    }

   cout<<"importe bruto: "<<importebruto<<endl;
   cout<<"importe con descuento: "<<importecondescuento<<endl;
   cout<<"importe con iva: "<<importeconiva<<endl;

    return 0;
}


int ivafuncion (int importebruto)
{
    int iva=0;
    int totalconiva=0;

    iva = (importebruto*13)/100;
    totalconiva = iva+importebruto;

    return totalconiva;
}
