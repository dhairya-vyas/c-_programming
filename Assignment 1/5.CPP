
#include <iostream>
using namespace std;
class Rectangle
{
    float length, width;

public:
    void setwidth(float);

    void setlength(float);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle);
};

int main()
{
    Rectangle rect1, rect2;

    rect1.setlength(5);
    rect1.setwidth(2.5);

    rect2.setlength(5);
    rect2.setwidth(18.9);

    cout << "\nr1 perimeter " << rect1.perimeter() << " and area " << rect1.area();

    cout << "\nr2 perimeter " << rect2.perimeter() << " and area " << rect2.area();
    if (rect1.sameArea(rect2))
        cout << "\nboth rectangle have same area";
    else
        cout << "\nboth rectangle have different area";
    return 0;
}
void Rectangle::setlength(float l)
{
    length = l;
}
void Rectangle::setwidth(float w)
{
    width = w;
}
float Rectangle::perimeter()
{
    return (2 * (length + width));
}

float Rectangle::area()

{
    return (length * width);
}
void Rectangle::show()

{
    cout << "\nlength " << length << "\nwidth " << width;
}
int Rectangle::sameArea(Rectangle r)
{
    if (area() == r.area())

        return 1;
    else
        return 0;
}