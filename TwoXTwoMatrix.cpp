//
// Created by spect on 11/6/2026.
//

#include "TwoXTwoMatrix.h"

#include <iostream>
#include <utility>


TwoXTwoMatrix::TwoXTwoMatrix(std::string  name, int inputMatrix[2][2])
    : name(std::move(name))
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix[i][j] = inputMatrix[i][j];
        }
    }
}

TwoXTwoMatrix TwoXTwoMatrix::operator+(const TwoXTwoMatrix& rhsMatrix) const
{
    int sumMatrix[2][2]{};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sumMatrix[i][j] = this->matrix[i][j] + rhsMatrix.matrix[i][j];
        }
    }

    TwoXTwoMatrix sum("Sum Matrix", sumMatrix);

    return sum;
}

TwoXTwoMatrix TwoXTwoMatrix::operator-(const TwoXTwoMatrix& rhsMatrix) const
{
    int differenceMatrix[2][2]{};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            differenceMatrix[i][j] = this->matrix[i][j] - rhsMatrix.matrix[i][j];
        }
    }

    TwoXTwoMatrix difference("Difference Matrix", differenceMatrix);

    return difference;
}

TwoXTwoMatrix TwoXTwoMatrix::operator*(const TwoXTwoMatrix& rhsMatrix) const
{
    int productMatrix[2][2]{};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                productMatrix[i][j] += this->matrix[i][k] * rhsMatrix.matrix[k][j];
            }
        }
    }

    TwoXTwoMatrix product("Product Matrix", productMatrix);

    return product;
}

void TwoXTwoMatrix::print() const
{
    std::cout << name << " contains: " << std::endl;
    for (const auto i : matrix)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << i[j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}