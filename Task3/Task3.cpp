// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int** convertToMatrix(int* flatArray, int numRows, int numCols) {
    int** matrix = new int* [numRows];
    for (int i = 0; i < numRows; ++i)
        matrix[i] = new int[numCols];

    for (int i = 0, k = 0; i < numRows; ++i)
        for (int j = 0; j < numCols; ++j)
            matrix[i][j] = flatArray[k++];

    return matrix;
}

void printMatrix(int** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j)
            std::cout << matrix[i][j] << ' ';
        std::cout << '\n';
    }
}

int main() {
    int numRows, numCols;

    std::cout << "Введіть кількість строк: ";
    std::cin >> numRows;

    std::cout << "Введіть кількість столбців: ";
    std::cin >> numCols;

    int totalElements = numRows * numCols;
    int* flatArray = new int[totalElements];

    std::cout << "Введіть " << totalElements << " Елементів масива:\n";
    for (int i = 0; i < totalElements; ++i)
        std::cin >> flatArray[i];

    int** matrix = convertToMatrix(flatArray, numRows, numCols);

    printMatrix(matrix, numRows, numCols);

    return 0;
}
