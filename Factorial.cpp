#include<iostream>
using namespace std;

//Using Recursion 
int factorial(int num){
    if(num>1){
        return (num*factorial(num-1));  // 5*4*3*2*1
    }
    if(num == 1){
        return 1;
    }
    return 0;
}

int main(){
    int num,factorialn;
    cout<<"Enter Number to Calculate Factorial :";
    cin>>num;
    factorialn = factorial(num);
    cout<<"The Factorial of "<<num<<" is "<<factorialn;
    return 0;
}