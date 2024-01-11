#include <iostream>
using namespace std;
class bike
{
public:
    string name;
    int cc;
    int price;
    string avail;
};
int main()
{
    bike b1;
    b1.name = "Hayabusa";
    b1.cc = 1300;
    b1.price = 1656000;
    b1.avail = "Available";

cout << b1.name <<endl;
cout << b1.cc <<endl;
cout << b1.price <<endl;
cout << b1.avail <<endl;
return 0;
}