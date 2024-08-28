#include<iostream>
using namespace std;

class DATE
{
    public:
    int date,month,year;

    void input()
    {
        cout << "Enter the starting date : ";
        cin >> date;
        cout << "Enter the starting month : ";
        cin >> month;
        cout << "Enter the starting year : ";
        cin >> year;
    }

    void SubtractDates()
    {
        int date1,month1,year1;
        cout << "Enter the end date : ";
        cin >> date1;
        cout << "Enter the end month : ";
        cin >> month1;
        cout << "Enter the end year : ";
        cin >> year1;
    }

    void display()
    {
        cout << "Since the last date" << endl;
    }
};
int main()
{
    
    return 0;
}