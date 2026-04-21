#include "matrix.h"
#include <vector>

kenken::Matrix::Matrix(uchar size)
    : size_(size), matrix_(std::vector(size, std::vector(size, uchar(0)))) {};

uchar kenken::Matrix::GetCell(uchar row, uchar col) const {
  return this->matrix_[row][col];
}

void kenken::Matrix::SetCell(uchar row, uchar col, uchar value) {
  this->matrix_[row][col] = value;
}

uchar kenken::Matrix::Size() const { return this->size_; }
