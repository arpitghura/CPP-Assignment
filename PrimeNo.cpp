#include <iostream>
using namespace std;

int main()
{
    int num, n_factor = 0;
    cout << "Enter Number to check whether it is Prime or not : ";
    cin >> num;

    //Calculating Number of Factors
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            n_factor++;
        }
    }

    //Logic of No. of Factors
    //since for the prime number, there is only 2 factors
    if (n_factor == 2)
    {
        cout << num << " is a Prime Number";
    }
    else
    {
        cout << num << " is NOT a Prime Number";
    }
    return 0;
} 