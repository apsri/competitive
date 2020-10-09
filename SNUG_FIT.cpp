#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	long long int s=0;
	cin>>t;
	while(t--){
	    s=0;
	    cin>>n;
	    long long int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=b[i])
	        {
	            s+=b[i];
	        }
	        else
	           s+=a[i];
	    }
	    cout<<s<<"\n";
	}
	return 0;
}
