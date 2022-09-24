#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    cin >> name;

    int numOfGrades = 0;
    int grade;
    double sum = 0;

    while (cin >> grade)
    {
        sum += grade;
        numOfGrades++;
    }

    cout << setfill('.') << fixed << setprecision(2);
    cout << left << setw(30) << name << "|" << right << setw(30) << sum / numOfGrades << "\n";
}
