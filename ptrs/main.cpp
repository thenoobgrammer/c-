#include <iostream>
using namespace std;

int main()
{
    int number = 88;
    int &refNumber = number;

    cout << number << endl;
    cout << refNumber << "\n"
         << endl;

    refNumber = 99;
    cout << refNumber << endl;
    cout << number << "\n"
         << endl;

    int n1 = 88, n2 = 22;
    int *pn1 = &n1;
    *pn1 = 99;            // Deref'in and assigning new value to n1's memory location
    cout << *pn1 << endl; // 99
    cout << n1 << endl;   // 99
    cout << &n1 << endl;  // 0x..A
    cout << pn1 << endl;  // 0x..A
    cout << &pn1 << endl; // 0x..B - We are printing the reference of a reference
}