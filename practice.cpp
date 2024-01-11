#include<iostream>
using namespace std;

class parent
{
    public:
    string parname;
    string eyecol;
};
class child:public parent
{
    public:
    string name;
    int age;
};

int main()
{
    parent p1;
    p1.parname = "max";
    p1.eyecol = "brown";

    child ch1;
    ch1.name = "George";
    ch1.age = 12;

    cout<<ch1.eyecol<<endl;
    return 0;
}