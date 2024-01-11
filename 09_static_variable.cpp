#include<iostream>
using namespace std;

class college
{
    public:
    string name;
    static int no;
};
int college :: no;

int main()
{
    college c1,c2;
    c1.name = "GGITS";
    c2.name = "GGCT";
    college :: no = 65;

    cout<<c1.name<<endl<<c2.name<<endl<<college :: no;
    
}