#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <array>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using Clock = std::chrono::steady_clock;
using std::chrono::time_point;
using std::chrono::duration_cast;
using std::chrono::milliseconds;

void stoogeSort(int arr[], int l, int r) {
	if (l >= r)
		return;

	// If value at leftmost pos of arr > rightmost pos of arr, then swap values
	if (arr[l] > arr[r])
		swap(arr[l], arr[r]);

	// If there are more than 2 elements in arr
	if ((r - l + 1) > 2) {
		int twoThrds = (r - l + 1) / 3;

		// stoogeSort first 2/3 elements
		stoogeSort(arr, l, r - twoThrds);

		// stoogeSort last 2/3 elements
		stoogeSort(arr, l + twoThrds, r);

		// stoogeSort first 2/3 elements again
		stoogeSort(arr, l, r - twoThrds);
	}
}

// Driver Code
int main() {
	const int n1 = 100, n2 = 200, n3 = 300, n4 = 400, n5 = 500, n6 =
			600, n7 = 700, n8 = 800, n9 = 900, n10 = 1000;
	int arr1[n1];
	// creating array 1
	for (int i = 0; i < n1; i++) {
		arr1[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr2[n2];
	// creating array 2
	for (int i = 0; i < n2; i++) {
		arr2[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr3[n3];
	// creating array 2
	for (int i = 0; i < n3; i++) {
		arr3[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr4[n4];
	// creating array 2
	for (int i = 0; i < n4; i++) {
		arr4[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr5[n5];
	// creating array 1
	for (int i = 0; i < n5; i++) {
		arr5[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr6[n6];
	// creating array 2
	for (int i = 0; i < n6; i++) {
		arr6[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr7[n7];
	// creating array 2
	for (int i = 0; i < n7; i++) {
		arr7[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr8[n8];
	// creating array 2
	for (int i = 0; i < n8; i++) {
	}

	int arr9[n9];
	// creating array 2
	for (int i = 0; i < n9; i++) {
		arr9[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr10[n10];
	// creating array 2
	for (int i = 0; i < n10; i++) {
	}

	time_point < Clock > start = Clock::now();	// merge sorting
	stoogeSort(arr1, 0, n1 - 1);
	time_point < Clock > end = Clock::now();
	milliseconds diff = duration_cast < milliseconds > (end - start);

	time_point < Clock > start2 = Clock::now();	// merge sorting
	stoogeSort(arr2, 0, n2 - 1);
	time_point < Clock > end2 = Clock::now();
	milliseconds diff2 = duration_cast < milliseconds > (end2 - start2);

	time_point < Clock > start3 = Clock::now();	// merge sorting
	stoogeSort(arr3, 0, n3 - 1);
	time_point < Clock > end3 = Clock::now();
	milliseconds diff3 = duration_cast < milliseconds > (end3 - start3);

	time_point < Clock > start4 = Clock::now();	// merge sorting
	stoogeSort(arr4, 0, n4 - 1);
	time_point < Clock > end4 = Clock::now();
	milliseconds diff4 = duration_cast < milliseconds > (end4 - start4);

	time_point < Clock > start5 = Clock::now();	// merge sorting
	stoogeSort(arr5, 0, n5 - 1);
	time_point < Clock > end5 = Clock::now();
	milliseconds diff5 = duration_cast < milliseconds > (end5 - start5);

	time_point < Clock > start6 = Clock::now();	// merge sorting
	stoogeSort(arr6, 0, n6 - 1);
	time_point < Clock > end6 = Clock::now();
	milliseconds diff6 = duration_cast < milliseconds > (end6 - start6);

	time_point < Clock > start7 = Clock::now();	// merge sorting
	stoogeSort(arr7, 0, n7 - 1);
	time_point < Clock > end7 = Clock::now();
	milliseconds diff7 = duration_cast < milliseconds > (end7 - start7);

	time_point < Clock > start8 = Clock::now();	// merge sorting
	stoogeSort(arr8, 0, n8 - 1);
	time_point < Clock > end8 = Clock::now();
	milliseconds diff8 = duration_cast < milliseconds > (end8 - start8);

	time_point < Clock > start9 = Clock::now();	// merge sorting
	stoogeSort(arr9, 0, n9 - 1);
	time_point < Clock > end9 = Clock::now();
	milliseconds diff9 = duration_cast < milliseconds > (end9 - start9);

	time_point < Clock > start10 = Clock::now();	// merge sorting
	stoogeSort(arr10, 0, n10 - 1);
	time_point < Clock > end10 = Clock::now();
	milliseconds diff10 = duration_cast < milliseconds > (end10 - start10);

	cout << "merge sort lengths and times \n" << endl;
	cout << "n , " << "time" << endl;
	cout << "---------------" << endl;
	cout << n1 << ", " << diff.count() << "ms" << endl;
	cout << n2 << ", " << diff2.count() << "ms" << endl;
	cout << n3 << ", " << diff3.count() << "ms" << endl;
	cout << n4 << ", " << diff4.count() << "ms" << endl;
	cout << n5 << ", " << diff5.count() << "ms" << endl;
	cout << n6 << ", " << diff6.count() << "ms" << endl;
	cout << n7 << ", " << diff7.count() << "ms" << endl;
	cout << n8 << ", " << diff8.count() << "ms" << endl;
	cout << n9 << ", " << diff9.count() << "ms" << endl;
	cout << n10 << ", " << diff10.count() << "ms" << endl;

	return 0;
}
