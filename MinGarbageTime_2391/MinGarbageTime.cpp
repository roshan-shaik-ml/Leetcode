#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int garbageCollection(vector<string>& garbage, vector<int>& travel) {

    vector<int> prefix_travel;
    int curr_sum = 0;
    prefix_travel.push_back(0);
    for(int i = 0; i < travel.size(); i++) {
        
        curr_sum = travel[i]+curr_sum;
        prefix_travel.push_back(curr_sum);
    }        

    int paper_time = 0;
    int glass_time = 0;
    int metal_time = 0;
    
    int glass_ptr = 0;
    int paper_ptr = 0;
    int metal_ptr = 0;
    for(int i = 0; i < garbage.size(); i++) {

        string house = garbage[i];
        map<char, int> freq;

        for(auto ch: house) {

            if(freq.find(ch) != freq.end()) 
                freq[ch]++;
            else
                freq[ch] = 1;
        }   

        if(freq.find('M') != freq.end()) {

            int travel_time = prefix_travel[i] - prefix_travel[metal_ptr];
            metal_time += freq['M'] + travel_time;
            metal_ptr = i;
        }
        if(freq.find('P') != freq.end()) {

            int travel_time = prefix_travel[i] - prefix_travel[paper_ptr];
            paper_time += freq['P'] + travel_time;
            paper_ptr = i;
        }
        if(freq.find('G') != freq.end()) {
    
            int travel_time = prefix_travel[i] - prefix_travel[glass_ptr];
            glass_time += freq['G'] + travel_time;
            glass_ptr = i;
        }
    }

    int total_time = glass_time + paper_time + metal_time;
    return total_time;
}   


int main() {

    
    freopen("input.txt", "r", stdin);
    int g_size;
    cin >> g_size;
    vector<string> garbage;
    for(int i=0; i < g_size; i++) {

        string trash;
        cin >> trash;
        garbage.push_back(trash);
    }

    int t_size;
    cin >> t_size;
    vector<int> travel;
    for(int i = 0; i < t_size; i++) {

        int time;
        cin >> time;
        travel.push_back(time);
    }
    
    int time = garbageCollection(garbage, travel);
    cout << time << endl;
   

}
