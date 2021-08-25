#include <iostream>
#include <iomanip>

using namespace std;

class BmiMetric {
public:
    int weight_in_kg_;
    float height_in_meters;
    float bmi_metric;
    void calculate();
};

int main() {
    BmiMetric person;
    cout << "Please enter weight in kilograms: ";
    cin >> person.weight_in_kg_;
    cout << "Please enter height in meters: ";
    cin >> person.height_in_meters;
    person.calculate();
    std::cout << std::setprecision(2) << std::fixed;
    cout << "BMI is: " << person.bmi_metric << endl;
}

void BmiMetric::calculate() {
    bmi_metric = weight_in_kg_ / (height_in_meters * height_in_meters);
}