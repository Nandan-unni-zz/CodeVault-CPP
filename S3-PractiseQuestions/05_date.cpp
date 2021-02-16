#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int dd, mm, yy;
    string date_string;

public:
    void getDate()
    {
        cout << "Enter Day : ";
        cin >> dd;
        cout << "Enter Month : ";
        cin >> mm;
        cout << "Enter Year : ";
        cin >> yy;
    }
    void setDate()
    {
        string months[12] = {"January", "February", "March", "April",
                             "May", "June", "July", "August", "September",
                             "October", "November", "Decemebr"};
        date_string = to_string(dd) + " " + months[mm - 1] + " " + to_string(yy);
    }
    void putDate()
    {
        cout << date_string;
    }
};

int main()
{
    Date date;
    date.getDate();
    date.setDate();
    date.putDate();
    return 0;
}
