#include <iostream>
using namespace std;
class ABC
{
    int a,b;
    public:
    void input()
    {
        cout<<"Enter 1st number : ";
        cin>>a;
        cout<<"Enter 2nd number : ";
        cin>>b;
    }

    int output()
    {
        cout<<"Sum of the two numbers is : " << a+b;
    }

};
int main()
{
    ABC ob;
    ob.input();
    ob.output();
    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 2";
    return 0;
}