#include<bits/stdc++.h>
using namespace std;
int sortColors(vector<int>&nums) {
    int i = 0;
    int j = 0;
    int k = nums.size() - 1;
    while(i <= k) {
        if(nums[i] == 0) {
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[i] == 1) {
            swap(nums[i],nums[j]);
            i++;
        }
        else {
            swap(nums[i],nums[k]);
            k--;
        }
    }
}

int main() {
    vector<int>nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(auto j : nums) {
        cout << j << endl;
    }
}