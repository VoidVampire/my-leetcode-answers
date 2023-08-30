/*
217. Contains Duplicate 
Easy
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(begin(nums), end(nums));
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {1, 2, 3, 1};
    bool result1 = solution.containsDuplicate(nums1);
    cout << "Example 1: " << (result1 ? "true" : "false") << endl;

    // Example 2
    vector<int> nums2 = {1, 2, 3, 4};
    bool result2 = solution.containsDuplicate(nums2);
    cout << "Example 2: " << (result2 ? "true" : "false") << endl;

    // Example 3
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    bool result3 = solution.containsDuplicate(nums3);
    cout << "Example 3: " << (result3 ? "true" : "false") << endl;

    return 0;
}