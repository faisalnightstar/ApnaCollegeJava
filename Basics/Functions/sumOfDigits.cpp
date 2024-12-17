#include <iostream>
using namespace std;

int sum(int n)
{
    int digitSum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10; // Modify the original n
        digitSum += lastDigit;
    }
    return digitSum;
}

int main()
{

    cout << "sum: " << sum(143) << endl;

    return 0;
}