
#include <iostream>
using namespace std;

class student
{
    int admno;

    float eng, math, science;
    char sname[20];

    float total;
    float ctotal();

public:
    void Takedata();
    void Showdata();
};

int main()
{
    student s;
    s.Takedata();
    s.Showdata();

    return 0;
}

float student ::ctotal()
{
    return (eng + math + science);
}
void student::Takedata()
{
    cout << "\nenter the admno ";
    cin >> admno;
    cout << "\nenter the student_name ";
    cin >> sname;
    cout << "\nenter the eng ";
    cin >> eng;
    cout << "\nenter the science ";
    cin >> science;
    cout << "\nenter the maths ";
    cin >> math;
    cout << "\ntotal is " << ctotal();
}
void student::Showdata()
{
    cout << "\n math " << math;
    cout << "\nenglish " << eng;
    cout << "\nscience " << science;
}