#include <iostream>
using namespace std;

class Calc
{
private:
    float a, b, result;

public:
    void input()
    {
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;
    }
    void output(char op)
    {
        cout << endl
             << a << " " << op << " " << b << " = " << result;
    }
    void add()
    {
        result = a + b;
    }
    void subtract()
    {
        result = a - b;
    }
    void multiply()
    {
        result = a * b;
    }
    void divide()
    {
        if (b == 0)
        {
            cout << "\nDivision by 0 is not possible";
            result = 0;
        }
        else
            result = a / b;
    }
};

int main()
{
    char op;
    Calc calculator;
    calculator.input();
    cout << "Enter the operator : ";
    cin >> op;
    switch (op)
    {
    case '+':
        calculator.add();
        break;

    case '-':
        calculator.subtract();
        break;

    case '*':
    case 'X':
    case 'x':
        calculator.multiply();
        break;

    case '/':
        calculator.divide();
        break;

    default:
        cout << "\nInvalid Operator\n";
        break;
    }
    calculator.output(op);
    return 0;
}
