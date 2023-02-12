#define ll long long

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        ll n=weights.size(), mn=0, mx=0;
        if(k==1 || k==n){return 0;}
        vector<ll> v;
        for(ll i=0; i<n-1; i++){
            v.push_back(weights[i]+weights[i+1]);
        }
        sort(v.begin(), v.end());
        for(ll i=0; i<k-1; i++){
            mn += v[i];
            mx += v[v.size()-i-1];
        }
        return mx - mn;
    }
};