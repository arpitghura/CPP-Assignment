#include<iostream>
using namespace std;

class A {
    public:
    int roll;
    void getroll();
};

class B : public A {
    char sec;
    public:
        void verify();
        void print();
};

void A :: getroll(){
    cout<<"Enter Roll No : ";    
    cin>>roll;
}

void B :: verify(){
    if(roll <= 52)
        sec = 'A';
    else if(roll>=53 && roll<=104)
        sec = 'B';
    else if(roll>=105 && roll<=155)
        sec = 'C';
    else if(roll>=156)
        sec = 'D';
}

void B :: print(){
    cout<<"Your Section is "<<sec;
}

int main(){
    B newstu;
    newstu.getroll();
    newstu.verify();
    newstu.print();
return 0;
}
