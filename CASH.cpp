#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int calculatedRe(long long int g,long long int r){
    long long int re=g-r;
    if(re<0){
        return LLONG_MAX;}
    else 
      { return re;
    
    }
}

int main() {
	// your code goes here
	int t;
	int n;
	ll int k,r=0,g=0,re=0,mi=0;
	cin>>t;
	
	while(t--){
	    cin>>n>>k;
	    ll int a[n+1],b[n+1];
	    a[n]=0;
	    b[n]=0;
	    //for loop
	    for(int i=0;i<n;i++){
	        cin>>a[i];}
	        for(int i=0;i<n;i++){
	        b[i]=a[i]%k;
	        if(b[i]==0){
	            a[i]=0;
	        }else{
	             a[i]=k-b[i];
	        }}
	    
	    g=b[0];
	    r=accumulate(a+1, a+n, r);
	    re=calculatedRe(g,r);
	    mi=re;
	    for(int i=1;i<n;i++){
	        r-=a[i];
	        g+=b[i];
	        re=calculatedRe(g,r);
	        if(mi>re){
	            mi=re;
	        }
	        
	    }
	    
	    cout<<mi<<"\n";
	    
	}
	return 0;
}
