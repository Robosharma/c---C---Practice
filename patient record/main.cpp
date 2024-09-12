#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {}
    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

class Patient {
private:
    string name;
    Date admissionDate;
    string disease;
    Date dischargeDate;
public:
    void enterInfo() {
        cout << "Enter patient name: ";
        cin >> name;
        cout << "Enter admission date (dd mm yyyy): ";
        int day, month, year;
        cin >> day >> month >> year;
        admissionDate = Date(day, month, year);
        cout << "Enter disease: ";
        cin >> disease;
        cout << "Enter discharge date (dd mm yyyy): ";
        cin >> day >> month >> year;
        dischargeDate = Date(day, month, year);
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Admission Date: ";
        admissionDate.display();
        cout << endl;
        cout << "Disease: " << disease << endl;
        cout << "Discharge Date: ";
        dischargeDate.display();
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;

    Patient* patients = new Patient[n];

    for (int i = 0; i < n; i++) {
        patients[i].enterInfo();
    }

    cout << "List of patients in database:" << endl;
    for (int i = 0; i < n; i++) {
        patients[i].displayInfo();
        cout << endl;
    }

    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";

    return 0;
}