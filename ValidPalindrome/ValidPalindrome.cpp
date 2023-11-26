/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/valid-palindrome/description/
  Approach: This code checks if a given string s is a palindrome, considering alphanumeric characters only and ignoring case.
            It uses two pointers, ptr1 and ptr2, starting from the beginning and end of the string, respectively.
            In a while loop, it compares corresponding characters after converting them to lowercase and skipping
            non-alphanumeric characters. If the characters match, the pointers move towards each other; otherwise,
            it returns false. The loop continues until the pointers meet, and if it completes, the string is a
            palindrome, and the function returns true.
*/
class Solution {
public:

    bool isPalindrome(string s) {
        
        int ptr1 = 0;
        int ptr2 = s.length() - 1;
        
        while(ptr1 < ptr2) {

            char ch1 = tolower(s[ptr1]);
            char ch2 = tolower(s[ptr2]);

            if(!isalnum(ch1)) {

                ptr1++;
                continue;
            }
            if(!isalnum(ch2)) {

                ptr2--;
                continue;
            }

            if(ch1 == ch2) {

                ptr1++;
                ptr2--;
                continue;
            }
            else {

                return false;
            }
        }

        return true;
    }
};
