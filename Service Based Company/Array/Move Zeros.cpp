#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = -1;
    for(int i = 0;i < n;i++) {
        if(nums[i] == 0) {
            j = i;
            break;
        }
    }
    //jb main upar wale loop se bahar aagya toh mera jo j tha woh 0 pe point kr rha h 
    //corner case 
    if(j == -1) return;
    for(int i = j + 1;i < n;i++) {
        if(nums[i] != 0) {
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(auto j : nums) {
        cout << j << " ";
    }
}
