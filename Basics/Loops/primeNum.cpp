#include <iostream>
using namespace std;

int main()
{
    int num = 17;
    bool isPrime = true;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Non Prime" << endl;
    }

    return 0;
}