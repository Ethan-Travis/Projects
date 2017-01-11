#include <unistd.h>
#include <iostream>
using namespace std;
int main()
{
    for(int k = 0; k < 30; k++)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(i == j)
                {
                    cout << ".";
                }
                else
                {
                    cout << "=";
                }
            }
            cout << endl;
            usleep(1000*50);
        }
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if((9-i) == j)
                {
                    cout << ".";
                }
                else
                {
                    cout << "=";
                }
            }

            cout << endl;
            usleep(1000*50);
        }
    }
    cout << endl;

    return 0;
}
