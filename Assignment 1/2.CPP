
#include <iostream>
using namespace std;
class cal
{
    float a, b;

public:
    calc(int p = 0, int q = 0)
    {

        a = p;
        b = q;
    }
    float add(void);

    float sub(void);
    float mul(void);
    float div(void);
};
float cal::add()
{
    return (a + b);
}
float cal::sub()
{
    return (a - b);
}
float cal::mul()
{
    return (a * b);
}
float cal::div()
{
    if (b != 0)
        return (a / b);
    else
        cout << "\nerror in input";
}
int main()
{
    cal co(5, 7);
    cout << "\naddition = " << co.add();

    cout << "\nsubstraction =  " << co.sub();
    cout << "\nproduct = " << co.mul();
    cout << "\ndivision =" << co.div();

    return 0;
}