#include <iostream>
#include <iomanip>

#define POUND_TO_KG 0.453592
#define INCH_TO_METER 0.0254

using namespace std;

class BmiImperial {
public:
    float weight_in_pounds_;
    float height_in_inches_;
    float weight_in_kg_;
    float height_in_meters_;
    float bmi_metric_;
    void calculate();
};

int main() {
    BmiImperial person;
    cout << "Please enter weight in pounds: ";
    cin >> person.weight_in_pounds_;
    cout << "Please enter height in inches: ";
    cin >> person.height_in_inches_;
    person.calculate();
    std::cout << std::setprecision(2) << std::fixed;
    cout << "BMI is: " << person.bmi_metric_ << endl;
}

void BmiImperial::calculate() {
    weight_in_kg_ = weight_in_pounds_ * POUND_TO_KG;
    height_in_meters_ = height_in_inches_ * INCH_TO_METER;
    bmi_metric_ = weight_in_kg_ / (height_in_meters_ * height_in_meters_);
}