#include<iostream>

using namespace std;

int main()
{
    const int foot_to_inch = 12;
    int height;
    cout << "Please enter an integer in inch: ___\b\b\b";
    cin >> height;
    cout << "Your height is " << height / foot_to_inch << " foot and "
        << height % foot_to_inch << " inch(s)." << endl;

    return 0;
}