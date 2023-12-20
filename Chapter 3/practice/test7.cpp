#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the fuel spent: ";
    double europe_gallons; //100 km cost L
    cin >> europe_gallons;
    double us_gallons = 1 / (europe_gallons / 3.785 / 62.14); //miles per gallon
    cout << us_gallons << "gallons per mile." << endl;

    return 0;
}