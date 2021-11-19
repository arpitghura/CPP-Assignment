#include<iostream>
using namespace std;

void tablen(int num){
    int pro;
    for (int i = 1; i <= 10; i++)
    { 
       pro = num * i;
       cout<<num<<" * "<<i<<" = "<<pro<<endl; 
    }
    
}
int main(){
    int num;
    cout<<"Enter Number to Print the table :";
    cin>>num;
    
    tablen(num);
return 0;
}