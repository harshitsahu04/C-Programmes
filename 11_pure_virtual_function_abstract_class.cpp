#include <iostream>
using namespace std;

class shape
{
public:
    virtual void func() = 0;
};

class rectangle : public shape
{
public:
    void func()
    {
        cout << "Rectangle is printed\n";
    }
};

class triangle : public shape
{
public:
    void func()
    {
        cout << "Triangle is printed";
    }
};

int main()
{
    rectangle r1;
    triangle t1;

    r1.func();
    t1.func();
    return 0;
}