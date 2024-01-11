#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    try
    {
        if (age < 18)
            throw age;
        else
        {
            cout << "eligible to vote" << endl;
        }
    }
    catch (int a)
    {
        cout << "you cant vote" << endl;
    }
}