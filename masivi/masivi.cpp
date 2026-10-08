#include <iostream>;
#include <random>;
using namespace std;

void main() {
	// task 1

	//int numbers[10];
	//for (int i = 0; i < 10; i++) {
	//	cin >> numbers[i];
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << numbers[i] << " ";
	//}

	//task 2

	//int rnd[7];
	//int count_p = 0;
	//int count_n = 0;
	//for (int i = 0; i < 7; i++) {
	//	cout << "Enter number from -12 to 50: ";
	//	cin >> rnd[i];
	//	if (rnd[i] < 0)
	//		count_n += 1;
	//	else
	//		count_p += 1;
	//	
	//}
	//cout << "Positive count: " << count_p <<"\n" << "Negative count: " << count_n << endl;


	//task 3

	//long masiv[7];
	//for (int i = 0; i < 7; i++) {
	//	cin >> masiv[i];
	//}
	//for (int i = 0; i < 7; i++) {
	//	cout << masiv[i] << " ";
	//}
	//cout << endl;
	//int even_sum = 0;
	//for (int i = 0; i < 7; i++) {
	//	if (masiv[i] % 2 == 0) {
	//		cout << masiv[i] << " ";
	//		even_sum += masiv[i];
	//	}
	//}
	//cout << "Summa even numbers: " << even_sum << endl;


	// task 4

	//int mas[10];
	//int num = 2;
	//for (int i = 0; i < 10; i++) {
	//	mas[i] = num;
	//	num *= 2;
	//	cout << mas[i] << " ";
	//}
	//cout << endl;
	//for (int i = 9; i > 0; i--) {
	//	cout << mas[i] << " ";
	//}



	// task 5

	int arr[10] = { -1, -2, -3, 4, -5, -6, -7, 8, -9, -10 };

	for (int i = 0; i < 10; i++) {
		if (arr[i] < 0) {
			arr[i] *= -1;
			cout << arr[i] << " ";
		}
		else {
			cout << arr[i] << " ";
		}
	}



}
