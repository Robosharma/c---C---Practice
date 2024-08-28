#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string hobby;
};

int main() {
    Student students[5] = {
        {"Aman Singh", 1, "Cricket"},
        {"Aman", 2, "Chess"},
        {"Kamal", 3, "Football"},
        {"Mukesh", 4, "Cricket"},
        {"Vikas", 3, "Table tennis"}
    };

    cout << setw(20) << left << "Name"
         << setw(10) << left << "Roll No"
         << setw(10) << left << "Hobby"
         << endl;

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << setw(20) << left << students[i].name
             << setw(10) << left << students[i].rollNo
             << setw(10) << left << students[i].hobby
             << endl;
    }

    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";
    return 0;
}