#include<iostream>
using namespace std;
int prime(int  p)
	{
	if(p<2)return 0;
	for(int i=2;i*i<=p;i++)
		if(p%i==0)
			return 0;
	return 1;
	}
int main()
{
   int arr[100000],j=0; 
    
  for(int i=0;i<1000000;i++)
	  {
	  if(prime(i))
		 arr[j++]=i;
		}
    
    int t;
    cin>>t;
    while(t--)
        {
        int w;
        cin>>w;
        cout<<arr[w-1]<<endl;
        
    }


}
