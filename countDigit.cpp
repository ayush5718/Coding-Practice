#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    int num = n;
    while (num > 0)
    {

        int digit = num % 10;
        if (n % digit == 0)
        {
            cout << digit << endl;
            count++;
        }
        num = num / 10;
    }

    return count;
}
int main()
{
    int n;
    cin >> n;
    int result = countDigit(n);
    cout << result;

    return 0;
}