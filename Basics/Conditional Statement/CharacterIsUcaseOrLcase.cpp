// WAR to check charater is in upper case or lower casse;

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character: " << endl;
    cin >> ch;

    // if (ch >= 'A' && ch < 'Z')
    // {
    //     cout << "Character is in Uppercase" << endl;
    // }
    // else
    // {
    //     cout << "Character is in Lowercase" << endl;
    // }

    // with ternary operators

    cout << (ch >= 'A' && ch < 'Z' ? "Character is in Uppercase" : "Character is in Lowercase") << endl;

    return 0;
}