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
        cout << "\n\n";
    }

}
