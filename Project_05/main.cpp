#include <iostream>
using namespace std;

int global = 10;

void function()
{
    cout << "Global " << global << endl;
}

void function2()
{
    global--;
}

int main()
{
    while(global > 0)
    {
        function();
        function2();
    }

    function2();
    function();

    return 0;
}
