#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch(x%2)
    {
        case 0:
            cout << "even" << endl;
            break;
        case 1:
            cout << "odd" << endl;
    }
    return 0;
}