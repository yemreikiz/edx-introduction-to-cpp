#include <iostream>

using namespace std;

int main(void) {
    int input, current = 1, previous = 0, temp = 0;
    cout << "Please enter a positive integer greater than 1: ";
    cin >> input;
    for (size_t i = 1; i <= input; i++) {
        cout << current << endl;
        temp = current;
        current += previous;
        previous = temp;
    }
}

