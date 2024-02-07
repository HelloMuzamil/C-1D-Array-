#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "How many array size you want to declare: ";
    cin >> n;

    int a[n];  // Declare array with size n

    for(int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    float ave = static_cast<float>(sum) / n;  // Calculate average

    cout << "Your sum is: " << sum << endl;
    cout << "Your average is: " << ave;

    return 0;
}
