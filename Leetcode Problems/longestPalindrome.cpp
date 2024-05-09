#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        char arr[s.length() +1];
        int length = 0;
        string res = "";
        int start=0;
        strcpy(arr, s.c_str()); // convert string to char array
        for(int i=start; i<s.length(); i++){
            vector<char> curr; // current potential palindrome
            for(int j=start; j<s.length(); j++){
                curr.push_back(arr[j]);
                if (isPalindrone(curr)==true && curr.size() > length){ // add max found palindrome to result
                    res = "";
                    length = curr.size();
                    for(char c: curr){
                            res.push_back(c); // make res return string
                    }
                }
            }
        start++;
        }
    return res;
}

    //check if reverse of curr is == to curr meaning palinadrome is found
    bool isPalindrone(vector<char> curr){
        vector<char> revCurr = curr;
        std::reverse(revCurr.begin(), revCurr.end());
        if(curr == revCurr){
            return true;
        }
        else{
            return false;
        }

    }
};


int main(){
    Solution obj;
    string s ="abba";
    cout << "Test 1: " <<  obj.longestPalindrome(s) << endl;
    s = "a";
    cout << "Test 2: " << obj.longestPalindrome(s) << endl;
    s = "mwwfjysbkebpdjyabcfkgprtxpwvhglddhmvaprcvrnuxifcrjpdgnktvmggmguiiquibmtviwjsqwtchkqgxqwljouunurcdtoeygdqmijdympcamawnlzsxucbpqtuwkjfqnzvvvigifyvymfhtppqamlgjozvebygkxawcbwtouaankxsjrteeijpuzbsfsjwxejtfrancoekxgfyangvzjkdskhssdjvkvdskjtiybqgsmpxmghvvicmjxqtxdowkjhmlnfcpbtwvtmjhnzntxyfxyinmqzivxkwigkondghzmbioelmepgfttczskvqfejfiibxjcuyevvpawybcvvxtxycrfbcnpvkzryrqujqaqhoagdmofgdcbhvlwgwmsmhomknbanvntspvvhvccedzzngdywuccxrnzbtchisdwsrfdqpcwknwqvalczznilujdrlevncdsyuhnpmheukottewtkuzhookcsvctsqwwdvfjxifpfsqxpmpwospndozcdbfhselfdltmpujlnhfzjcgnbgprvopxklmlgrlbldzpnkhvhkybpgtzipzotrgzkdrqntnuaqyaplcybqyvidwcfcuxinchretgvfaepmgilbrtxgqoddzyjmmupkjqcypdpfhpkhitfegickfszermqhkwmffdizeoprmnlzbjcwfnqyvmhtdekmfhqwaftlyydirjnojbrieutjhymfpflsfemkqsoewbojwluqdckmzixwxufrdpqnwvwpbavosnvjqxqbosctttxvsbmqpnolfmapywtpfaotzmyjwnd";
    cout << "Test 3: " << obj.longestPalindrome(s) << endl;
    return 0;
}