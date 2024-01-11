#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int rollno;
    string branch;
    int sem;
    void study()
    {
        cout<<"The student is studying";
    }

    student()
    {
        branch = "CSE";
        sem = 3;
    }
    ~student()
    {
        cout<<"The object is destroyed"<<endl;
    }
};
int main()
{
    student s1;
    student s2;
    s1.name = "xyz";
    s1.rollno = 99;
    s2.name = "abc";
    s2.rollno = 100;
    return 0;
}