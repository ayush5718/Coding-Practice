#include <bits/stdc++.h>
using namespace std;
// simple program that will tell us you are adult or not
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You can vote";
    }
    else if (age >= 0 && age < 18)
    {
        cout << "You can't you are not an adult";
    }
    else
    {
        cout << "enter a valid age";
    }

    return 0;
}