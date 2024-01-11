#include <iostream>
using namespace std;

class laptop
{
    public:
    string name;
    string procc;
    int gen;
    string ram;
    string ssd;
};

int main()
{
    laptop l1;
    l1.name = "Lenovo Ideapad S145";
    l1.procc = "i5";
    l1.gen = 10;
    l1.ram = "8GB";
    l1.ssd = "256GB";

cout << l1.name <<endl;
cout << l1.procc <<endl;
cout << l1.gen <<endl;
cout << l1.ram <<endl;
cout << l1.ssd <<endl;

return 0;

}