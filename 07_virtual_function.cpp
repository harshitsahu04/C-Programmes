#include <iostream>
using namespace std;

class parent
{
public:
    string fname;
    int age;
    string eyecol;

    virtual void func()
    {
        cout << "This is parent class";
    }
};

class child : public parent
{
public:
    string cname;
    int std;

    void func()
    {
        cout << "This is child class";
    }
};

int main()
{
    parent *p1;
    child c1;
    p1 = &c1;
    c1.func();
    cout<<endl;
    p1->func();
}