#include<iostream>
using namespace std;

long long calculatePower2(int n){
	if(n == 0){
		return 1;
	}
	else{
		return 2 * calculatePower2(n - 1);
	}
}

int main(){
	int n;
	cin >> n;
	
	long long result = calculatePower2(n);
	cout << "2^" << n << "=" << result;
	return 0;
}
