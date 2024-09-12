#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Serial {
    private:
        int serialCode;
        char title[20];
        float duration;
        int noOfEpisodes;

    public:
        Serial() {
            duration = 30;
            noOfEpisodes = 10;
        }

        void newSerial() {
            cout << "Enter Serial Code: ";
            cin >> serialCode;
            cout << "Enter Title: ";
            cin.ignore();
            cin.getline(title, 20);
        }

        void otherEntries(float dur, int episodes) {
            duration = dur;
            noOfEpisodes = episodes;
        }

        void dispData() {
            cout << "Serial Code: " << serialCode << endl;
            cout << "Title: " << title << endl;
            cout << "Duration: " << duration << " minutes" << endl;
            cout << "Number of Episodes: " << noOfEpisodes << endl;
        }
};

int main() {

    Serial s1;
    
    s1.newSerial();
    s1.otherEntries(45.5, 20);
    s1.dispData();

    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";

    getch();
    return 0;
}
