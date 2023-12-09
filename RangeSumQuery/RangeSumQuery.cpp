/*
  Author: Shaik Faizan Roshan Ali
  Date: 9th December 2023
  Link: https://leetcode.com/problems/range-sum-query-immutable/
  Approach:
    Constructor (NumArray):

        The constructor initializes a NumArray object with a vector of integers (nums).
        It computes the prefix sum of the input array and stores it in the prefix vector.
        The prefix[i] contains the sum of the elements from index 0 to i.
    sumRange Method:

        The sumRange method calculates the sum of elements in the given range [left, right].
        If left is 0, it returns the prefix sum at index right.
        Otherwise, it returns the difference between the prefix sums at indices right and left-1.
*/
class NumArray {
public:

    vector<int> prefix;
    NumArray(vector<int>& nums) {
        
        int n = nums.size();
        prefix.push_back(nums[0]);
        for(int i = 1; i < n; i++) {

            prefix.push_back(prefix.back() + nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left == 0)
            return prefix[right];
        return (prefix[right] - prefix[left-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
