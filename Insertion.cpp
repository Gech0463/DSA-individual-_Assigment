#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    
    clock_t start = clock();

    insertionSort(arr);


    clock_t end = clock();

    double time_taken = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "Insertion Sort Time: " << time_taken << " seconds\n";

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

