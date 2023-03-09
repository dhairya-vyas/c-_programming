
#include<iostream>
using namespace std;
class shape{

    public:
    float area(float);
    float area(float,float);
    float area(float,float,float);
};

float shape::area(float a)
{
    return (a*a);
}
float shape::area(float a,float b)
{
    return (a*b);
}
float shape::area(float a,float b,float h)
{
    return ((a+b)*h/2);
}

int main()
{
    shape d;
    cout<<"\narea of 5x5 rectangle  "<<d.area(5,5);
    cout<<"\narea of 8 length square is "<<d.area(8);
    cout<<"\narea of 5,6,7 featured square "<<d.area(5,6,7);
    return 0;
}