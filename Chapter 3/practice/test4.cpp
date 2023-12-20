#include<iostream>
using namespace std;

const int DAY_TO_HOUR = 24;
const int HOUR_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main()
{
    cout << "Enter the number of second: ";
    long long second;
    cin >> second;
    int days = second / DAY_TO_HOUR / HOUR_TO_MINUTE / MINUTE_TO_SECOND;
    int hours = (second - days * DAY_TO_HOUR * HOUR_TO_MINUTE * MINUTE_TO_SECOND) / HOUR_TO_MINUTE / MINUTE_TO_SECOND;
    int minutes = second / MINUTE_TO_SECOND - days * DAY_TO_HOUR * HOUR_TO_MINUTE - hours * HOUR_TO_MINUTE;
    int seconds = second - (days * DAY_TO_HOUR * HOUR_TO_MINUTE * MINUTE_TO_SECOND) - (hours * HOUR_TO_MINUTE * MINUTE_TO_SECOND) - (minutes * MINUTE_TO_SECOND);
    cout << second << " seconds = " << days << " days, " << hours << " hours, "
        << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}
