#include "storage.h"
double* Array(int n) {
	return new double[n];
}
void ArrayCompl(double* arr, int n) {
	for (int i = 0; i < n; ++i) {
		int k;
		k = rand();
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

void Chang(int* arr) {
	for (int i = 0; i < 12; i+=2) {
		int k;
		k = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = k;
	}

}

void ArrayCout2(int* arr) {
	cout << "Array : ";
	for (int i = 0; i < 12; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Completion(int** arr3, int n, int m){
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < m; i++) {
			cin >> arr3[i][j];
		}
	}
}

void Display(int** arr3, int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < m; i++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

}
