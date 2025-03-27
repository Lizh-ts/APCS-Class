#include<iostream>
#include<math.h>
//https://zerojudge.tw/ShowProblem?problemid=f312
using namespace std;
int main(){
	int j,k,l=1000,n;
	cin>>j;
	int a[j],b[j];
	for (int i=0;i<j;i++){
		cin>>a[i]>>b[i];
	}
	for (int i=0;i<j-1;i++){
		n=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
		if(k<=n){
			k=n;
		}
		if(l>=n){
			l=n;
		}
	}
	cout<<k<<' '<<l<<endl;
	return 0;
}
