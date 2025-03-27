#include<iostream>
//https://zerojudge.tw/ShowProblem?problemid=f312
using namespace std;
int main(){
	int a,b,c,d,e,f,i,j,k=-1e9,l,m,n;
	
	cin>>a>>b>>c>>d>>e>>f;

	cin>>j;
	for(i=0;i<=j;i++){
		l=j-i;
		m=a*l*l+b*l+c;
		n=d*i*i+e*i+f;
		if(k<=m+n){
			k=m+n;
		}
	}

	cout<<k<<endl;
	return 0;
}
