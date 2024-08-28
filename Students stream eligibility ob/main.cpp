#include <iostream>
using namespace std;
class STUDENT
{
    int marks[5],roll_no;
    char name[20];
    public:
    void input()
    {
        cout << "Fil your details below." << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Roll number : ";
        cin >> roll_no;
        cout << "Enter your marks in 5 core subjects in any order.\n\n";
        for(int i=0;i<5;i++)
        {
            cout << "Marks of subject " << i+1 << " : ";
            cin >> marks[i];
        }

    }
    void stream_checker()
    {
        int total = 0;
        float percentage;
        for(int i=0;i<5;i++)
        {
            total+=marks[i];
        }
        percentage = total/5;
        if (percentage >= 96)
        {
            cout << "You are eligible for Computer Science.";
        }
        if (percentage >= 91 && percentage <=95)
        {
            cout << "You are eligible for Electronics.";
        }
        if (percentage >= 86 && percentage <=90)
        {
            cout << "You are eligible for Mechanical.";
        }
        if (percentage >= 81 && percentage <= 85)
        {
            cout << "You are eligible for Electrical.";
        }
        if (percentage >= 76 && percentage <= 80)
        {
            cout << "You are eligible for Chemical.";
        }
        if (percentage >= 71 && percentage <= 75)
        {
            cout << "You are eligible for Civil.";
        }
        if (percentage < 75)
        {
            cout << "Try again next year!";
        }
    }

};

int main()
{
    STUDENT ob;
    ob.input();
    ob.stream_checker();
    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";
    return 0;
}