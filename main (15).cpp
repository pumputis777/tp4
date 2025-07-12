
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
