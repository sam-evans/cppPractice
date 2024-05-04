#include <iostream>
#include <unordered_map>

using namespace std;


class Solution{
public:

    int RomanToInt(string s){
        unordered_map<char, int> m;
        m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},

        };

        int ans = 0;
       
        for(int i=0; i<s.length(); i++){
            if(m[s[i]]<m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }
        return ans;

        }

};

int main(){
    Solution obj;
    string s = "LVIII"; //Output 58
    cout << "Answer: " << obj.RomanToInt(s) << endl;

    return 0;
}