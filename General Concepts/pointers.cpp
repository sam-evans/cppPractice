#include <iostream>
// This program demonstrates printing variables by value and pointer
using namespace std;

int main(){
    int x = 5;
    int* y = &x; //int pointer y = address of x

    cout << x << " " << &x << endl; // x is the value 5, &x is the address where value 5 is in memory
    cout << y << " " << &x << endl; // y holds the address where value 5 is in memory -- y = &x -> this is printing by referance
    cout << *y << " " << x << endl; // *y dereferances the pointer y to get the value 5 -- *y = x
    return 0;
}