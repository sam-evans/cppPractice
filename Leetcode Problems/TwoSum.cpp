#include <iostream>
#include <vector>

using namespace std;
/*
Leetcode TwoSum problem link: Leetcode.com/problems/two-sum

Given an integer vector and a target; return the indexes of integers where added together result in the sum
Ex. Vector<int> example = <1,2,3,4,5> target = 3; Answer <0,1> because example[0] + example[1] == target
*/
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
       // do code
       for (int i=0; i < nums.size(); i++){
        for(int j=0; j<i; j++){
            if (nums[i] + nums[j] == target){
                vector<int> ans = {i,j};
                return ans;
            }
        }
       }
       return {};
    }

};

int main(){
    Solution obj;
    vector<int> nums = {1,2,3,4};
    int target = 3;
    cout << "Answer: ";
    vector<int> answer = obj.twoSum(nums, target);

    return 0;
}