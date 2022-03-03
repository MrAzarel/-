#include <iostream>
using namespace std;

void Sort(int* mass, int size) {
	int counter = 0;
	for (int i = 1; i < size; i++) {
		for (int j = i; j > 0 && mass[j - 1] > mass[j]; j--) {
			counter++;
			int tmp = mass[j - 1];
			mass[j - 1] = mass[j];
			mass[j] = tmp;
		}
	}
	cout << counter << endl;
}

int main()
{
    int* mass;
    int size;

    cout << "n = ";
    cin >> size;

    if (size <= 0) {
        cerr << "Invalid size" << endl;
        return 1;
    }

    mass = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> mass[i];
    }

    Sort(mass, size);

    delete[] mass;

    return 0;
}
