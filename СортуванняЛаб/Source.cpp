#include<iostream>
#include<ctime>
using namespace std;
int index = 0;

void RandArr(int array[],int size) {
	srand(time(0));
	for (int i = 0; i < size;i++) {
		array[i] = 1 + rand() % 100;
	}
}
void ShowArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
		index++;
	}
	cout << endl;
}
void ShowElement(int array[], int size) {
	int element = 0;
	cout << "Enter elements number which you want to see: " << endl;
	cin >> element;
	if (element<1 || element>size) {
		cout << "Error: invalid number!" << endl;
	}
	else {
			cout << element-1 <<" "<< array[element - 1] << endl;
	}
}

void SortZrost_bubble(int array[], int size,int spadZrost,int sposib) {

		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (array[j]>array[j + 1]) {
					int temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
}
void SortZrost_select(int array[], int size, int spadZrost, int sposib) {
	for (int i = 0; i < size; i++) {
		int temp = array[0];
		for (int j = i + 1; j < size; j++) {
			if (array[i]>array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void SortZrost_insert(int array[], int size, int spadZrost, int sposib) {
	int temp = 0;
	int indexPr = 0;
	for (int i = 1; i < size; i++) {
		temp = array[i];
		indexPr = i - 1;
		while (indexPr >= 0 && array[indexPr]>temp) {
			array[indexPr + 1] = array[indexPr];
			array[indexPr] = temp;
			indexPr--;
		}
	}
}
int main() {
	const int size = 100;
	int Masyv[size];
	int action = 0;
	do {
		cout << "\t\t\tSelect array manipulation: \n\n";
		cout << "1. Fill in an array with random numbers" << endl;
		cout << "2. Show array" << endl;
		cout << "3. Show the index of the array element you want " << endl;
		cout << "4. Sort array" << endl;
		cout << "5. Show average arithmetic" << endl;
		cout << "6. Sort elements rkatni 5" << endl;
		cout << "7. Exit" << endl;
		cin >> action;

		switch (action) {
		case 1: {
			RandArr(Masyv, size);
		}break;
		case 2: {
			ShowArray(Masyv, size);
		}break;
		case 3: {
			ShowElement(Masyv, size);
		}break;
		case 4: {
			cout << "Select  sort: " << endl;
			cout << "1- Po zrostannu " << endl;
			cout << "2- Po spadannu " << endl;
			int spadZrost = 0;
			cin >> spadZrost;
			cout << "Choose one of the sorting methods: " << endl;
			cout << "1. bubble" << endl;
			cout << "2. select" << endl;
			cout << "3. insert" << endl;
			int sposib = 0;
			cin >> sposib;
			if (spadZrost==1&& sposib==1) {
				SortZrost_bubble(Masyv, size, spadZrost, sposib);
			}
			else if (spadZrost == 1 && sposib == 2) {
				SortZrost_select(Masyv, size, spadZrost,sposib);
			}
			else if (spadZrost == 1 && sposib == 3) {
				SortZrost_insert(Masyv, size, spadZrost, sposib);
			}
		}break;
		case 5: {

		}break;
		case 6: {

		}break;
		case 7: {
			cout << "BYE!" << endl;
			break;
		}
		}

	} while (action != 7);

	system("pause");
	return 0;
}