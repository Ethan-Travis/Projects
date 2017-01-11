#include <iostream>
using namespace std;

double calculator()
{
    double a,b;
    char op;
    double result;

    for(int i = 0; i < 30; i++)
        cout << endl;

    cout << "Welcome to the calculator!" << endl;


    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the operator: ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> b;

    if(op == '+')
    {
        result = a + b;
    }
    else if(op == '-')
    {
        result = a - b;
    }
    else if(op == '*')
    {
        result = a * b;
    }
    else if (op == '/')
    {
        result = a / b;
    }
    else
    {
        cout << "Invalid Operator" << endl;
        return 0;
    }

    cout << a << op << b << "=" << result << endl;

    return result;

}

int main()
{
    char doQuit;

    do
    {
        calculator();
        cout << "Q to quit, or anything else to continue" << endl;
        cin >> doQuit;
    } while(doQuit != 'Q')

    ;cout << "Goodbye!" << endl;

    return 0;
}
