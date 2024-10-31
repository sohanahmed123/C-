#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            this -> name=name;
            this -> age = age;
        }
};
int main()
{
    person* sohan=new person("Sohan Ahmed",21);
    person* sajid=new person("Sajid Hossain",18);

    *sohan=*sajid;
    delete sajid;
    cout << sohan->name << " " << sohan->age << endl;
    return 0;
}