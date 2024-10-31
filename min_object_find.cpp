#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int mark;
};
int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    // int mn=INT_MAX; //Minium
    int max=INT_MIN; // Maximum
    for(int i=0;i<n;i++)
    {
        if(a[i].mark>max)
        {
            max=a[i].mark;
        }
    }
    cout<< max << endl;
    return 0;
}