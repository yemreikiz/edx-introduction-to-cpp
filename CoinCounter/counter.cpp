#include <iostream>
#include <math.h>

#define FLOAT_VALUE_OF_QUARTER 0.25
#define FLOAT_VALUE_OF_DIME 0.10
#define FLOAT_VALUE_OF_NICKEL 0.05
#define FLOAT_VALUE_OF_PENNY 0.01

using namespace std;

class Counter {

public:
    int quarters_;
    int dimes_;
    int nickels_;
    int pennies_;

    float total_float_;
    double whole_part_of_total_;
    double fractional_part_of_total_;

    void FindTotal();
};

int main() {
    Counter counter;
    cout << "Please enter the number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> counter.quarters_;
    
    cout << "# of dimes: ";
    cin >> counter.dimes_;

    cout << "# of nickels: ";
    cin >> counter.nickels_;

    cout << "# of pennies: ";
    cin >> counter.pennies_;

    counter.FindTotal();
    cout << "The total is " << counter.whole_part_of_total_ 
         << " dollars and " << counter.fractional_part_of_total_ << " cents" << endl;

    return 0;
}

void Counter::FindTotal() {
    total_float_ = quarters_ * FLOAT_VALUE_OF_QUARTER
                 + dimes_ * FLOAT_VALUE_OF_DIME
                 + nickels_ * FLOAT_VALUE_OF_NICKEL
                 + pennies_ * FLOAT_VALUE_OF_PENNY;
    fractional_part_of_total_ = modf(total_float_, &whole_part_of_total_);
    fractional_part_of_total_ *= 100; //raise the decimal to whole
}