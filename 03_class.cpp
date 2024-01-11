#include <iostream>
using namespace std;

class teacher
{
    public:
    string name;
    int id;
    string dep;
    string sub;
};

int main()
{
    teacher t1;

    t1.name = "Prakhar Gautam";
    t1.id = 1285;
    t1.dep = "CSE";
    t1.sub = "OOPM";

cout << t1.name <<endl;
cout << t1.id<<endl;
cout << t1.dep <<endl;
cout << t1.sub <<endl;

teacher t2;

    t2.name = "Sitanshu Jain";
    t2.id = 956;
    t2.dep = "CSE";
    t2.sub = "DS";
cout<<"_____________________________________"<<endl;
cout << t2.name <<endl;
cout << t2.id<<endl;
cout << t2.dep <<endl;
cout << t2.sub <<endl;

teacher t3;

    t3.name = "U N Bera";
    t3.id = 1169;
    t3.dep = "CSE";
    t3.sub = "DGS";
cout<<"_____________________________________"<<endl;
cout << t3.name <<endl;
cout << t3.id<<endl;
cout << t3.dep <<endl;
cout << t3.sub <<endl;

}
