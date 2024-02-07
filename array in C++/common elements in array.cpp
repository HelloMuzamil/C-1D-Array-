#include<iostream>
using namespace std;

int main() {
    int n1;
    cout << "Enter the Size of First array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter the elements in array:" << endl;
    for (int i = 0; i < n1; i++) 
	{
        cout << "Element no " << i  << ": ";
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the size of Second array: ";
    cin >> n2;

    if (n2 != n1) {
        cout << "Arrays must have equal size for finding common elements." << endl;
        return 0;
    }

    int arr2[n2];
    cout << "Enter the elements in array:" << endl;
    for (int j = 0; j < n2; j++) {
        cout << "Element no " << j  << ": ";
        cin >> arr2[j];
    }

    cout << "Common elements: ";
    for (int i = 0; i < n1; i++) {
        for (int k = 0; k < n2; k++) {
            if (arr1[i] == arr2[k]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout << endl;

    return 0;
}

