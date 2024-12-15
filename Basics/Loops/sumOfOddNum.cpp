#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}
