#include<iostream>

using namespace std;

int func(int value)
{
    return value * 1.8 + 32;
}

int main()
{
    cout << "Please enter a Celsius value: ";
    int value;
    cin >> value;
    cout << value <<" degrees Celsius is " << func(value) << " degrees Fahrenheit." << endl;

    return 0;
}