#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " space-separated numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}