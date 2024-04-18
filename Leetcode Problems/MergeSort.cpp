#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{

public:
    void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n){
        for(int i =0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
        print(nums1);
    }

    void print(vector<int> v){
        for (int i =0; i< v.size(); i++){
            cout << v[i] << " ";
        }
    }
};

int main(){
    Solution obj;
    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {2,5,6};
    int m = 3;
    int n =3;
    obj.merge(v1,m,v2,n);
}