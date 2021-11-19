#include <iostream>
using namespace std;
#define PI 3.1415

//area of circle
float area(float radius)
{
    return (PI * radius * radius);
}

//area of reactangle
float area(float length, float breadth)
{
    return (length * breadth);
}

//area of trapezium
float area(float base1, float base2, float height)
{
    return (((base1 + base2) / 2) * height);
}

int main()
{
    float radius, length, breadth;
    float base1, base2, height;
    float areaa;
    int choice;
    cout << "\n\tFunction Overloading Concept Explanation Program Using Area";
    while (1)
    {
        cout << "\n\n\t===== Area Menu =====";
        cout << "\n\t1. Area of Circle";
        cout << "\n\t2. Area of Rectangle";
        cout << "\n\t3. Area of Trapezium";
        cout << "\n\t4. Exit\n\t";
        cout << "\n\tEnter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\tEnter Radius Of Circle : ";
            cin >> radius;
            areaa = area(radius);
            cout << "\n\t\tThe Area of Circle is " << areaa;
            break;

        case 2:
            cout << "\n\tEnter Length of Rectangle : ";
            cin >> length;
            cout << "\n\tEnter Breadth of Rectangle : ";
            cin >> breadth;
            areaa = area(length, breadth);
            cout << "\n\t\tThe Area of Rectangle is " << areaa;
            break;

        case 3:
            cout << "\n\tEnter Base 1 of Trapezium : ";
            cin >> base1;
            cout << "\n\tEnter Base 2 of Trapezium : ";
            cin >> base2;
            cout << "\n\tEnter Height Of Trapezium : ";
            cin >> height;
            areaa = area(base1, base2, height);
            cout << "\n\t\tThe Area of Trapezium is " << areaa;
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "\n\tYou Entered Wrong Choice!!! Try Again";
        }
    }
}