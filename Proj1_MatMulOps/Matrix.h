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
    float* data; // pointer holding memory

public:

    // Constructor
    Matrix(int r, int c); // allocates new float[r*c]

    // Destructor
    ~Matrix();

    // Helper to print matrix
    void print() const;
};

#endif