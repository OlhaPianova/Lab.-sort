#include<iostream>
#include<ctime>
#include <Windows.h>
using namespace std;
#define CLEAR system("cls");
#define SLEEP Sleep(50);
int kroc = 0;


void RandArr(int array[],int size) {
	srand(time(0));
	for (int i = 0; i < size;i++) {
		array[i] = 1 + rand() % 100;
	}
}
void ShowArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
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
			cout<<"Index: " << element-1 <<","<<" "<<"number: "<< array[element - 1] << endl;
	}
}
void SortZrost_bubble(int array[], int size) {
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (array[j]>array[j + 1]) {
					int temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					kroc++;
					for (int i = 0; i < size; i++) {
						cout << array[i] << " ";
					}
					SLEEP;
					CLEAR;
				}
			}
		}
		cout << "number of steps: " << kroc << endl;
}
void SortZrost_select(int array[], int size) {
	for (int i = 0; i < size; i++) {
		int temp = array[0];
		for (int j = i + 1; j < size; j++) {
			if (array[i]>array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				kroc++;
			}
			for (int i = 0; i < size; i++) {
				cout << array[i] << " ";
			}
			SLEEP;
			CLEAR;
		}
	}
	cout << "number of steps: " << kroc << endl;
}
void SortZrost_insert(int array[], int size) {
	int temp = 0;
	int indexPr = 0;
	for (int i = 1; i < size; i++) {
		temp = array[i];
		indexPr = i - 1;
		while (indexPr >= 0 && array[indexPr]>temp) {
			array[indexPr + 1] = array[indexPr];
			array[indexPr] = temp;
			indexPr--;
			kroc++;
			for (int i = 0; i < size;i++) {
				cout << array[i] << " ";
			}
			SLEEP;
			CLEAR;
		}
	}
	cout << "number of steps: " << kroc << endl;
}
void SortSpad_bubble(int array[],int size) {
	for (int i = size; i >0; --i) {
		for (int j = size; j >0; --j) {
			if (array[j]>array[j - 1]) {
				int temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				kroc++;
			}
			for (int i = 0; i < size; i++) {
				cout << array[i] << " ";
			}
			SLEEP;
			CLEAR;
		}
	}
	cout << "number of steps: " << kroc << endl;
}
void SortSpad_select(int array[], int size) {
	for (int i = size; i >=0; --i) {
		int temp = array[0];
		for (int j = i - 1; j >=0; --j) {
			if (array[i]>array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				kroc++;
			}
			for (int i = 0; i < size; i++) {
				cout << array[i] << " ";
			}
			SLEEP;
			CLEAR;
		}
	}
	cout << "number of steps: " << kroc << endl;
}
void SortSpad_insert(int array[], int size) {
	int temp = 0;
	int indexPr = 0;

	for (int i = 1; i < size; i++) {
		temp = array[i];
		indexPr = i - 1;
		while (indexPr >= 0 && array[indexPr]<temp) {
			array[indexPr + 1] = array[indexPr];
			array[indexPr] = temp;
			indexPr--;
			kroc++;
			for (int i = 0; i < size; i++) {
				cout << array[i] << " ";
			}
			SLEEP;
			CLEAR;
		}
	}
	cout << "number of steps: " << kroc << endl;
}
int Seredne(int array[],int size,int sum,int seredne) {
	int index = 0;
	for (int i = 0; i < size; i++) {
		 index ++;
		sum = sum + array[i];
		seredne = sum / index;
	}
	cout << "average arithmetic: " << seredne << endl;
	return seredne;
}
void kratne(int array[], int size) {
	cout << "\tKratni 5: " << endl;
	for (int i = 0; i < size; i++) {
		if (array[i]%5==0) {
			cout << array[i] << " ";
		}
	}
	cout << endl;
}
int main() {
	const int size = 15;
	int Masyv[size];
	int sum = 0;
	int seredne = 0;
	int action = 0;
	do {
		cout << "\n\t\t\tSelect array manipulation: \n\n";
		cout << "1. Fill in an array with random numbers" << endl;
		cout << "2. Show array" << endl;
		cout << "3. Show the index of the array element you want " << endl;
		cout << "4. Sort array" << endl;
		cout << "5. Show average arithmetic" << endl;
		cout << "6. Sort elements kratni 5" << endl;
		cout << "7. Exit" << endl;
		cin >> action;

		switch (action) {
		case 1: {
			RandArr(Masyv, size);
		}break;
		case 2: {
			CLEAR;
			ShowArray(Masyv, size);
		}break;
		case 3: {
			CLEAR;
			ShowArray(Masyv, size);
			cout << endl;
			ShowElement(Masyv, size);
		}break;
		case 4: {
			CLEAR;
			cout << "Choose one of the sorting methods: " << endl;
			cout << endl;
			cout << "1- Po zrostannu, bubble method " << endl;
			cout << "2- Po zrostannu, select method " << endl;
			cout << "3- Po zrostannu, insert method " << endl;
			cout << "4- Po spadannu, bubble method " << endl;
			cout << "5- Po spadannu, select method " << endl;
			cout << "6- Po spadannu, insert method " << endl;
			int method = 0;
			cin >> method;
			switch (method) {
			case 1: {
				CLEAR;
				SortZrost_bubble(Masyv, size);
				ShowArray(Masyv, size);
				cout << endl;
			}break;
			case 2: {
				CLEAR;
				SortZrost_select(Masyv, size);
				ShowArray(Masyv, size);
				cout << endl;
			}break;
			case 3: {
				CLEAR;
				SortZrost_insert(Masyv, size);
				ShowArray(Masyv, size);
				cout << endl;
			}break;
			case 4: {
				CLEAR;
				SortSpad_bubble(Masyv, size);
				ShowArray(Masyv, size);
				cout << endl;
			}break;
			case 5: {
				CLEAR;
				SortSpad_select(Masyv, size);
				ShowArray(Masyv, size);
				cout << endl;
			}break;
			case 6: {
				CLEAR;
				SortSpad_insert(Masyv, size);
				ShowArray(Masyv, size);
				cout << endl;
			}break;
			}
			
		}break;
		case 5: {
			CLEAR;
			ShowArray(Masyv, size);
			cout << endl;
			Seredne(Masyv, size, sum, seredne);
			cout << endl;
		}break;
		case 6: {
			CLEAR;
			kratne(Masyv, size);
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