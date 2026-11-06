#include <iostream>
#include <limits>

#include "TwoXTwoMatrix.h"


int main()
{
    std::cout << "Enter your first 2x2 matrix values: \n" << "(Use spaces between 4 INTEGER values)" << std::endl;

    int matrixOne[2][2]{};
    int matrixTwo[2][2]{};

    for (auto & i : matrixOne)
    {
        for (int & j : i)
        {
            while (!(std::cin >> j))
            {
                std::cout << "Invalid input. Please enter a valid integer: ";

                std::cin.clear();

                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    std::cout << "Enter your second 2x2 matrix values: \n" << "(Use spaces between 4 INTEGER values)" << std::endl;

    for (auto & i : matrixTwo)
    {
        for (int & j : i)
        {
            while (!(std::cin >> j))
            {
                std::cout << "Invalid input. Please enter a valid integer: ";

                std::cin.clear();

                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    const TwoXTwoMatrix one("Matrix One", matrixOne);
    const TwoXTwoMatrix two("Matrix Two", matrixTwo);

    one.print();
    two.print();

    const TwoXTwoMatrix sumMatrix = one + two;
    const TwoXTwoMatrix differenceMatrix = one - two;
    const TwoXTwoMatrix productMatrix = one * two;

    sumMatrix.print();
    differenceMatrix.print();
    productMatrix.print();


    return 0;
}