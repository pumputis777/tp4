/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int x;
    int ayuda = 0;
    int resultado;
  
    cout << "ingrese un numero entero que no sea negativo: ";
    cin >> x;
    
    if (x < 0)
    {
        cout << "no puede ingresar numeros negativos";
        return 0;
    }
    resultado = x;
    
    for (int i = 1; i < x; i++)
    {
        ayuda = ayuda + 1;
        resultado = resultado * ayuda ;
        
    }
    if (x == 0)
    {
        resultado = 1;
    }
    
    cout << "el factorial de " <<x << " es: "<<resultado;

 return 0;
}