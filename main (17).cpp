#include <iostream>
using namespace std;

int main()
{
    
    int n;
    
    cout << "Introduce un entero positivo n: ";
    cin >> n;

    cout << "    *";
    for (int j = 1; j <= n; j++)
    {
        cout << "    " << j;
    }
    
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "    " << i;
        for (int j = 1; j <= n; j++)
        {
            cout << "    " << i * j;
        }
        cout << endl;
    }

    return 0;
}