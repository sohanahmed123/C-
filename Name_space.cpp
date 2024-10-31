#include<bits/stdc++.h>
using namespace std;
namespace sohan 
{
    int age=21;

    void hello()
    {
        cout << "Sohan Namespace" << endl;
    }
}
namespace sajid
{
    int age2=18;
    void hello2()
    {
        cout << "Sajid Namespace" << endl;
    }
}
using namespace sohan;
using namespace sajid;
int main()
{
    cout << age << endl;
    cout << age2 << endl;
    return 0;
}