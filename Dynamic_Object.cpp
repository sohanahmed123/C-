#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    student sohan(1266,14,3.54);
    student* sajid = new student (1266,14,3.54);
    cout << sajid -> cls << " " << sajid -> roll << " " << sajid -> gpa << endl;
    return 0;
}