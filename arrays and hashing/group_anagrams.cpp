#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> store; 
        for(string s: strs){
            string srtd = s;
            sort(srtd.begin(), srtd.end());
            store[srtd].push_back(s);
        }
        for(auto key: store){
            answer.push_back(key.second);
        }
        return answer;

    }
};