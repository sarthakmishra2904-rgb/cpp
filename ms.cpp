#include <iostream>
#include <vector>

// Merges two sorted sub-vectors into one sorted sub-vector
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary vectors to hold the split data
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copy data to temporary vectors
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    // Merge the temporary vectors back into arr[left..right]
    int i = 0; // Initial index of first sub-vector
    int j = 0; // Initial index of second sub-vector
    int k = left; // Initial index of merged sub-vector

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function that implements Merge Sort
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return; // Base case: sub-vector has 1 or 0 elements

    int mid = left + (right - left) / 2; // Prevents potential integer overflow

    // Sort first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
}

// Helper function to print the vector
void printVector(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {38, 27, 43, 3, 9, 82, 10};

    std::cout << "Original array: ";
    printVector(data);

    // Perform merge sort
    mergeSort(data, 0, data.size() - 1);

    std::cout << "Sorted array:   ";
    printVector(data);

    return 0;
}
