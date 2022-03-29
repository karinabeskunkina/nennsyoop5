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
	return 0;	
}

