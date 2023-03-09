//write three programs which specify public, private and protected
#include<iostream>
using namespace std;
class c{
    protected:
    int d;
};
class p:public b{
    void print()
    {
        cout<<d;
    }
    void set(int x)
    {
        d=x;
    }
}
int main()
{
    c D;
    D.d=0;
    cout<<D.d;
    return 0;
}