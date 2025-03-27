#include<iostream>
#include<string>
using namespace std;
int cr(string s)
{
	int i,j,k,l,m,n,o;
	l=0;
	k=s.size();
	char*t= &s[0];
	int p[k];
	for (i=k-1;i>=0;i--){
		s[i]=s[i]-48;
		if(s[i]<0 or s[i]>9){
			s[i]='N';
		}
	}
	m=1;
	o=0;
	for (i=k-1;i>=0;i--){
		if (s[i]=='N'){
			m=1;
			s[i]=0;
		}
		else{
			n=s[i]*m;
			o+=n;
			m=m*10;
		}
	}
	return o;
}

int main(){
	string n;
	int p,q,r,t;
	while(cin>>n){
		p=cr(n);
		cout<<p<<endl;
	}
	return 0;
}
