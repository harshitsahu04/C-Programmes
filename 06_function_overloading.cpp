#include<iostream>
using namespace std;

class sum
{
    public:
    void fun(int a, int b)
    {
        cout<<"The sum is "<<a+b;
    }
    void fun(int a, int b, int c)
    {
        cout<<"The sum is "<<a+b+c;
    }
};

int main()
{
    sum s1;
    s1.fun(2,3);
    cout<<endl;
    s1.fun(2,3,4);
}