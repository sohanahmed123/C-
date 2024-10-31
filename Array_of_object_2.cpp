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
    // cin.ignore();
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name); //input with space string
        cin>>a[i].roll>>a[i].mark;
        // cin.ignore();
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<endl<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    return 0;
}