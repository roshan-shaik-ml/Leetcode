/*
  Author: Shaik Faizan Roshan Ali
  Date: November 23 2023 
  Link: https://leetcode.com/problems/palindrome-number/
  Approach:The isPalindrome function checks if an integer is a palindrome by first handling
  negative numbers and then comparing the reversed version obtained through the getReverse 
  function with the original integer. The getReverse function reverses the digits of a positive
  integer using basic arithmetic operations. A more concise approach could involve converting
  the integer to a string and comparing the string's characters for palindrome checking.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0)
            return false;

        long long reverse = getReverse(x);
        if(reverse == x) {

            return true;
        }
        else
            return false;
    }

    long long getReverse(long long x) {

        long long reverse = 0;
        while(x > 0) {

            reverse = reverse * 10;
            reverse += x % 10;
            x = x/10;
        }

        return reverse;
         
    }
};
