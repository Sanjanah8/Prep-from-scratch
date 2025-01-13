#include<iostream>
using namespace std;

int main() {
	int n,esum=0,osum=0;
	cin>>n;
	while(n>0){
		int digit=n%10;

		if(digit%2==0){
			esum+=digit;
		}else{
			osum+=digit;
		}
		n=n/10;
	}

	cout<<esum<<" "<<osum;
	return 0;
	
}
