/*
  Author: Shaik Faizan Roshan Ali
  Date: 9th December 2023
  Link: https://leetcode.com/problems/fibonacci-number/
  Approach:
	Base case: If n is 0 or 1, return n (base cases for the Fibonacci sequence).
	Recursively calculate the Fibonacci numbers for n-1 and n-2.
	Return the sum of the two previous Fibonacci numbers.
*/
class Solution {
public:
    int fib(int n) {
        
        if(n == 0 || n == 1)
            return n;

        return fib(n-1) + fib(n-2);
    }
};
