#include<iostream>
#include<string>
using namespace std;
int cr(string s)
{
	int i,j,k,l;
	l=0;
	k=s.size();
	char*t= &s[0];
	for (i=k-1;i>=0;i--){
		j=s[i]-48;
		if ((k-i)%2==0) l-=j;
		else{
			l+=j;
		}
	}
	return l;
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
