#include "Matrix.h"
#include <iostream>
#include <algorithm> // needed for std::fill

// 1. Implement Constructor 
Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;

    // Calculate Size
    // treat as 1D linear memory
    int size = r * c;

    // Allocate memory
    // 'new' asks OS for block of heap memory
    // returns memory of first byte, stored in 'data'
    data = new float[size];

    // init with zeros (good practice else random values)
    // for (int i = 0; i < size; i++) {
    //     data[i] = 0.0f;
    // }
    std::fill(data, data + size, 0.0f); // (start_mem, end_mem, val)

    std::cout << "Constructed Matrix (" << rows << "x" << cols << ") at address: " << data << std::endl;
}

// 2. Implement Destructor
Matrix::~Matrix() {
    // Free memory using 'delete[]' because allocated array with new ..[]
    // without destructor = memory leak
    delete[] data;
    std::cout << "Destroyed Matrix at address: " << data << std::endl;
}

// 3. Implement PRINT helper
void Matrix::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << data[i * cols + j] << " ";
        }
        std::cout << '\n';
    }
}

