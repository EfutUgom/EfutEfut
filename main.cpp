#include <iostream>
using namespace std;
int main() {
    // Define the 1x2 matrix
    int matrix1[1] = {20}; // Replace these values with your desired elements

    // Define the 2x2 matrix
    int matrix2[2][2] = {{1, 2}, {0, 4}}; // Replace these values with your desired elements

    // Initialize the result matrix
    int result[1][2] = {0}; // Initialize all elements to zero

    // Perform matrix multiplication
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Result of matrix multiplication:" <<endl;
    cout << result[0][0] << " " << result[0][1] <<endl;

    return 0;
}
