#include <iostream>
using namespace std;

class rectangle
{
    private:
    float length;
    float breadth;
    friend void area(rectangle);

    public:
    int area;
};

int area(length l,breadth b)
{
    l.length = 3.2;
    b.breadth = 3.8;}

int main()
{
    rectangle r1;
    area(r1);
    return 0;
}