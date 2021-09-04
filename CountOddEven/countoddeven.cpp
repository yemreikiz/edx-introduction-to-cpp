#include <iostream>

using namespace std;

int main(void) {
    int inputs[4];
    int number_of_odds = 0, number_of_evens = 0;  
    cout << "Please enter 4 positive integers, separated by a space: " << endl;
    for (size_t i = 0; i < 4; i++) {
        cin>>inputs[i];
        if (inputs[i] % 2 == 0) {
            number_of_evens++;
        } else {
            number_of_odds++;
        }
    }
    if (number_of_evens > number_of_odds) {
        cout << "more evens";
    } else if(number_of_evens < number_of_odds) {
        cout << "more odds";
    } else {
        cout << "same number of evens and odds";
    }
}