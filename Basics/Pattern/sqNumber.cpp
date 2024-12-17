#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    // Alphabets pattern (ABC)

    for (int i = 1; i <= num; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= num; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    cout << endl;

    char ch = 'A';
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    cout << endl;

    // Number patterns (123)
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Continious number patterns
    int n = 1;
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {
            cout << n << " ";
            n += 1;
        }
        cout << endl;
    }

    cout << endl;

    //
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
