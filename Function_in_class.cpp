#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string nm,int ag)
    {
        name=nm;
        age=ag;
    }
};
int main()
{
    Person sohan("Sohan Ahmed",22);
    cout << sohan.name << " " << sohan.age << endl;
    return 0;
}