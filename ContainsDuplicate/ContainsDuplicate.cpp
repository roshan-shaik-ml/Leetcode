/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/contains-duplicate/description/
  Approach: The code employs an unordered set to identify duplicates in a given array of integers. 
            It iterates through the array, inserting each element into the set. If the set's size is equal to the array's size,
            there are no duplicates, and the function returns false; otherwise, it returns true. The time complexity is O(n),
            and the space complexity is O(min(n, m)), where n is the array size and m is the number of unique elements.    
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> num_set;

        for(auto num: nums) {

            num_set.insert(num);
        }

        bool ans;
        if(num_set.size() == nums.size())
            return false;
        else
            return true;
    }
};

static const int _ = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
