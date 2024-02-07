#include<iostream>
using namespace std;

int main() {
    int subject;
    cout << "How many subjects do you want to enter: ";
    cin >> subject;

    string name[subject];

    for (int i = 0; i < subject; i++) {
        cout << "Enter Subject names " << i + 1 << ": ";
        cin >> name[i];
    }

    int student;
    cout << "How many student records do you want to enter: ";
    cin >> student;

    int score[subject][student];

    for (int i = 0; i < student; i++) {
        cout << "Enter scores for student " << i + 1 << " subjects: ";
        for (int j = 0; j < subject; j++) {
            cin >> score[i][j];
        }
    }

    for (int i = 0; i < student; i++) {
        cout << name[i] << " ";
        float sum = 0;
        for (int j = 0; j < subject; j++) {
            cout << score[i][j] << " ";
            sum = sum + score[i][j];
        }
        float aver = sum / subject;
        cout << "Average: " << aver << endl;
    }

    return 0;
}

