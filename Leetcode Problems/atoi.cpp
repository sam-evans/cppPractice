#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int myAtoi(string s) {
        char ans[s.length() + 1];
        return(atoi(strcpy(ans, s.c_str())));
        
        
    }
};


int main(){
    Solution obj1;
    //program handles 32bit overflow by capping at -2^31 - 2^31
    cout << obj1.myAtoi("-91283472332");

    return 0;
}
