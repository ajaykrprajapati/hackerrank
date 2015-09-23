#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned long long int i,j,T;
    cin>>T;
	while(T--)
	{
		unsigned long long int k;
		cin>>k;
		for (unsigned long long int i = 2; i*i<= k; ++i)
		{
			while(k%i==0)
			{
				k=k/i;
			}
		}
     
		cout<<k<<endl;
        
	}

	return 0;
}
