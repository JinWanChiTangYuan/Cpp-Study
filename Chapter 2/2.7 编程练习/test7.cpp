#include<iostream>

using namespace std;

void func(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}

int main()
{
    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;
    cout << "Enter the number of minutes: ";
    int minute;
    cin >> minute;
    func(hour, minute);

    return 0;
}