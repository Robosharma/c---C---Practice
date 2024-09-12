#include <iostream>
#include <conio.h>
using namespace std;

class Auditorium {
    private:
        static int totalPeople;
        int personID;

    public:
        void enter() {
            totalPeople++;
            personID = totalPeople;
        }

        void displayTotal() {
            cout << "Person ID: " << personID << endl;
            cout << "Total people entered: " << totalPeople << endl;
        }
};

int Auditorium::totalPeople = 0;

int main() {

    Auditorium person1, person2, person3;

    person1.enter();
    person1.displayTotal();

    person2.enter();
    person2.displayTotal();

    person3.enter();
    person3.displayTotal();

    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";

    getch();
    return 0;
}
