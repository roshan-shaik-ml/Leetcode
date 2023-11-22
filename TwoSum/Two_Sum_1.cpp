/*
  Author: Shaik Faizan Roshan Ali
  Date: November 21 2023
  Link: https://leetcode.com/problems/two-sum/
  Approach: The algorithm uses a map to store encountered numbers and their indices, then iterates
  through the array to find the complement (target - current number) in the map.
  Handles cases where the complement is the same as the current number.
*/

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, pair<int, int>> indices;
        for(int i = 0; i < nums.size(); i++) {
            
            int num = nums[i];
            if(indices.find(num) == indices.end()) {

                indices[num] = make_pair(i, -1);
            }
            else {

                auto itr = indices.find(num);
                int value1  = itr->second.first;
                indices[num] = make_pair(value1, i);
            }
        }
        
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {

            int num1 = nums[i];
            int num2 = target-nums[i];

            auto itr_num1 = indices.find(num1);
            auto itr_num2 = indices.find(num2);

            if(itr_num1 == indices.end() || itr_num2 == indices.end()) {

                continue; /* Case where the second num doesn't exist in the nums */
            }
            
            else if(num1 == num2 && itr_num2->second.second != -1) {

                ans.push_back(itr_num1->second.first);
                ans.push_back(itr_num1->second.second);
                break;
            }
            else if(num1 != num2){

                ans.push_back(itr_num1->second.first);
                ans.push_back(itr_num2->second.first);
                break;
            }
        }
        return ans;
    }   
};
