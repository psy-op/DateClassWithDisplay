// DateClassWithDisplay
// TITLE: Date Class with Display Function

#include <iostream>
#include <string>
using namespace std;

// Date class with private attributes and public methods
class date {
private:
    int month;
    int day;
    int year;

public:
    // Constructor with default date
    date() {
        setDate(1, 1, 2000);
    }

    // Constructor with specified date
    date(int m1, int d1, int y1) {
        setDate(m1, d1, y1);
    }

    // Set date method
    void setDate(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    // Set month method
    void setMonth(int m) {
        month = m;
    }

    // Set day method
    void setDay(int d) {
        day = d;
    }

    // Set year method
    void setYear(int y) {
        year = y;
    }

    // Display date method
    void displayDate() {
        switch (month) {
        case 1:
            cout << "Jan,";
            break;
        case 2:
            cout << "Feb,";
            break;
        case 3:
            cout << "Mar,";
            break;
        case 4:
            cout << "Apr,";
            break;
        case 5:
            cout << "May,";
            break;
        case 6:
            cout << "Jun,";
            break;
        case 7:
            cout << "Jul,";
            break;
        case 8:
            cout << "Aug,";
            break;
        case 9:
            cout << "Sep,";
            break;
        case 10:
            cout << "Oct,";
            break;
        case 11:
            cout << "Nov,";
            break;
        case 12:
            cout << "Dec,";
            break;
        }
        cout << day << "," << year << endl;
    }
};

// Main function that creates instances of the date class
// Sets different dates and displays them
int main() {
    date d1, d2(3, 20, 2021);
    d1.displayDate();
    d2.displayDate();

    d1.setDate(2, 2, 2002);
    d2.setMonth(5);

    d1.displayDate();
    d2.displayDate();

    return 0;
}
