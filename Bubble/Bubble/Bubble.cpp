#include <iostream>

using namespace std;

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

    int t;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mass[j] > mass[j + 1]) {
                t = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;

    delete[] mass; 

    return 0;
}

