// Largest rectangle in histogram
#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include <cmath>
#include<string.h>
#include <stdio.h>
#include <unordered_map>
#include <queue>
#include<climits>
#include <iomanip>
#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include <cmath>
#include<string.h>
#include <stdio.h>
#include <unordered_map>
#include <queue>
#include<climits>
#include <iomanip>
#include <unordered_set>




using namespace std;
#define ll long long
#define clr(x) memset(x, 0, sizeof(x))
#define tcase ll t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define GCJ ll t;cin>>t;for(ll H=1;H<=t;H++){cout<<"CASE #"<<H<<": ";solve();}
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define endl "\n"
//comment out the above line when coding probs which require flushing the output
#define prarr(a,n) for(ll i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
#define remDup(v) sort(all(v));v.resize(unique(all(v))-v.begin());
#define vi vector<ll>
#define pii pair<ll, ll>
#define vii vector<pii>
#define vvi vector<vector<ll>>
#define rep(i,n) for(ll i=0;i<n;i++)
#define crep(i,x,n) for(ll i=x;i<n;i++)
#define revrep(n,i) for(ll i=n-1;i>=0;i--)
#define crevrep(n,x,i) for(ll i=n-1;i>=x;i--)
#define ss second
#define ff first
#define incr(x,y) x=max(x, y)
#define decr(x,y) x=min(x, y)
#define pb push_back



class Solution {
public:


    
    
    

ll largestRectangleArea(vector<int>& arr)
{
    arr.push_back(0);
    
    int n = arr.size(), i = 0, res = 0;
    
    vi v;
    
    while (i < n)
    {
        if (v.empty() || arr[i] >= arr[v.back()])
            v.push_back(i++);
        else
        {
            int h = arr[v.back()]; v.pop_back();
            
            int w = v.empty() ? i : i - v.back() - 1;
            
            res = max(res, h * w);
        }
    }
    
    return res;
}



};