
#include <iostream>
using namespace std;

class complex
{
    float real, img;

public:
    void set(float, float);
    void disp();
    complex sum(complex);
};

int main()
{
    complex co1, co2, co3;
    co1.set(5.4, 6.7);
    co2.set(9.1, 7.6);

    cout << "\n";
    co1.disp();
    cout << "\n";
    co2.disp();
    co3 = co1.sum(co2);
    cout << "\nco1 + co2 ";
    co3.disp();
    return 0;
}
void complex::set(float r, float i)
{
    real = r;
    img = i;
}

void complex::disp()
{
    cout << real << "+" << img;
}

complex complex::sum(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}