// ifElseIf1.cpp
// An example of an if/else if statement

#include <iostream>
using namespace std;

int main()
{
    int testScore;
    char grade;

    cout << "Enter your numeric test score: ";
    cin >> testScore;

    if (testScore < 60)
        grade = 'F';
    else if (testScore < 70)
        grade = 'D';
    else if (testScore < 80)
        grade = 'C';
    else if (testScore < 90)
        grade = 'B';
    else if (testScore <= 100)
        grade = 'A';

    cout << "Your grade is " << grade << endl;

    return 0;
}
