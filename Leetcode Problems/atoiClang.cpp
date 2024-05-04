#include <iostream>
// Leetcode question link: https://leetcode.com/problems/string-to-integer-atoi
//accepted with CLANG 17 compiler
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0; // i=char step counter; int 16-32 bits
        int sign=1;
        long ans=0; // long 64 bit length
        while (i<s.length() && s[i]==' ')
            i++;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if (s[i]=='+'){
            i++;
        }
        while (i<s.length()){
            if(s[i]>='0' && s[i]<='9') {
                ans = ans*10+(s[i]-'0');
                if(ans>INT_MAX && sign==-1){
                    return INT_MIN;
                }
                else if(ans>INT_MAX && sign==1){
                    return INT_MAX;
                }
                i++;
            }
            else
                return ans*sign;
        }
        return (ans*sign);
        

        
    }
};



int main(){
    Solution obj1;
    //program handles 32bit overflow by capping at -2^31 - 2^31
    cout << obj1.myAtoi("-91283472332");
    return 0;
}