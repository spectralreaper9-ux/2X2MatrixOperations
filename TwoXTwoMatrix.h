//
// Created by spect on 11/6/2026.
//

#ifndef MATRIX_TWOXTWOMATRIX_H
#define MATRIX_TWOXTWOMATRIX_H
#include <string>


class TwoXTwoMatrix
{
    int matrix[2][2]{};
    std::string name;

public:

    TwoXTwoMatrix() = default;
    explicit TwoXTwoMatrix(std::string  name, int inputMatrix[2][2]);

    TwoXTwoMatrix operator + (const TwoXTwoMatrix& rhsMatrix) const;
    TwoXTwoMatrix operator - (const TwoXTwoMatrix& rhsMatrix) const;
    TwoXTwoMatrix operator * (const TwoXTwoMatrix& rhsMatrix) const;

    void print() const;
};


#endif //MATRIX_TWOXTWOMATRIX_H
