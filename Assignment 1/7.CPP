

#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;

public:
    void set(int, float);
    void disp();
    Distance operator+(Distance);
};

int main()
{
    Distance dis1, dis2, dis3;
    dis1.set(5, 6);
    dis2.set(6, 4);

    dis3 = dis1 + dis3;
    dis3.disp();

    return 0;
}

void Distance::set(int f, float i)
{
    feet = f;
    inches = i;
}
void Distance::disp()
{
    cout << "feet " << feet << "'" << inches;
}
Distance Distance::operator+(Distance dis1)
{
    Distance d;
    d.feet = feet + dis1.feet;
    d.feet = inches + dis1.inches;
    return d;
}