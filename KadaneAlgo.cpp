#include <bits/stdc++.h>
using namespace std;
int maxsum(int* a,int n)
{   int maxsofar=a[0],maxend=a[0];
    for(int i=1;i<n;i++)
    {
      maxend=max(a[i],maxend+a[i]);
      maxsofar=max(maxsofar,maxend);
       
    }
     return maxsofar;
}
int main() {
	//code
	int t;
	cin>>t;int n;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<maxsum(a,n)<<"\n";
	    
	}
	return 0;
}