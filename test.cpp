#include <iostream>
using namespace std;
// void pattern1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// n=4
// * * * *
// * * * *
// * * * *
// * * * *

// void pattern2(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// n=3
// *
// * *
// * * *

// void pattern3(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// n=4
// * * * *
// * * *
// * *
// *

void pattern4(int n)
{
    for (int row = 0; row < n; row++)
    {

        // for printing spaces
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        // for printing star
        for (int star = 0; star < (2 * row) + 1; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern4(n);

    return 0;
}