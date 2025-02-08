#include <iostream>
using namespace std;

void spiral(int n) {
    int arr[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++)
            arr[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++)
            arr[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--)
            arr[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--)
            arr[i][left] = num++;
        left++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    spiral(n);
    return 0;
}