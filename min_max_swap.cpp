#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double mn=min({a,b,c,d});
    double mx=max({a,b,c,d});
    cout << mn << " " << mx << endl;
    return 0;
}