#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class BmiMetric {
public:
    int weight_in_kg_;
    float height_in_meters;
    float bmi_metric;
    string status;
    void calculate();
private:
    void setStatus();
};

int main() {
    BmiMetric person;
    cout << "Please enter weight in kilograms: ";
    cin >> person.weight_in_kg_;
    cout << "Please enter height in meters: ";
    cin >> person.height_in_meters;
    person.calculate();
    std::cout << std::setprecision(2) << std::fixed;
    cout << "BMI is: " << person.bmi_metric << ", Status is " << person.status << endl;
}

void BmiMetric::calculate() {
    bmi_metric = weight_in_kg_ / (height_in_meters * height_in_meters);
    setStatus();
}

void BmiMetric::setStatus() {
    if (bmi_metric < 18.5) {
        status = "Underweight";
    } else if (18.5 <= bmi_metric && bmi_metric <= 24.9) {
        status = "Normal";
    } else if (25.0 <= bmi_metric && bmi_metric <= 29.9) {
        status = "Overweight";
    } else if (30.0 <= bmi_metric) {
        status = "Obese";
    }
}