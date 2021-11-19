#include <iostream>
using namespace std;

class sum
{
    int num1, num2;

public:
    sum(); 
    ~sum();
};

sum ::sum()
{
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
}

sum ::~sum()
{
    cout << "\nDestructor Executed!!\n";
}

int main()
{
    sum newsum;
    return 0;
}