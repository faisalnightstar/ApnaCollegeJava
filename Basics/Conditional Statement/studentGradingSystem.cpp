// WAP to grade the student
// mark >= 90 - Grade A

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade: B" << endl;
    }
    else
    {
        cout << "Grade: C" << endl;
    }

    return 0;
}