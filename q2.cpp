#include<iostream>
#include<limits.h>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void findSecondLargestAndSmallest(int arr[], int size, int &secondLargest, int &secondSmallest) {
    int largest = INT_MIN, smallest = INT_MAX;
    secondLargest = INT_MIN;
    secondSmallest = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int secondLargest, secondSmallest;
    findSecondLargestAndSmallest(arr, size, secondLargest, secondSmallest);

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    if (secondSmallest == INT_MAX) {
        cout << "There is no second smallest element." << endl;
    } else {
        cout << "Second smallest element: " << secondSmallest << endl;
    }

    return 0;
}