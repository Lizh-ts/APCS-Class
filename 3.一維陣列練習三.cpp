#include<iostream>
using namespace std;
int main(){
	int n,i,j,d,k,l;
	cin>>n;
	int a[n],b[n];
    i=0;
    j=0;
    while(i<n)
    {
        cin>>a[i];
        i+=1;
    }
    while(j<n)
    {
        cin>>b[j];
        j+=1;
    }
    
    
    for (k=0; k<=n-1; k++){
		d=0;
		for (l=0; l<=n-1; l++){
       		if (b[k]>b[l]) d++;
       	}
    	cout<<a[d]<<" ";
    }
    return 0;
}
