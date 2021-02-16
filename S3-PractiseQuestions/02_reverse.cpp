#include <iostream>
using namespace std;

int main()
{
    int n, n_cpy, n_rev = 0, rem;
    cout << "Enter a number : ";
    cin >> n;
    n_cpy = n;
    while (n_cpy != 0)
    {
        rem = n_cpy % 10;
        n_rev = (n_rev * 10) + rem;
        n_cpy = n_cpy / 10;
    }
    cout << "Reversed number : " << n_rev;
    return 0;
}
