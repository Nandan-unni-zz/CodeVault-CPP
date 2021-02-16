#include <iostream>
using namespace std;

class Celsius
{
    float temp;

public:
    void input()
    {
        cout << "Enter temperature (in celsius) : ";
        cin >> temp;
    }
    void output()
    {
        cout << "\nTemperature in celsius : " << temp;
    }
    void toFarenheit()
    {
        float f_temp;
        f_temp = (temp * 9 / 5) + 32;
        cout << "\nTemperature in farenheit : " << f_temp << endl;
    }
};

int main()
{
    Celsius c;
    c.input();
    c.output();
    c.toFarenheit();
    return 0;
}
