#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int t,i,j,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    int c[3];
	    vector<int> a(n);
	    for(i=0;i<n;i++){
	        cin>>j;
	        c[j]++;
	    }
	    for(i=0;i<c[0];i++){
	        a[i]=0;
	    }
	      for(i=c[0];i<n-c[0]+1;i++){
	        a[i]=1;
	    }
	       for(i=n-c[0]+1;i<n;i++){
	        a[i]=2;
	    }
	    for(i=0;i<n;i++){
	        cout<<a[i];
	    }
	    cout<<endl;
	}
	return 0;
}
