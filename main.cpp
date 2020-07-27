//All include tags
#include <iostream>
#include <string>
#include <cmath>

//All using tags
using std::cout;
using std::endl;
using std::string;

int main()
{
    long long factorial;
    factorial = 0;
    int count = 0;
    cout << "Starting number: " << factorial << endl;
    long long factorial_old;
    for (long long i = 0; i < 8000; i++)
    {
        factorial_old = factorial;
        cout << "Big iteration: " << factorial_old << " started" << endl;
        for (int i = factorial - 1; i > 0; i--)
        {
            factorial *= i;
            cout << "Big iteration: " << factorial_old << ". Iteration: " << count << ". Multiplier: " << i << ". Number: " << factorial << endl;
            count++;
        }
        cout << "Big iteration: " << factorial_old << " ended" << endl;
        factorial = factorial_old + 1;
        count = 0;
    }

    return EXIT_SUCCESS;
}