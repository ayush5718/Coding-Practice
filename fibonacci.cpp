#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 13
void fibonacci(int n)
{
    int n1 = 0;
    int n2 = 1;
    int nextTerm;
    for (int i = 0; i < n - 1; i++)
    {
        cout << n1 << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    cout << endl;
    cout << n1;
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}