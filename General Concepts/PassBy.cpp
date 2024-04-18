#include <iostream>

using namespace std;

void swapByVal(int x){
    x = 10;
}

void swapByRef(int& a){
    a = 10;  
}

void swapByPointer(int* x){
    *x = 10;
}


int main(){
    int x = 5;
    int* y = &x; 

    swapByVal(x);
    cout << "Swap by value: " << x << endl; //value of x does not change

    swapByRef(x);
    cout << "Swap by referance: " << x << endl; 

    swapByPointer(y);
    cout << "Swap by pointer: " << *y << endl;
    
    return 0;
}