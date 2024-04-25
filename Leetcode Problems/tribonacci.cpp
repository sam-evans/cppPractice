#include <iostream>
/*
Leetcode problem link: https://leetcode.com/problems/n-th-tribonacci-number/
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
first 3 (T0-T2) sequence defined as 0,1,1
t3 = 2
t4 = t(4-1) + t(4-2) +t(4-3) = 2 + 1 + 1 = 4
*/
using namespace std;
class Solution{

public:
   int tribonacci(int n){
    // base case for n=0 -> n=2
    if (n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    // Since the tribonacci is the sum of the last 3 in the sequence, keep track of last 3 numbers instead of all for efficency starting with n=3
    // Initalize the first 3 positive numbers of the sequence -- 1,1,2 and set our current base case return to the result of n=3 or T3
    int first=1, second=first, third=2,current=third;
    for (int i=3; i<n; i++){
        current = first + second + third;
        first = second;
        second = third;
        third = current;
    }
    return current;
   }


};

int main(){
    Solution obj;
    int n = 10;
    cout << "Answer" << " " << obj.tribonacci(n) << endl;
    return 0;
}

