#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "Enter the grade: "<< endl;
    cin >> grade;

    switch (grade)
    {
        case 'a':
        case 'A': cout << "Excellent\n";
        break;
        case 'b':
        case 'B': cout << "Good\n";
        break;
        case 'c':
        case 'C': cout << "Satisfactory\n";
        break;
        case 'd':
        case 'D': cout << "Poor\n";
        break;
        case 'f':
        case 'F': cout << "Succ\n";
        break;
        default: cout << "INVALID\n";
        break;
    }
    return 0;
}
