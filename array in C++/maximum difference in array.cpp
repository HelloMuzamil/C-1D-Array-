#include <iostream>
using namespace std;
int main() {
     int size = 5; 
    int arr[size];
    cout << "Enter " << size << " elements of the array:" <<endl;
    for (int i = 0; i < size; ++i) {
     cin >> arr[i];
    }
    int maxDifference = 0;
    for (int i = 1; i < size; ++i) {
        int difference = arr[i] - arr[i - 1];
        if (difference > maxDifference) {
            maxDifference = difference;
        }
    }
  cout << "Maximum difference between two consecutive elements: " << maxDifference;

    return 0;
}

