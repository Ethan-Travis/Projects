#include <iostream>
using namespace std;

int global = 10;

void function(int local)
{
    local = 5-local;
    cout << "Local " << local << endl;
}

void function2()
{
    global--;
}

int main()
{
    while(global > 0)
    {
        function(global);
        function2();
    }

    function2();
    function(global);

    return 0;
}
