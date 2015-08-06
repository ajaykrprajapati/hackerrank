#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

 
int countp(int arr[], int n, int k)
{
    int count = 0;
    sort(arr, arr+n); 
    int l = 0;
    int r = 0;
    while(r<n)
    {
         if(arr[r]-arr[l]== k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r]-arr[l]>k)
              l++;
         else
              r++;
    }   
    return count;
}

int main()
    {
    
    int arr[1000000],n,k,count=0;

    
   cin>>n>>k;
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        
    }
    count=countp(arr,n,k);

    cout<<count;
    return 0;
}
