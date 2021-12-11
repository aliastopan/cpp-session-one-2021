#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n = 5;
    int k = 2 * n - 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}

