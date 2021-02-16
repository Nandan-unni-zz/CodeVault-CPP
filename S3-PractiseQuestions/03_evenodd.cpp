#include <iostream>
using namespace std;

int main()
{
    int set[20], n, i, even_sum = 0, odd_sum = 0;
    cout << "Enter no of elements : ";
    cin >> n;
    cout << "Enter the " << n << " elements : \n";
    for (i = 0; i < n; i++)
    {
        cin >> set[i];
        if (set[i] % 2 == 0)
            even_sum += set[i];
        else
            odd_sum += set[i];
    }
    cout << "Sum of even numbers : " << even_sum;
    cout << "\nSum of odd numbers : " << odd_sum;
    return 0;
}
