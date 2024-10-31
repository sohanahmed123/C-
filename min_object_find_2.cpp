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
    student max;
    max.mark=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i].mark>max.mark)
        {
            max=a[i];
        }
    }
    cout << max.name << " " << max.roll << " " << max.mark << endl;
    return 0;
}