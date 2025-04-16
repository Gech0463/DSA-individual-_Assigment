#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void bubbleSort(vector<int>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    clock_t start = clock();
    bubbleSort(arr);
    clock_t end = clock();

    double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    cout << "Bubble Sort Time: " << duration << " seconds" << endl;

    cout << "Sorted array: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

