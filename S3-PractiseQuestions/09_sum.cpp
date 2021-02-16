#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

int sum(int arr[], int n, char mode)
{
    int total = 0;
    if (mode == 'E')
        for (int i = 0; i < n / 2; i += 2)
            total += arr[i];
    else if (mode == 'O')
        for (int i = 1; i < n / 2; i += 2)
            total += arr[i];
    return total;
}

void sum(int arr[], int n, int pos1, int pos2)
{
    int temp;
    if (pos1 < n && pos2 < n)
    {
        temp = arr[pos1];
        arr[pos1] = arr[pos2];
        arr[pos2] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Sum of all elements = " << sum(arr, n);
    cout << "Sum of even elements = " << sum(arr, n, 'E');
    cout << "Sum of odd elements = " << sum(arr, n, 'O');
    sum(arr, n, 0, 1);
    cout << "Swapping values at 0 and 1...\ndone ";
    return 0;
}
