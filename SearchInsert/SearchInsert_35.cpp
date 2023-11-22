/*
  Author: Shaik Faizan Roshan Ali
  Date: November 21 2023
  Link: https://leetcode.com/problems/search-insert-position/
  Approach: This algorithm employs binary search to locate the index of a target
  value within a sorted array of distinct integers. By iteratively adjusting the
  search range based on comparisons with the middle element, it achieves efficient O(log n)
  runtime complexity. In cases where the target is not found, the algorithm returns the
  index where the target would be inserted to maintain the array's sorted order.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        while(low <= high) {

            int mid = (high + low) / 2;

            if(target == nums[mid])
                return mid;
            if(target < nums[mid])
                high = mid-1;
            else if(target > nums[mid]) 
                low = mid+1;
        }

        return low;
    }

};
