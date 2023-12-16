#include<iostream>

using namespace std;

int func(double value)
{
    return 63240 * value;
}

int main()
{
    cout << "Enter the number of light years: ";
    double value;
    cin >> value;
    cout << value << " light years = " << func(value) << " astronomical units." << endl;

    return 0;
}