#include<iostream>
#include<algorithm>
using namespace std;
// void my_swap(int *a, int *b)
// {
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// }
int main()
{
    int a,b;
    cin >> a>> b;
    // my_swap(&a,&b);
    swap(a,b);
    cout << a << " " << b;
    return 0;
}