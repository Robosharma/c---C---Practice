#include <iostream>
using namespace std;
class ABC
{
    int num,factorial=1;
    public:
    void input()
    {
        cout<<"Enter the number : ";
        cin>>num;
    }

    void output()
    {
        if(num<0)
        {
            cout<<"Error : Factorial of a negitive number doesn't exist!" << endl;
        }
        if(num == 0)
        {
            cout<<" Factoral of a zero is 1.";
        }
        if(num>0)
        {
            for(int i = 1;i<=num;i++)
            {
                factorial*=i;
            }
/*       while(itt>0)
            {
                factorial*=itt;
                itt-=1;
            }*/
        cout<<"Factorial of " << num << " is : " << factorial << endl;
        }
    }

};
int main()
{
    ABC ob;
    ob.input();
    ob.output();
    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";
    return 0;
}
