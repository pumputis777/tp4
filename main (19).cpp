#include <iostream>
using namespace std;
int main()
{
    
    double saldo = 0;
    int opcion = 0;

    while (opcion != 4)
    {
        
        cout << "\n--- Cajero Automático ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Elige una opción (1-4): ";
        cin >> opcion;

        if (opcion == 1) 
        {
            cout << "Saldo actual: $" << saldo << "\n";
        }
        
        else if (opcion == 2)
        {
            double monto;
            
            cout << "Monto a depositar: $";
            cin >> monto;
            
            if (monto > 0)
            {
                saldo = saldo + monto;
                
                cout << "Depósito exitoso. Nuevo saldo: $" << saldo << "\n";
                
            } 
            else 
            {
                cout << "Monto inválido.\n";
            }
            
        }
        
        else if (opcion == 3)
        {
            double monto;
            
            cout << "Monto a retirar: $";
            cin >> monto;
            
            if (monto > 0) 
            {
                if (monto <= saldo) 
                {
                    saldo = saldo - monto;
                    
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << "\n";
                    
                } 
                else 
                {
                    cout << "Saldo insuficiente.\n";
                }
                
            }
            else
            {
                cout << "Monto inválido.\n";
            }
            
        }
        
        else if (opcion == 4) 
        {
            cout << "Gracias por usar el cajero. ¡Hasta luego!\n";
        }
        
        else
        {
            cout << "Opción no válida, inténtalo de nuevo.\n";
        }
        
    }

    return 0;
}