
#include<iostream>
using namespace std;
class time{
    int hours,minutes;
    public:
    void settime(int,int);
    void showtime(time);

    time sum(time);
};
int main()
{
    time t1,t2,t3;
    t1.settime(5,7);
    t2.settime(10,32);
    t3=t1.sum(t2);
    return 0;
}
void time:: settime(int h,int m)
{
    hours = h;
    minutes = m;
}
time time::sum(time t){
    time temp;
    temp.hours=hours+ t.hours;
    temp.minutes=minutes+t.minutes;
    return temp;
}