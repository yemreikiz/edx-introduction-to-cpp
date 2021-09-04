#include <iostream>
#include <assert.h>

using namespace std;

bool isThisALeapYear(int year);

int main(int argc, char **argv) {
    assert(argv[1]);
    if(isThisALeapYear(atoi(argv[1]))) {
        cout << argv[1] << " was a leap year" << endl;
    } else {
        cout << argv[1] << " was not a leap year" << endl;
    }
}

bool isThisALeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return true;
    }
    return false;
}