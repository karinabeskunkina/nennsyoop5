#include "storage.h"


int main()
{
	string choice;
	choice = "Yes";
	while (choice == "Yes" or choice == "YES" or choice == "yes") {
		int n, sum;
		cin >> n;
		double* arr;
		arr = Array(n);
		ArrayCompl(arr, n);
		ArrayCout(arr, n);
		StorageDelete(arr);
		cout << "Do you want to continue working?" << endl;
		string print;
		cin >> print;
		choice = print;
	}

	int* arr2 = new int[12];
	for (int i = 0; i < 12; ++i) {
		int k;
		k = rand();
		arr2[i] = k;
	}
	Chang(arr2);
	ArrayCout2(arr2);
	delete []arr2;


	int n3, m3;
	cout << "n and m: ";
	cin >> n3;
	cin >> m3;
	int** arr3 = new int* [n3];
	for (int i = 0; i < n3; i++) {
		arr3[i] = new int [m3];
	}
	Completion(arr3, n3, m3);
	Display(arr3, n3, m3);
	
	for (int i = 0; i < n3; i++) {
		delete[]arr3[i];
	}

	delete[]arr3;
	return 0;	
}

