
#include <iostream>
using namespace std;

class addClass
{

    int sum;

public:
    dummyClass(int a = 0, int b = 0)
    {
        sum = a + b;
    }
    int GetSum()
    {
        return sum;
    }
};
int main(int argc, int argv[])
{
    int a = argv[0], b = argv[1];
    addClass s(a, b);
    cout << s.GetSum();
    return 0;
}