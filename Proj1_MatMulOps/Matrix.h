// preprocessor directives
// To guard against re-definition
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
private:
    int rows;
    int cols;
    float* data; // points to where data will be at (e.g. 0x7ffef5)

public:

    // Constructor
    Matrix(int r, int c); // allocates new float[r*c]

    // Destructor - needed for managing raw resource
    ~Matrix();

    // Helper to print matrix
    void print() const;
};

#endif