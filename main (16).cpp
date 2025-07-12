
#include <iostream>
using namespace std;
int main()
{
    int x;
    int n;

  
    cout << "ingrese un numero entero positivo: ";
    cin >> x;
    
    for (int i=1; i <= x; i++)
    {
        for (int I=1; I<= x; I++ )
        {
            n = i + I;
            if (n <= x)
            {
                cout << " * ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    

 return 0;
}
