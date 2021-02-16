#include <iostream>
using namespace std;

float simple_interest(int p, int t, float r = 8.5)
{
    return p * (1 + r * t);
}

bool isnumber(string str)
{
    bool is_number = true;
    for (int i = 0; i < str.length(); i++)
        if (!isdigit(str.at(i)) && str.at(i) != '.')
            is_number = false;
    return is_number;
}

int main()
{
    int p, t;
    float si, rate;
    string r;
    cout << "Enter Amount : ";
    cin >> p;
    cout << "Enter rate (enter any char to give default value) : ";
    cin >> r;
    cout << "Enter time period : ";
    cin >> t;
    cout << "\nThe simple interest will be ";
    if (isnumber(r))
    {
        rate = stof(r);
        cout << simple_interest(p, t, rate);
    }
    else
        cout << simple_interest(p, t);
    return 0;
}
