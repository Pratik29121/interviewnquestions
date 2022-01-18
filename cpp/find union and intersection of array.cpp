UNION OF ARRAY    input : 5 3
                          5 4 3 6 4
                          2 3 4
   
                  output : 6
   
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin >> n >> m;
  int arr[n];
  int arr1[m];
  for(int i=0;i<n;i++)
  {
      cin >> arr[i];
  }
  for(int i=0;i<m;i++)
  {
      cin >> arr1[m];
  }
  
  set<int> s ;
   for(int i=0;i<n;i++){
           s.insert(arr[i]);
           
       }
       for(int i=0;i<m;i++){
           s.insert(arr1[i]);
       }
       
       cout << s.size() << "\n";
 
}

