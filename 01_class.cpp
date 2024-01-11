#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    string branch;
    int sem;
};
int main()
{
    student stu1;
    
        stu1.name = "Harshit Sahu";
        stu1.roll = 97;
        stu1.branch = "CSE";
        stu1.sem = 3;
    

cout << stu1.name <<endl;
cout << stu1.roll <<endl;
cout << stu1.branch <<endl;
cout << stu1.sem <<endl;

 student stu2;
    
        stu2.name = "Harsh Mahto";
        stu2.roll = 94;
        stu2.branch = "CSE";
        stu2.sem = 33;
    
cout<<"_____________________________________"<<endl;
cout << stu2.name <<endl;
cout << stu2.roll <<endl;
cout << stu2.branch <<endl;
cout << stu2.sem <<endl;


 student stu3;
    
        stu3.name = "Ishan Jatav";
        stu3.roll = 103;
        stu3.branch = "CSE";
        stu3.sem = 3;
    
cout<<"_____________________________________"<<endl;
cout << stu3.name <<endl;
cout << stu3.roll <<endl;
cout << stu3.branch <<endl;
cout << stu3.sem <<endl;

 student stu4;
    
        stu4.name = "Kalyan Ji Goutel";
        stu4.roll = 109;
        stu4.branch = "CSE";
        stu4.sem = 3;
    
cout<<"_____________________________________"<<endl;
cout << stu4.name <<endl;
cout << stu4.roll <<endl;
cout << stu4.branch <<endl;
cout << stu4.sem <<endl;

    return 0;
}