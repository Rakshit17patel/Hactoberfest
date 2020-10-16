//Harsh_Mehta
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000000000
#define mod 1000000007
#define speedup ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){
	speedup
	int t=1;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=n,j=0;i>0,j<n;i--,j++)
	        a[j]=i;
	    int ans[n-1][2];
	    for(int i=0;i<n-1;i++)
	    {
	        ans[i][0]=a[i];
	        ans[i][1]=a[i+1];
	        a[i+1]=(a[i]+a[i+1]+1)/2;
	    }
	    cout<<a[n-1]<<endl;
	    for(int i=0;i<n-1;i++)
	        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
	    cout<<endl;
	}
}
