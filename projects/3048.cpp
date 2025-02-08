#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z,x1,y1,z1,x2,y2,z2,x3,y3,z3,s;
	cin >>s;
	x=y=z=s/3;
	x3=x/2;
	y3=y/2;
	z3=s-x3-y3;
	x2=x3/2;
	z2=z3/2;
	y2=s-x2-z2;
	y1=y2/2;
	z1=z2/2;
	x1=s-z1-y1;
	cout <<x1<<" "<<y1<<" "<<z1;	
	return 0;
} 
