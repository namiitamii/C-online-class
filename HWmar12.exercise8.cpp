#include<iostream>

using namespace std;

int main(){
	int n , sum = 0;
	cout<<"Enter a number: ";
	cin>>n;
	
	for(int i = 1; i<=n ; i++){
		if(i%2!=0){
			sum = sum + i;
		}
	}
        cout<<"Sum of odd numbers 1-n: "<<sum;
	return 0;
}
