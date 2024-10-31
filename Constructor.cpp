#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double cgpa;
    student(int roll,int cls,double cgpa)
    {
        // roll=r;
        // cls=c;
        // cgpa=g;
        // this -> roll = roll;
        // this -> cls = cls;
        // this -> cgpa = cgpa;
        (*this).roll=roll;
        (*this).cls=cls;
        (*this).cgpa=cgpa;
        
    }
};
int main()
{
    student sohan(1266,4,3.55);
    student Sohan(1246,45,3.233);
    cout << sohan.roll << " " << sohan.cls << " " << sohan.cgpa << " " << endl;
    cout << Sohan.roll << " " << Sohan.cls << " " << Sohan.cgpa << " " << endl;
    return 0;
}