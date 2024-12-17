#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int nCr(int n, int r)
{
    int fact_n = fact(n);
    int fact_r = fact(r);
    int nmr = fact(n - r);
    int bi_coeff = fact_n / (fact_r * nmr);

    return bi_coeff;
}

int main()
{
    cout << nCr(8, 2) << endl;
}