#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }    
        void hello()
        {
            cout << "hello" << endl;
        }
};
int main()
{
    Person sohan("Sohan Ahemmed",21);
    cout << sohan.name << " " << sohan.age << endl;
    return 0;
}