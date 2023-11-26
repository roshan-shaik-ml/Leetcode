/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/binary-search/description/
  Approach: This code implements a binary search algorithm to find the index of a target value in a sorted array nums.
            The function search initializes low and high indices and iteratively updates them based on comparisons with the middle
            element (mid). If the middle element equals the target, the function returns the index; otherwise, it adjusts the
            search range. If the target is not found, it returns -1. The static block at the end optimizes input-output operations for faster execution.
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size() - 1; 
        int mid;
        
        while(low <= high) {

            mid = low + (high - low) / 2;

            if(nums[mid] == target)
                return mid;

            else if(target < nums[mid])

                high =  mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};

static const auto __ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
