#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int element = 0;
        for(int i = 0;i < n;i++) {
            if(count == 0) {
                count++;
                element = nums[i];
            }
            else if(nums[i] == element) {
                count++;
            }
            else {
                count--;
            }
        }
        int count1 = 0;
        for(int i = 0;i < n;i++) {
            if(nums[i] == element) {
                count1++;
            }
        }
        if(count1 > n/2) {
            return element;
        }
        return -1;
    }
int main() {
    vector<int>nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
}    