#include <bits/stdc++.h>
using namespace std;

void J151(){
	int n,m;
	cin>>n>>m;
	cout<<m<<' ';
	if(n%2==0){
		cout<<"0 ";
	}
	int count=1;
	while(n-2>0){
		cout<<count<<" -"<<count<<' ';
		count++;
		n-=2;
	}
}

int main(){
	J151();
}