#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize date
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Member function to display date in DD/MM/YYYY format
    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }

    // Member function to subtract an integer from date object
    void subtractDays(int days) {
        day -= days;
        if (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day += daysInMonth(month, year);
        }
    }

    // Member function to subtract one date from another
    int subtractDates(const Date& other) {
        int totalDays1 = day + month * 30 + year * 365;
        int totalDays2 = other.day + other.month * 30 + other.year * 365;
        return abs(totalDays1 - totalDays2);
    }

    // Helper function to calculate days in a month
    int daysInMonth(int m, int y) {
        if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
                return 29;
            else
                return 28;
        } else if (m == 4 || m == 6 || m == 9 || m == 11)
            return 30;
        else
            return 31;
    }
};

int main() {
    Date d1(25, 12, 2022);
    Date d2(15, 10, 2021);

    cout << "Date 1: ";
    d1.displayDate();

    cout << "Subtracting 5 days from Date 1: ";
    d1.subtractDays(5);
    d1.displayDate();

    cout << "Date 2: ";
    d2.displayDate();

    cout << "Difference between Date 1 and Date 2: " << d1.subtractDates(d2) << " days" << endl;
    cout << "kamal kishore pandey \nEnroll number 0313203123 \nBranch IT 1 sem 3";

    return 0;
}