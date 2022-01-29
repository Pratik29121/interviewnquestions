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
      cin >> arr1[i];
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




///////////////////////                INTERSECTION OF ARRAYS        /////////////////////////

input : 9 3
        1 3 2 3 3 4 5 5 6
        3 3 5
  
output : 3  




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>> m;
    int cnt=0;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin >> arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    
    for(int i=0, j=0; i<n && j<m;)
    {
        if(arr1[i] == arr2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
         j++;
        
    }
    cout << cnt;
    
}
