#include <iostream>
#include <vector>
/*
Leetcode problem Link: https://leetcode.com/problems/container-with-most-water/description/
*/
using namespace std;

class Solution {
public:

    int maxArea(vector<int>& height) {
        int start = 0;
        int area=0;
        for(int i=start; i< height.size(); i++){
            for(int j=start+1; j< height.size(); j++){
                if (height[i]>= height[j] && (j-i) * height[j] > area){
                    area = (j-i) * height[j];
                }
                else if (height[i]< height[j]&& (j-i) * height[i] > area){
                    area = (j-i) * height[i];
                }
                
            }
        start++;
        }
        return area;
    }
};

int main(){

    Solution obj;

    vector<int> bucket = {1,0,0,0,0,0,0,2,2};
    cout << "Test 1: "<< obj.maxArea(bucket) << endl;

    bucket = {1,8,6,2,5,4,8,3,7};
    cout << "Test 2: " << obj.maxArea(bucket) << endl;

    bucket = {1,2};
    cout << "Test 3: " << obj.maxArea(bucket) << endl;
    return 0;
}