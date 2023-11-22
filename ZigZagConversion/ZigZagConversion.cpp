/*  
  Author: Shaik Faizan Roshan Ali
  Date: 23 November 2023
  Link: https://leetcode.com/problems/zigzag-conversion/
  Approach: Initialize a vector of strings, v, with numRows rows to represent the zigzag pattern.
            Traverse the input string character by character, appending each character to the corresponding row in v.
            Use a flag (flag) to control the direction of traversal (up or down).
            Update the row index (i) based on the flag and change the flag when reaching the bottom or top row.
            Concatenate the rows of v to get the final zigzag pattern.
            Return the resulting string.
*/

class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1 || s.length() < numRows)
            return s;
        
        bool goingDown = true;
        // true -> down
        // false -> up
        vector<string> v(numRows);
        int i = 0;

        for(auto ch: s) {

            v[i] += ch;

            if(goingDown == true)
                i += 1;
            else
                i -= 1;

            if(i == numRows-1)
                goingDown = false;
            else if(i == 0)
                goingDown = true;                       
        }
        
        string ans = "";
        for(auto s: v) {

            ans += s;
        }
        return ans;
    }
};
