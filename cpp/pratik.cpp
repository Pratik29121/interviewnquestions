/*
[8:21 pm, 15/01/2022] Pratik Suryawanshi: #include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <iomanip>
#include <tgmath.h>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <unordered_map>
 
#define vpll vector<pair<ll,ll>>
#define rep(i,m,n) for(ll i=m;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define ll long long int
#define ld long double
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define M1  998244353
#define mod 1000000007
#define PYES cout<<"YES\n"
#define PNO cout<<"NO\n"
 
#define fo(i,a,b) for(i=a;i<=b;i++)
 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
 
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
 
ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
ll power(ll a,ll b){ll result=1;while(b>0){if(b%2 == 1){result *= a;} a *= a;b /= 2;}return result;}
ll powermod(ll a,ll b, int M)
{
    if(a==1||b==0)    return 1;
    ll c=powermod(a,b/2,M);
    ll res=1;
    res=c*c;
    if(res>=M)    res%=M;
    if(b%2)    res*=a;
    if(res>=M)    res%=M;
    return res;
}
 
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
 
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
bool sortbydec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.ff > b.ff);
}
 
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
void decToBinary(int n, int bit)
{
    // array to store binary number
    int binaryNum[bit];
//    for(int i=0; i<bit; i++){
//        binaryNum[i]=0;
//    }
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for(int j=1; j<=bit-i; j++){
        cout<<0;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
ll computeXOR(ll n)
{
 
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return
[8:23 pm, 15/01/2022] Pratik Suryawanshi: int n,m,r,c;
    cin>>n>>m>>r>>c;
    char a[n][n];
    int ch=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
            if(a[i][j]=='B') ch=1;
        }
    }
    if(ch==0){
        cout<<-1<<endl;
        return;
    }
    if(a[r-1][c-1]=='B'){
        cout<<0<<endl;
        return;
    }
 
    int c2=0;
    for(int i=0; i<n; i++){
        if(a[i][c-1]=='B') c2=1;
    }
    for(int i=0; i<m; i++){
        if(a[r-1][i]=='B') c2=1;
    }
    if(c2==1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    [9:33 pm, 10/01/2022] Pratik Suryawanshi: #include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b-a==c-b || (a==b && b==c))
        cout<<"YES"<<endl;
        else if((2*b-c)%a==0 && 2*b-c>0)
        cout<<"YES"<<endl;
        else if((2*b-a)%c==0 && 2*b-a>0)
        cout<<"YES"<<endl;
        else if((a+c)%(2*b)==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
[8:54 pm, 11/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
using namespace std;

#define google(tc) cout<<"Case #"<<tc++<<": ";
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w", stdout);
#define GetSetBolt ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define LL long long int  
#define LD long double

#define dbg(...) cerr << "(" << #VA_ARGS << "):"<<(VA_ARGS)<<endl;

#define max3(a,b,c) max(a,max(b,c)) 
#define min3(a,b,c) min(a,min(b,c)) 
#define FF first 
#define SS second 
#define PB push_back 
#define PF push_front 
#define PPB pop_back  
#define PPF pop_front  
#define Endl endl

#define in(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define in2(arr,n,m) for(int i=0;i<n;i++){ for(int j=0;j<m;j++) cin>>arr[i][j];}
#define dis(arr,n) for(int i=0;i<n;i++…
[9:22 pm, 12/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define PB push_back
#define FIN for(i=0;i<n;i++)
#define F(i,k,n) for(i=k;i<n;i++)
#define YES cout<<"YES\n"; 
#define NO cout<<"NO\n"; 
#define MOD 1000000007
#define fi first
#define se second 

typedef vector <ll> vi;
typedef pair< ll ,ll > pii;
typedef vector<vector<ll> > vvi;


bool cmp(pii x,pii y){
    return (x.second<y.second);
}

ll solve(){

    ll n,m,i,j,l,k,x,y,z,ans;
    vi a,b,c,dp;
    string s1;
    cin>>n>>l;
    dp=vi(l,0);
    a=vi(n,0);
    FIN{
        cin>>a[i];
        j=n;
        while(a[i]){
            if(a[i]%2!=1){
                dp[j]++;
            }
            j--;
            a[i]/=2;
        }
    }
    ans=0;
    j=1;
  …
[9:23 pm, 12/01/2022] Pratik Suryawanshi: from math import floor as xx
from operator import add as XX
for _ in range(int(input())):
    n, l = map(int, input().split())
    xxx, x, XXX = [0 for _ in range(l)], 0, 0
    xxxxx = list(map(int, input().split()))
    for X in xxxxx:
        xxxx = list(map(int, bin(X)[2:].zfill(l)))
        xxx = list(map(XX, xxxx, xxx))
    xxx = xxx[::-1]
    for X in range(len(xxx)):
        x += pow(2, X) if xxx[X] > xx(n / 2) else XXX
    print(x)
[9:23 pm, 12/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 
  long long tc;
  cin >> tc;
 
  while (tc--) {
    int n;
    cin >> n;
 
    vector<int> loc[150069];
 
    for (int i = 1; i <= n; i++) {
      int x;
      cin >> x;
 
      loc[x].push_back(i);
    }
 
    int ans = 0;
    bool can = 0;
    for (int i = 1; i < 150069; i++) {
      if (loc[i].size() < 2) continue;
 
      can = 1;
      for (int j = 0; j < loc[i].size() - 1; j++) {
        ans = max(ans, loc[i][j] + n - loc[i][j+1]);
      }
    }
 
    if (!can) cout << "-1" << '\n';
    else {
      cout << ans << '\n';
    }
  }
}
[9:23 pm, 12/01/2022] Pratik Suryawanshi: B
[9:23 pm, 12/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n , l , k ;
vector<int> pos,tim ;
int dp[501][501];
int solve(int i , int rem ) {
    if (i==n) {
        return 0;
    }
    if (dp[i][rem]!=-1) return dp[i][rem];
    int ret = INT_MAX;
    for (int j = i+1 ; j<=i+1+rem && j<=n ; j++ ) {
        ret = min(ret , solve(j,rem-(j-(i+1)))+ ((pos[j]-pos[i])*tim[i])  );
    }
    return dp[i][rem]=ret;
}
void test() {
    memset(dp,-1,sizeof dp);
    cin>>n>>l>>k ;
    pos.clear();tim.clear();
    pos.resize(n+1);
    tim.resize(n+1);
    pos[n] = l;
    for (int i=0 ; i<n ; i++) {
        cin>>pos[i];
    }
    for (int i=0 ; i<n ; i++) {
        ci…
[9:23 pm, 12/01/2022] Pratik Suryawanshi: C
[9:29 pm, 12/01/2022] Pratik Suryawanshi: #include "bits/stdc++.h" 
#define int long long 
 
using namespace std; 
 
const int inf = 1e9; 
 
void solve(){ 
     
    int n, s; cin>>n>>s; 
    if(s & 1){ 
        if(n%2 == 1) cout<<"Odd\n"; 
        else cout<<"Even\n"; 
    } 
    else{ 
        if(n == 1) cout<<"Even\n"; 
        else cout<<"Impossible\n"; 
    } 
     
} 
 
int32_t main(){ 
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
 
    int t;  
    cin>>t; 
    while(t--){ 
        solve(); 
    }       
 
}
[9:31 pm, 12/01/2022] Pratik Suryawanshi: #include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t>0 && t<=100){
      long long n;
      cin >> n;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              
              cout <<"1 ";
          }
          cout << endl;
      }
      
      t--;
  }
  return 0;
}
[9:33 pm, 12/01/2022] Pratik Suryawanshi: Reader sc=new Reader();
  int t=sc.nextInt();
     StringBuilder sb=new StringBuilder();
  while(t-->0)
  { 
    int m=sc.nextInt();
    int x=sc.nextInt();
     int[] sto=new int[x+1];       
        sto[1]=1;
        for(int i=2;i<x+1;i++)
        {
            int  temp=(m%i);
            if(temp==0) temp=i;
            sto[i]=sto[i-1];
            if(sto[i]>=temp)
              sto[i]++;
        }
     
        for(int i=1;i<=x;i++)
          sb.append(sto[i]).append('\n');    
  }
  System.out.println(sb.toString());
}


}
[9:44 pm, 12/01/2022] Pratik Suryawanshi: import java.util.*;
import java.lang.*;
import java.io.*;
public class div2 {
public static void main(String[] args) throws IOException {

  
  Reader sc=new Reader();
  int t=sc.nextInt();
     StringBuilder sb=new StringBuilder();
  while(t-->0)
  { 
    int m=sc.nextInt();
    int x=sc.nextInt();
     int[] sto=new int[x+1];       
        sto[1]=1;
        for(int i=2;i<x+1;i++)
        {
            int  temp=(m%i);
            if(temp==0) temp=i;
            sto[i]=sto[i-1];
            if(sto[i]>=temp)
              sto[i]++;
        }
     
        for(int i=1;i<=x;i++)
          sb.append(sto[i]).append('\n');    
  }
  System.out.println(sb.toString());
}


}
class Reader {
    final private int BUFFER_SIZE = 1 << 16;
    private DataInputStream di…
[10:31 pm, 12/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
#define mp                   make_pair
#define eb                   emplace_back
#define pb                   push_back
#define pf                   push_front
#define popb                 pop_back
#define popf                 pop_front
#define hashmap              unordered_map
#define hashset              unordered_set
#define lb                   lower_bound
#define ub                   upper_bound
#define all(a)               (a).begin(), (a).end()
#define rall(a)              (a).rbegin(), (a).rend()
#define ff                   first
#define ss                   second
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define forr(i,a,b) for(ll i=a;i<b;i++)
#define forrr(i,b,a) for(ll i=b;i>=a;i--)
#define forrrr(i,a,b,k) for(ll i=a;i<b;i=i+k)
#define graph          vector<vector<ll>>
#define sz(v) v.size()
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<ld>          vld;
typedef vector<string>      vs;
typedef vector<double>      vd;
typedef vector<pii>         vpii;
typedef vector<pll>         vpll;
typedef pair< ll, pll>      plll;
typedef queue<ll>           qll;
typedef vector<plll>      vplll;
typedef  vector<set<ll>>   vsll;
typedef  vector<char>          vc;
typedef  vector<bool>            vb;
typedef  map<string, int>         msi;
typedef  map<int, int>          mii;
typedef  map<ll, ll>             mll;
typedef  map<ll, vll>             mvll;
typedef  map<vll, ll>             mvlll;
typedef  map<char, ll>           mcl;
typedef map<pair<ll, ll>, ll>  mplll;
typedef  unordered_map<char, ll>           umcl;
typedef  unordered_map< ll, char>           umlc;
typedef  unordered_map< ll, ld>           umld;
typedef  map<int, string>      mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
typedef priority_queue<ll, vector<ll>, greater<ll>> prq;
const ll MOD = 1000000007;
const ll mod = 998244353;
ld PI = 3.1415926535897;
const ll N = 1000010;
void solve();
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
 freopen("input1.txt", "r", stdin);
 freopen("error1.txt", "w", stderr);
 freopen("output1.txt", "w", stdout);
#endif
 ll t; cin >> t;
 while (t--)
 {
  solve();
  cout << "\n";
 }

 cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
 return 0;
}
void solve() {
 ll m, x;
 cin >> m >> x;
 ll store[x + 1];
 store[1] = 1;
 for (int i = 2; i < x + 1; i++)
 {
  ll temp = (m % i);
  if (temp == 0) temp = i;
  store[i] = store[i - 1];
  if (store[i] >= temp)store[i]++;




 }
 for (int i = 1; i <= x; i++) cout << store[i] << " ";
 cout << endl;
}
*/

#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#endif

#include <bits/stdc++.h>
using namespace std;
#ifdef tabr
#include "library/debug.cpp"
#else
#define debug(...)
#endif

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repar(i,n) for (int i = 0; i < n; i++)

#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define vll vector<ll>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #endif
    
    tc
    {
   int n,m;
  cin >> n >> m;
  multiset<int> s;
  for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++){
    int r,c;
    if(j-1 > m-j){
     c=1;
    }
    else{
     c=m;
    }

    if(i-1 > n-i){
     r=1;
    }
    else{
     r=n;
    }
     int dist = abs(r-i) + abs(c-j);
     // cout << dist << " ";
     s.insert(dist);
   }
  }
  for(auto a: s){
   cout << a<<" ";
  }
  cout << endl;
 } 
 return 0; 
}