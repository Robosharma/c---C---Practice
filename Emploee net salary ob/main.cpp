#include <iostream>
#include <iomanip>
using namespace std;

class EMPLOYEE
{
    public:
    struct employee_details
    {
        int Empno;
        string Ename;
        int basic_salary;
        float net_salary;
    };

    employee_details emp[2];

    void entry_emp_data()
    {
        cout << "Enter employee data.\n\n";
        for(int i=0;i<2;i++)
        {
            cout << "Enter employee Id number : ";
            cin >> emp[i].Empno;
            cout << "Enter employee Name : ";
            cin >> emp[i].Ename;
            cout << "Enter empliyee's Basic Salary : ";
            cin >> emp[i].basic_salary;
            cout << "\n\n";
        }
    }
    void calculate_net_salary()
    {
        int hra = 10;
        int da = 20;
        for(int i=0;i<2;i++)
        {
            emp[i].net_salary = emp[i].basic_salary - ((emp[i].basic_salary*0.1) + (emp[i].basic_salary*0.2));
        }
    }
    void display_empData()
    {
        cout << setw(35) << left << "Employee ID no."
             << setw(20) << left << "Name"
             << setw(20) << left << "Basic salary"
             << setw(40) << left << "Net salary (After diducting HRA and DA)"
             << endl;
        for(int i=0;i<2;i++)
        {
            cout << setw(35) << left << emp[i].Empno
                 << setw(20) << left << emp[i].Ename
                 << setw(20) << left << emp[i].basic_salary
                 << setw(40) << left << emp[i].net_salary
                 << endl;
        }
    }
};

int main()
{
    EMPLOYEE ob;
    ob.entry_emp_data();
    ob.calculate_net_salary();
    ob.display_empData();
    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";
    return 0;
}