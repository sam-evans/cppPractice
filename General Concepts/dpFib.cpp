#include <iostream>
#include <chrono>
using namespace std::chrono;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int fibDP(int n){
    //declare array to store fib numbers
    // add two to off set the first 2 fib 0,1
    int f[n+2];
    int i;

    // declare the 0th and 1st number of fib
    f[0]=0;
    f[1]=1;
    // add the previous 2 numbers stored in memory

    for(i=2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];

}

int fibSpaceOpt(int n){
    int a=0, b=1, c,i;
    if(n==0){
        return a;
    }
    for (i=2; i<= n; i++){
        c = a+b;
        a=b;
        b=c;
    }
    return b;
}

int main(){
    //Recursion
    auto start = high_resolution_clock::now();
    std::cout << fib(40) << std::endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "Recursion in microseconds: "<< duration.count()<< std::endl;

    //Memorization Method
    start = high_resolution_clock::now();
    std::cout << fibDP(40) << std::endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "Memorization in microseconds: "<< duration.count()<< std::endl;
    
    //Space Optimization
    start = high_resolution_clock::now();
    std::cout << fibSpaceOpt(40) << std::endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "Space Optimization in microseconds: "<< duration.count()<< std::endl;

    return 0;
}