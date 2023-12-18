#include<iostream>
using namespace std;

const int foot_to_inch = 12;
const double inch_to_meter = 0.0254;
const double kilogram_to_pound = 2.2;

int main()
{
    int foot, inch, pound;
    cout << "Your height foot is: ";
    cin >> foot;
    cout << "Your height inch is: ";
    cin >> inch;
    cout << "Your weight pound is:";
    cin >> pound;

    int inch_height = foot * foot_to_inch + inch;
    double meter_height = inch_height * inch_to_meter;
    double kilogram_weight = pound / kilogram_to_pound;
    double BMI = kilogram_weight / (meter_height * meter_height);
    cout << "Your BMI is: " << BMI << endl;

    return 0;
}