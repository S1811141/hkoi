#include <bits/stdc++.h>
using namespace std;

void J150(){
	int n,weird=1;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<weird<<' ';
			if(j!=n-1) weird+=n;
		}
		cout<<endl;
	}
}

int main(){
	J150();
}