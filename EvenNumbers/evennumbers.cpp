#include <iostream>

using namespace std;

int main(void) {
    int input;
    int current_even_number = 2;
    cout << "Please enter a positive integer: ";
    cin >> input;
    for (size_t i = 1; i <= input; i++) {
        cout << current_even_number << endl;
        current_even_number += 2;
    }
}
