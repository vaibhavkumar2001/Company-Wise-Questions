#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;;
        int maxSum = INT_MIN;
        for(int i = 0;i < n;i++) {
            sum += nums[i];
            maxSum = max(sum,maxSum);
            if(sum < 0) {
                sum = 0;
            }
        }
        return maxSum;
}
int main() {
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "The Maximum subarray is " << maxSubArray(nums) << endl;
}