#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // int ar[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>ar[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout << ar[i] << endl;
    // }
    char c[100];
    // cin >> c;
    // cout << c << endl;
    int len=strlen(c);
    cin.getline(c,len+1);
    cout << c << endl;
    return 0;
}