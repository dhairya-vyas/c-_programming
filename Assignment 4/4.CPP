/*
Sample Input
101010
Sample Output
42
*/
#include <iostream>
#include <cmath>

using namespace std;

int binarytodecimal(string n)
{
    int decimal = 0;
    int power = 0;

   
    for (int i = n.length() - 1; i >= 0; i--)
    {
        if (n[i] == '1')
        {
            
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}

int main()
{
    string n;
    cin >> n;

    int decimal = binarytodecimal(n);

    cout << decimal << endl;

    return 0;
}