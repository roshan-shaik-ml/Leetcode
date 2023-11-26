/*
  Author: Shaik Faizan Roshan Ali
  Date: 26th November 2023
  Link: https://leetcode.com/problems/valid-anagram/description/
  Approach: This code checks if two strings, `s` and `t`, are anagrams (contain the same characters with the same frequency)
            in a case-insensitive manner. It first compares the lengths of the strings; if they differ,
            it immediately returns `false`. Then, it uses an array `hashmap` to count the occurrences of
            each character in string `s` and decrement the count for each character in string `t`. 
            Finally, it checks if all counts in the `hashmap` are zero, indicating an anagram,
            and returns `true`; otherwise, it returns `false`. The time complexity is O(n),
            where n is the length of the strings, and the space complexity is O(1) as the `hashmap`
            has a fixed size of 26 for the English alphabet.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;

        int hashmap[26] = {0};
        for(auto ch: s) 
            hashmap[ch - 'a']++;
        for(auto ch: t)
            hashmap[ch - 'a']--;

        for(int i = 0; i < 26; i++)
            if(hashmap[i] != 0)
                return false;
        
        return true;
    }
};
