#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int size = 10; 
    float* array = new float[size]; 

    cout << "Generated array:" << endl;
    for (int i = 0; i < size; i++) {
        array[i] = static_cast<double>(rand()) / RAND_MAX * 4 - 2; 
        cout << array[i] << " "; 
    }
    cout << endl;


    int positiveCount = 0, negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positiveCount++;
        } else if (array[i] < 0) {
            negativeCount++;
        }
    }


    cout << "\nTotal positive numbers: " << positiveCount << endl;
    cout << "Total negative numbers: " << negativeCount << endl;

    delete[] array;
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int rows = 3, cols = 3;
    int** matrix = new int*[rows]; 
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    cout << "Generated matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 50 + 1;
            cout.width(4);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMain diagonal elements: ";
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary diagonal elements: ";
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][cols - 1 - i] << " ";
    }
    cout << endl;

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
;
            }
        }
    }
    cout << "\nTotal even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
