/*
  Author: Shaik Faizan Roshan Ali 
  Date:  November 21 2023
  Link: https://leetcode.com/problems/valid-parentheses/
  Approach: The isValid function utilizes a stack to validate a string containing parentheses,
  square brackets, and curly braces. It iterates through each character, popping the stack
  when a matching closing bracket is found. The result is true if the stack is empty,
  indicating valid bracket pairs, and false otherwise.
*/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stack;
        
        for(auto chr: s) {

            if(chr == ')' && !stack.empty() && stack.top() == '(')            
                stack.pop();
            else if(chr == ']' && !stack.empty() && stack.top() == '[')
                stack.pop();
            else if(chr == '}' && !stack.empty() && stack.top() == '{')
                stack.pop();
            else
                stack.push(chr);

        }

        return stack.empty();
    }
};
