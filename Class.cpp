#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class secA
{
    int rollno, sem;
    string Name;
    char sec;
    float CGPA;

public:
    void getDetails();
    void showData();
    bool validate(int, char);
    bool congrats(float);
    void invalid();
};

void secA ::getDetails()
{
    cout << "Enter Your Current Semester(1/2/3/4/5/6/7/8) : ";
    cin >> sem;
    cout << "Enter Your Section (A/B/C/D) : ";
    cin >> sec;
    if (validate(sem, sec))
    {
        cout << "Enter Your Roll No.: ";
        cin >> rollno;
        cout << "Enter Your Name : ";
        fflush(stdin);
        getline(cin, Name);
        cout << "Enter Your First Year CGPA :";
        cin >> CGPA;
    }
    else
    {
        invalid();
    }
}

bool secA ::validate(int sem, char sec)
{
    if (sem == 3 && (sec == 'A' || sec == 'a'))
        return 1;
    else
        return 0;
}

bool secA ::congrats(float CGPA)
{
    if (CGPA >= 7.5 && CGPA <= 10.0)
        return 1;
    else
        return 0;
}

void secA ::showData()
{
    if (validate(sem, sec))
    {
        cout << "\n\nHello " << Name << "!";
        cout << "\nYour Semester : " << sem;
        cout << "\nYour Section : " << sec;
        cout << "\nYour Roll Number : " << rollno;
        cout << "\nYour CGPA : " << CGPA;
        if (congrats(CGPA))
            cout << "\nCongratulations!! for your good CGPA";
    }
}

void secA ::invalid()
{
    cout << "Since You are NOT the student of 3RD SEMESTER Section A,";
    cout << "\nSo you are unable to feed your data.\nThank You!!";
}

int main()
{
    secA newuser;
    newuser.getDetails();
    newuser.showData();

    return 0;
}