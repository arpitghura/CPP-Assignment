#include<iostream>
using namespace std;

void swapbythirdvar(int n1,int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<"The Swapped Values of first and second number are ";
    cout<<n1<<" and "<<n2;
}

int main(){
    int num1,num2,swap;
    cout<<"Enter first Number : ";
    cin>>num1;
    cout<<"Enter second Number : ";
    cin>>num2;

    //By Using Third Variable 
    swapbythirdvar(num1,num2);

return 0;
}