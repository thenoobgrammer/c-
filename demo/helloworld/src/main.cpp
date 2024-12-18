#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class User
{
public:
    string id;
    string firstName;
    string lastName;

    string GetFullname();

    User(string firstName, string lastName)
    {
        id = "4324dfmf9013248";
        this->firstName = firstName;
        this->lastName = lastName;
    }
    ~User()
    {
        cout << "Destructor executed\n";
    }
};

string User::GetFullname()
{
    return firstName + " " + lastName;
}

int main()
{
    User user_1("Tony", "Hakim");

    cout << user_1.GetFullname() + "\n";

    return 0;
}
