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

int pa[100000];


int make_set(int a)
{
  pa[a]=1;
}

int find_set(int a)
{
    if(pa[a]==a)
        return pa[a];
    else
        {
           return pa[a]=find_set(pa[a]);
        }
}
void union_set(int a,int b)
{
  a=find_set(a);
  b= find_set(b);
  if(a!=b)
      {
        pa[b]=a;
      }

}

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
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
      {
        make_set(i);
      }
      cin>>m;
      int a,b;
    for(int i=0;i<m;i++)
    {
       cin>>a>>b;
       union_set(a,b);
    }
    for(int i=0;i<n;i++)
        {
           if(find_set(i)==i)
            ++count;
        }
      cout<<count<<'\n';
  }
return 0;
}
