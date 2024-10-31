#include<bits/stdc++.h>
using namespace std;
class employee
{
public:
    char name[100];
    char rank[100];
    int salary;
};
int main()
{
    employee a1,a2;
    cin.getline(a1.name,100);
    cin.getline(a1.rank,100);
    cin >> a1.salary;
    getchar();
    cin.getline(a2.name,100);
    cin.getline(a2.rank,100);
    cin >> a2.salary;

    cout << a1.name  << " " << a1.rank << " " << a1.salary << " " << endl;
    cout << a2.name  << " " << a2.rank << " " << a2.salary << " " << endl;
    return 0;
}