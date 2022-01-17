#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#endif

#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
#define valid(x,y,row,col) (((x) >= 0 and (x) < row) and ((y) >= 0 and (y) < col))
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define timer(d) for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))
 
 
typedef unsigned int ui;
typedef unsigned long long int ul;

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  ll n;
  cin >> n;
  ll arr[n];
  ll count =0;
  for(ll i=0;i<n;i++)
  
  {
      cin >> arr[i];
  }
  srt(arr,arr+n);
  for(ll i=0;i<n;i++)
  {
      while(i < n-1 && arr[i] == arr[i+1])
      {
          i++;
      }
      count ++;
  }
  cout << count ;
  
}