/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/search-a-2d-matrix/description/
  Approach: This code searches for a target value in a 2D matrix. The searchMatrix function iterates through matrix rows,
            using binary search (binarySearch function) on rows with potential targets. If a row contains only the target,
            it returns true. The main function returns true if the target is found in any row, and false otherwise. The
            time complexity is influenced by both the number of rows and the average row length.
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        bool ans = false;
        for(auto v: matrix) {

            if(v.size() == 1 &&  v.front() == target)
                return true;

            if(target >= v.front() && target <= v.back()) {

                ans = binarySearch(v, target);
            }
        }

        return ans;
    }
    
    bool binarySearch(vector<int> arr,int target) {

        int low = 0;
        int high = arr.size() - 1;
        int mid;
        while(low <= high) {

            mid = low + (high - low) / 2;
            if(arr[mid] == target)
                return true;

            else if(target > arr[mid])
                low = mid + 1;
            else if(target < arr[mid])
                high = mid - 1;   
        }
        return false;
    }
};
