// vector is dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    cout << "capicity-1 ->" << v.capacity() << endl;
    v.push_back(2);
    cout << "capicity-2 ->" << v.capacity() << endl;
    v.push_back(3);
    cout << "capicity-3 ->" << v.capacity() << endl;
    v.push_back(4);
    cout << "capicity-4 ->" << v.capacity() << endl;
    v.push_back(5);
    cout << "capicity-5 ->" << v.capacity() << endl;

    // the .size() tells us how many element are there inside the vector on the other hand capicity tells us how much space assigned for an element
    cout << "size->" << v.size() << endl;

    vector<int> a;
    int i = 4;
    while (i < 4)
    {
        /* code */
        cin >> a[i];
        i++;
    }

    // it will print the all the element inside the vector
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}