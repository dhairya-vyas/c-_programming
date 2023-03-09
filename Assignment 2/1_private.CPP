//write three programs which specify public, private and protected
#include<iostream>
using namespace std;
class c{
    private:
    int D;
    
};
int main()
{
    c D;
    D.d=0;          //private members can't be accessed directly by object
    cout<<D.d;
    return 0;
}