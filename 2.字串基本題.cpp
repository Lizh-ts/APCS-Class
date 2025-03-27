#include<iostream>
#include<string>
using namespace std;
int main(){
	string n,o,p;
	int i,j,k,l,m,q,r,s,v,u;
	l=0;
	r=0;
	cin>>n>>o>>p;
	k=n.size();
 	char*t= &n[0];
 	for (i=0;i<k;i++){
		j=n[i]-48;
		if (j<=9 and j>=0){
			if (j%2==0){
				l+=j;
			}
			else{
				l-=j;
			}
		}
	}
	m=o.size();
 	char*x= &o[0];
 	for (i=0;i<m;i++){
		q=o[i]-48;
		if (q<=9 and q>=0){
			if (q%2==0){
				r+=q;
			}
			else{
				r-=q;
			}
		}
	}
	s=p.size();
 	char*y= &p[0];
 	for (i=0;i<s;i++){
		v=p[i]-48;
		if (v<=9 and v>=0){
			if (v%2==0){
				u+=v;
			}
			else{
				u-=v;
			}
		}
	}
	cout<<l<<endl;
	cout<<r<<endl;
	cout<<u<<endl;
    return 0;
}
