#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"please input n:\n";
	cin>>n;
	do{
	cout<<"n="<<n<<"\n";
	if(n!=1){
		if(n%2 ==1)n=3*n+1;
		else n=n/2;
		}
	}while(n!=1);
	cout<<"n="<<n<<"\n";
	return 0;
}
