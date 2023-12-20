#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the miles: ";
    double miles;
    cin >> miles;
    cout << "Enter the gallons: ";
    double gallons;
    cin >> gallons;
    cout << "One mile cost " << miles / gallons << " gallons." << endl;

    return 0;
}