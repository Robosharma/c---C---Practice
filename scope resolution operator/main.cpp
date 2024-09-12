#include <iostream>
#include <conio.h>
using namespace std;

class Example {
    private:
        int value;

    public:
        void setValue(int val) {
            value = val;
        }

        void displayValue() {
            cout << "Value: " << value << endl;
        }
};

int value = 100;

int main() {

    Example obj;

    obj.setValue(50);
    obj.displayValue();

    cout << "Global value: " << ::value << endl;

    int value = 200;
    cout << "Local value: " << value << endl;
    cout << "Global value using scope resolution operator: " << ::value << endl;

    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";

    getch();
    return 0;
}
