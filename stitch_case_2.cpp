#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch(x%2==0)
    {
        case 1:
            cout << "even" << endl;
            break;
        default:
            cout << "odd" << endl;
    }
    return 0;
}