#include <iostream>
#include <array>
using namespace std;

int main()
{

    // Write C++ code here
    // int array[5]={1,2,3,4,5}

    // array in stl"/"
    array<int, 4> a = {1, 2, 3, 4}; // creating the stl array named a[]
    int size = a.size();
    cout << size << endl; // printing the size of the stl arrray by .size()

    // taking input in stl array
    // for(int i=0;i<size;i++){
    //     cin>>a[i];
    // }

    cout << endl;
    // printing the element of an array of stl array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at index (2): " << a.at(1) << endl;
    cout << "Is array empty or not: " << a.empty() << endl; // return true -1 false -0
    cout << "First element: " << a.front() << endl;         // first element it will print
    cout << "last element: " << a.back() << endl;           // it will print last element

    return 0;
}