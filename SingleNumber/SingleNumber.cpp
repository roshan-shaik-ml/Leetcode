/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/single-number/description/
  Approach: This code finds the single number in a vector nums where every other number appears twice.
            It iterates through the vector, performing XOR (^) operation between adjacent elements. 
            This XOR operation cancels out duplicate numbers, leaving the single number.
            The final result is the single number at the end of the iteration, and it is returned by the function.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0; i < n - 1; i++) {

            nums[i+1] = nums[i] ^ nums[i+1];
        }
        return nums[n-1];
    }
};
