#include<iostream>
using namespace std;

struct Pair {
	int min=INT_MAX;
	int max=INT_MIN;
};

struct Pair getMinMax(int arr[], int n) {
	struct Pair minmax;
	//int i;

	//if (n == 1) {
	//	minmax.max = arr[0];
	//	minmax.min = arr[1];
	//	return minmax;
	//}

	//if (arr[0] > arr[1]) {
	//	minmax.max = arr[0];
	//	minmax.min = arr[1];
	//}
	//else {
	//	minmax.max = arr[1];
	//	minmax.min = arr[0];
	//}
	for (int i = 0; i < n; i++) {
		if (arr[i] > minmax.max)
			minmax.max = arr[i];
		else if (arr[i] < minmax.min)
			minmax.min = arr[i];
	}
	return minmax;

}


int main() {

	int n;
	cin >> n;
	int a[1024] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = INT_MIN;
	int min = INT_MAX;

	struct Pair minmax = getMinMax(a, n);

	cout << "Minimum " << minmax.min << endl;
	cout << "Maximum " << minmax.max << endl;


}