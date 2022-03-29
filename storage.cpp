#include "storage.h"
double* Array(int n) {
	return new double[n];
}
void ArrayCompl(double* arr, int n) {
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		arr[i] = k;
	}
}
void ArrayCout(double* arr, int n) {
	cout << "Array : ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void StorageDelete(double* arr) {
	delete []arr;

}