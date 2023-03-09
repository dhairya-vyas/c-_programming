/*
x = (-b ± √(b2 - 4ac))
    ------------------
           2*a 
*/
#include<iostream>
#include<math.h>
using namespace std;
 

void findroots(int a, int b, int c)
{
    
    if (a == 0) {
        cout << "Invalid";
        return;
    }
 
    int d = (b * b) -(4 * a * c);
    double sqrt_value = sqrt(abs(d));
 
    if (d > 0) {
        cout << "Roots are real and different \n";
        cout << (double)(-b + sqrt_value) / (2 * a) << "\n"
             << (double)(-b - sqrt_value) / (2 * a);
    }
    else if (d == 0) {
        cout << "Roots are real and same \n";
        cout << -(double)b / (2 * a);
    }
    else 
    {
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_value / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_value / (2 * a);
    }
}
 

int main()
{
    int a , b , c ;
    cout<<"enter a b c :";
    cin>>a>>b>>c;
 
    
    findroots(a, b, c);
    return 0;
}