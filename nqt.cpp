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

typedef unsigned int ui;
typedef unsigned long long int ul;



int main(){
    
           ll n;
           cin >> n;
           ll count=0;
           ll arr[n];
           for(ll i=0;i<n;i++)
           {
               cin >> arr[i];
           }
           
           for (int i = 0; i < n; ++i)
           
           {
                if(arr[i]>= arr[0])
                {
                    count ++;
                }

           }
           cout << count;
    return 0;
}