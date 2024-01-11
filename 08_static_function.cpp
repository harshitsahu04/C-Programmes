#include<iostream>
using namespace std;

class parent
{
    public:
    string name;
    int age;

    static string func()
    {
        cout<<"This is parent class";
    }
};        

int main()
{
    parent :: func();
}