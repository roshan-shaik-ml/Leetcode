/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/top-k-frequent-elements/description/
  Approach: This code finds the top k frequent elements in a given vector nums.
            It uses an unordered map (hashmap) to count the frequency of each element. 
            Then, it utilizes a priority queue (pq) to store pairs of frequencies and elements,
            ordered by frequency. The code populates the priority queue with the pairs from the
            map and extracts the top k frequent elements, storing them in the vector ans.
            The final result is the vector containing the top k frequent elements.
*/
class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> hashmap;
        priority_queue<pair<int, int>> pq;

        for(int num: nums) {

            hashmap[num]++;
        }  

        
        for(pair<int, int> p : hashmap) {

            pq.push({p.second, p.first});
        } 

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            
            int highest = pq.top().second;
            pq.pop();
            ans.push_back(highest);
        }
        return ans;
    }
};

static const int _ = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
