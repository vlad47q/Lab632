#include <iostream>
#include <iomanip>

using namespace std;

void inputArray(int* arr, int arrLength, int index = 0) {

    if (index == arrLength) {
        return;
    }

    cout << "arr[" << index << "] = "; cin >> arr[index];

    inputArray(arr, arrLength, index + 1);
}

void printArray(int* arr, int arrLength, int index = 0) {

    if (index == arrLength) {
        cout << endl;
        return;
    }

    cout << setw(5) << arr[index];
    printArray(arr, arrLength, index + 1);
}

int amountOfEvenNums(int* arr, int arrLength, int index = 0, int counter = 0) {

    if (index == arrLength) {
        return counter;
    }

    if (arr[index] % 2 == 0) {
        counter++;
    }

    amountOfEvenNums(arr, arrLength, index + 1, counter);
}


int main() {

    int n;
    cout << "Array size is: "; cin >> n;
    cout << endl;
    int* a = new int[n];

    inputArray(a, n);
    printArray(a, n);
    cout << "Amount of even numbers is: " << amountOfEvenNums(a, n);
}