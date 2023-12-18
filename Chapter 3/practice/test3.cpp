#include<iostream>
using namespace std;

const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main()
{
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    float degree;
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    float minute;
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    float second;
    cin >> second;
    float total_degree = degree + minute / DEGREE_TO_MINUTE + second / MINUTE_TO_SECOND / DEGREE_TO_MINUTE;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " 
        << total_degree << " degrees" << endl;

    return 0;
}