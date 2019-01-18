#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void sort(int arr[], int size);
void swap(int arr[], int first_idx, int second_idx);
void displayArr(int arr[], int size);
void copyArr(int arr_from[], int arr_to[], int size);
int getSmallestIdx(int arr[], int from_idx, int size);

void sort(int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        int smallest_idx = getSmallestIdx(arr, i, size);
        swap(arr, i, smallest_idx);
    };
};

void swap(int arr[], int first_idx, int second_idx) {
    int temp = arr[first_idx];
    arr[first_idx] = arr[second_idx];
    arr[second_idx] = temp;
};

void displayArr(int arr[], int size) {
    cout << "{" << arr[0];
    for (int i=1; i<size; i++) {
        cout << ", " << arr[i];
    };
    cout << "}" << endl;
};

void copyArr(int arr_from[], int arr_to[], int size) {
    for (int i=0; i<size; i++) {
        arr_to[i] = arr_from[i];
    };
};

int getSmallestIdx(int arr[], int from_idx, int size) {
    int smallest_idx = from_idx;
    for (int i=from_idx; i<size; i++) {
        if (arr[i] < arr[smallest_idx]) {
            smallest_idx = i;
        };
    };
    return smallest_idx;
};

int getLargestIdx(int arr[], int from_idx, int size) {
    int largest_idx = from_idx;
    for (int i=from_idx; i<size; i++) {
        if (arr[i] > arr[largest_idx]) {
            largest_idx = i;
        };
    };
    return largest_idx;
};

double getMean(int arr[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += arr[i];
    };

    double mean = (double )sum / (double )size;

    return mean;
};

int main() {
    srand(time(NULL));
    int size = 10;
    int arr[size];

    for (int i=0; i<size; i++) {
        arr[i] = rand() % 100;
    };

    cout.precision(5);

    cout << "Original array: ";
    displayArr(arr, size);

    int sorted_arr[size];
    copyArr(arr, sorted_arr, size);
    sort(sorted_arr, size);
    cout << "Sorted array: ";
    displayArr(sorted_arr, size);

    int largest_idx = getLargestIdx(arr, 0, size);
    int smallest_idx = getSmallestIdx(arr, 0, size);

    cout << "The largest value of the array is " << arr[largest_idx] << "..." << endl;
    cout << "The smallest value of the array is " << arr[smallest_idx] << "..." << endl;

    double mean = getMean(arr, size);

    cout << "The mean value of the array is " << mean << "..." << endl;
};
