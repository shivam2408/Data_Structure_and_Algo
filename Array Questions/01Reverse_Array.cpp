//#include<iostream>
//#include<vector>
//#include<iterator>
//using namespace std;
////void reverse_array(int arr[], int n);
//
////void reverse_array(int arr[], int n) {
////	int start = 0;
////	int end = n - 1;
////	while (start < end) {
////		int temp = arr[start];
////		arr[start] = arr[end];
////		arr[end] = temp;
////		start++;
////		end--;
////	}
////}
//
//void reverse_recursion_array(vector<int> &arr, int start, int end) {
//
//	if (start > end) {
//		return;
//	}
//
//	int temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] = temp;
//
//	reverse_recursion_array(arr, start + 1, end - 1);
//
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> arr;
//
//
//	for (int i = 0; i < n; i++) {
//		int no;
//		cin >> no;
//		arr.push_back(no);
//	}
//	int size = arr.size();
//
//	reverse_recursion_array(arr, 0, size);
//
//	for (int i = 1; i <= size; i++) {
//		cout << arr[i] << " ";
//	}
//
//
//}