#include<iostream>
using namespace std;

class BUS
{
    public:

        int no_of_passengers,Total_bus_capasity=50;

    void intput()
    {
        cout << "Enter number of passengers : ";
        cin >> no_of_passengers;
    }
    void Required_busses()
    {
        cout << "Number of busses required : " << no_of_passengers/Total_bus_capasity;
    }

};

int main()
{
    BUS ob;
    ob.intput();
    ob.Required_busses();
    cout << "\nAMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";

    return 0;
}