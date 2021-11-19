#include <iostream>
using namespace std;

void input(friendfunc);
class friendfunc
{
    string TeacherName, stuName;
    int rollno;
    friend void input(friendfunc d);

public:
    void getdetails();
};

void input(friendfunc d)
{
    int roll = d.rollno;
    string stu = d.stuName;
    string Teacher = d.TeacherName;
}
// class ver :public friendfunc
// {
// public:
//     void verify();
//     {
//         cout << "verify";
//     }
// };

void friendfunc ::getdetails()
{
    cout << "rollno = " << rollno
         << "\nstuName = " << stuName
         << "\nTeacherName = " << TeacherName;
}

int main()
{
    friendfunc f;
    f.getdetails();
}