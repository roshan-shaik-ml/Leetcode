/*
    Author: Shaik Faizan Roshan Ali
    Date: November 17 2023
    contact: roshan.shaik.ml@gmail.com
    Problem link: https://leetcode.com/problems/generate-parentheses/  
    Approach: 
    1. Create a vector called 'parenthesis' to store valid combinations.

    2. Define a function 'makeParenthesis' to generate combinations:
       a. Check if the count of closing parentheses is greater than opening parentheses; if so, return.
       b. Check if both opening and closing parentheses have reached the desired count 'n'; if so, add the current combination to 'parenthesis' and return.
       c. If the count of opening parentheses is less than 'n', make a recursive call by appending an opening parenthesis to the current string.
       d. If the count of closing parentheses is less than 'n', make another recursive call by appending a closing parenthesis to the current string.
    3. In the 'main' function:
       a. Initialize 'n' to the desired value (e.g., 2).
       b. Call 'makeParenthesis' with an empty string and initial counts of opening and closing parentheses both set to 0.

    4. The 'parenthesis' vector now contains all valid combinations of well-formed parentheses.
    
    5. Optionally, iterate through the 'parenthesis' vector to print or use the combinations as needed.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<string> vs;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair

vs parenthesis;

void makeParenthesis(int n, string str, int open, int close) {

    if(close > open)
        return;

    if(close == n && open == n) {

        parenthesis.PB(str);
        return;
    }
    
    if(open < n)
        makeParenthesis(n, str + "(", open+1, close);

    if(close < n)
        makeParenthesis(n, str + ")", open, close+1);

}
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    REP(i, 1, n+1) {

        cout << "valid parenthesis permutation with n = " << i << "\n";
        
        makeParenthesis(i, "", 0, 0);
        
        REP(j, 0, parenthesis.size()) {

            cout << parenthesis[j] << " ";
        }
        cout << "\n";
    }

}
