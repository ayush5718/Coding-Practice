#include <iostream>
using namespace std;

void add(int n)
{
    int sum = 0;
    int evenTotal = 0;
    int oddTotal = 0;
    while (n > 0)
    {
        int num = n % 10;
        if (num % 2 == 0)
        {

            evenTotal = evenTotal + num;
        }
        else
        {

            oddTotal = oddTotal + num;
        }
        sum = sum + num;
        n = n / 10;
        // cout << n << " ";
    }
    cout << "total even " << evenTotal << endl;
    cout << "total odd " << oddTotal << endl;
    cout << "sum " << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    add(n);

    return 0;
}