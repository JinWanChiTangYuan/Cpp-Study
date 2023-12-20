#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the world's population: ";
    long long world_population;
    cin >> world_population;
    cout << "Enter the population of the US: ";
    long long us_population;
    cin >> us_population;
    float percent = (float)us_population / (float)world_population * 100;
    cout << "The population of the US is " << percent << "% of the world population." << endl;

    return 0;
}