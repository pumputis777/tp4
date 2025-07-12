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