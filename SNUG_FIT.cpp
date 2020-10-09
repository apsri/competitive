#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	int t,n;
	ll s=0;
	cin>>t;
	while(t--){
	    s=0;
	    cin>>n;
	    ll a[n],b[n];
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
