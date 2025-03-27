#include<iostream>
using namespace std;
int main(){
	int i,n,j,d,k;
	cin>>n;
	int a[n];
    i=0;
    while(i<n)
    {
        cin>>a[i];
        i+=1;
    }
    for (j=0; j<=n-1; j++){
		d=0;
		for (k=0; k<=n-1; k++){
       		if (a[j]<=a[k]) d++;
       	}
    	cout<<d-1<<" ";
    }
    return 0;
}
