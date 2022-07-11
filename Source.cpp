#include<iostream>
using namespace std;

int length(char arr[]);
void rev(char arr[]);

void main() {
	char name[100];
	cout << " Write the name : " << endl;
	cin.getline(name, 100);
	rev(name);
	cout << "rev name : " << name << endl;
}

int length(char arr[]) {
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}
void rev(char arr[]) {
	int S = 0;
	int E = length(arr) - 1;
	while (S < E) {
		swap(arr[S], arr[E]);
		S++;
		E--;
	}
}