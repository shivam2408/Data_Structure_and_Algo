#include<iostream>
using namespace std;

int main() {
	
	int a[10] = {1,2,1,0,2,1,1,0,2,0};
	int zeros=0, ones=0, twos=0;
	for (int i = 0; i < 10; i++) {
		if (a[i] == 0) {
			++zeros;
		}
		else if (a[i] == 1) {
			++ones;
		}
		else if (a[i] == 2) {
			++twos;
		}
	}
	cout << " " << zeros << " " << ones << " "<<twos;



}