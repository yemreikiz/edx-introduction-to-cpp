#include <iostream>
#include <math.h>

#define INT_VALUE_OF_QUARTER 25
#define INT_VALUE_OF_DIME 10
#define INT_VALUE_OF_NICKEL 5
#define INT_VALUE_OF_PENNY 1
#define NUMBER_OF_QUARTERS_IN_A_DOLLAR 4
using namespace std;

class Converter {

public:
    int quarters_;
    int dimes_;
    int nickels_;
    int pennies_;

    int dollars_;
    int cents_;

    void FindMinimumNumberOfCoins();
};

int main() {
    Converter converter;
    cout << "Please enter the amount of money to convert:" << endl;
    cout << "# of dollars: ";
    cin >> converter.dollars_;
    
    cout << "# of cents: ";
    cin >> converter.cents_;

    converter.FindMinimumNumberOfCoins();
    cout << "The coins are " 
         << converter.quarters_ << " quarters, "
         << converter.dimes_ << " dimes, "
         << converter.nickels_ << " nickels and "
         << converter.pennies_ << " pennies"
         << endl;

    return 0;
}

void Converter::FindMinimumNumberOfCoins() {
    
    quarters_ = dollars_ * NUMBER_OF_QUARTERS_IN_A_DOLLAR;
    quarters_ += cents_ / INT_VALUE_OF_QUARTER;
    int remainder = cents_ % INT_VALUE_OF_QUARTER;
    dimes_ = remainder / INT_VALUE_OF_DIME;
    remainder = remainder % INT_VALUE_OF_DIME;
    nickels_ = remainder / INT_VALUE_OF_NICKEL;
    remainder = remainder % INT_VALUE_OF_NICKEL;
    pennies_ = remainder / INT_VALUE_OF_PENNY;
    remainder = remainder % INT_VALUE_OF_PENNY;      
}