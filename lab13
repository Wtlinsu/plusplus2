#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int matrix[5][5];  
    int *ptr = &matrix[0][0];  

    int evenCount = 0, oddCount = 0;
    int size = 5;

   
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(ptr + i * size + j) = rand() % 99 + 1;
        }
    }

  
    cout << "Матриця:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout.width(4);
            cout << *(ptr + i * size + j);
        }
        cout << endl;
    }

   
    cout << "\nГоловна діагональ: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i * size + i) << " ";
    }

    cout << "\nПобічна діагональ: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i * size + (size - 1 - i)) << " ";
    }

 
    for (int i = 0; i < size * size; i++) {
        if (*(ptr + i) % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "\nКількість парних: " << evenCount;
    cout << "\nКількість непарних: " << oddCount << endl;

    return 0;
}
