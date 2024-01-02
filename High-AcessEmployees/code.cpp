#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
          unordered_map<string, vector<int>> mp;
          //map to store key-pair of employee name and their access time 
        for (auto& it : access_times) {
            int time = stoi(it[1]);
            mp[it[0]].push_back(time);
        }
        //sort the time of employee access time 
        for (auto& it : mp) {
            sort(it.second.begin(), it.second.end());
        }
        //traverse through access time array of employees and and check difference between a set of 3 times at a time if it is less than 100 then store it in ans array
        vector<string> ans;
        for (auto& it : mp) {
            vector<int>& times = it.second;
            for (int i = 2; i < times.size(); i++) {
                if (times[i] - times[i - 2] < 100) {
                    ans.push_back(it.first);
                    break;
                }
            }
        }
        return ans;
    }
};