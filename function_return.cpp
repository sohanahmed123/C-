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
student fun()
{
    student sohan(1266,5,4.98);
    student* p = &sohan;
    return sohan;
}
int main()
{
    student ans = fun();
    // cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;
    cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;
    return 0;
}