#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int maxSatisfaction(vector<int>& v) {

        sort(v.begin(),v.end());
        int n = v.size();

        int suf = 0, ans=0, cur=0;

        for(int i = n-1;i>=0;i--)
        {
            cur += suf + v[i];
            suf += v[i];
            ans = max(ans,cur);
        }

        return ans;

    }
    
};