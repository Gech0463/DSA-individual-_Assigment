
#include <iostream>
#include <limits.h>
using namespace std;

void findSecondAndThirdLargest(int arr[], int size, int &secondLargest, int &thirdLargest) {
    int firstLargest = INT_MIN;
    secondLargest = INT_MIN;
    thirdLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] != secondLargest && arr[i] != firstLargest) {
            thirdLargest = arr[i];
        }
    }
}

int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int secondLargest, thirdLargest;
    findSecondAndThirdLargest(arr, size, secondLargest, thirdLargest);

    cout << "The second largest number in the array is: " << secondLargest << endl;
    cout << "The third largest number in the array is: " << thirdLargest << endl;

    return 0;
}