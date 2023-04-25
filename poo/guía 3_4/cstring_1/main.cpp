#include <iostream>
#include <ctype.h> // provee funciones para analizar caracteres individuales

using namespace std;

/*realice una funcion que dado un vector de cstring retorne el mismo cstring en mayuscula*/

  char* upper (char*palabra);

int main()
{

    char* palabra = "hola mundo";

    cout<<upper(palabra)<<endl;
    cout<<palabra<<endl;

    return 0;
}

char* upper (char*palabra){

int cant;
int i=0;

    while (palabra[i]!='\0'){

     i++;

    }
    cant=i+1;

    char* upper;
    upper=new char[cant];

    for (int i=0;i<cant;i++){

        if (palabra[i]>='a'&& palabra[i]<='z'){

         upper[i]=palabra[i]-32;

        }else {

            upper[i]=palabra[i];
        }
    }
    return upper;
}
