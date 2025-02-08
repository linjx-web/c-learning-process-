#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,gw,sw;
	cin >>n;
	gw=n%10;
	sw=n/10;
	cout <<gw*10+sw;
	return 0;
}
