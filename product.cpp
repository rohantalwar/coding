#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;


#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif    
  int t=1;
  //cin>>t;
  while(t--){
      vector <int> nums;
      int n;cin>>n;nums.resize(n);
      for(int i=0;i<n;i++)
        cin>>nums[i];
      int l[nums.size()+1];
        l[0]=1;
        int r[nums.size()+1];
        for(int i=0;i<nums.size();i++)
        {
            l[i+1]=l[i]*(nums[i]);
        }
        r[nums.size()]=1;
        for(int i=nums.size()-1;i>=0;i--)
          {
              r[i]=r[i+1]*nums[i];
          }
         vector <int> v;
        for(int i=0;i<nums.size();i++)
        {  //cout<<l[i]<<" "<<r[i]<<"\n";
            v.push_back(l[i]*r[i+1]);
        }
        for(auto it:v)
          cout<<it<<" ";
  }



return 0;
}
