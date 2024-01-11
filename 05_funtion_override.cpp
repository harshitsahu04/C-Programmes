#include <iostream>
using namespace std;

class parent
{
public:
    string name;
    int age;

    void print()
    {
        cout << "this is parent class";
    }
};

class child
{
public:
    string chname;
    int age;

    void print()
    {
        cout << "this is child class";
    }
};

int main()
{
    child c1;
    c1.print();
    cout<<endl;
    parent p1;
    p1.print();
}