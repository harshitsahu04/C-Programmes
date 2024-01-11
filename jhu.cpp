#include<iostream>
using namespace std;
class child
{
    public:
    string name;
    int age;
};

int main()
{
    child ch1;
    ch1.name = "George";
    ch1.age = 12;

    cout<<ch1.name<<endl;
    return 0;
}