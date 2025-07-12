#include <iostream>
using namespace std;

int main() //me ayuda bastante mi papa
{
   const int MAX = 50;
   char nombres[20] [MAX];
   int ventas[100];
   int vendedores;
   
   cout << "ingrese la cantidad de vendedores: ";
   cin >> vendedores;
   
   for (int i = 0; i < vendedores; i++)
   {
        cout << "Vendedor " << (i + 1) << " - Nombre: ";
        cin >> ws;
        cin.getline(nombres[i], MAX);
        cout << "ingrese la cantidad de ventas que hizo "<<nombres[i] <<" :";
        cin >> ventas[i];
       
   }
   
   cout << "\n--- Resumen de Ventas ---\n";
    for (int i = 0; i < vendedores; i++)
    {
        cout << nombres[i] << ": " << ventas[i] << " ventas\n";
    }

    return 0;
}
