#pragma once

#include <vector>

#include "common/types.h"

namespace kenken {

class Matrix {
  public:
    Matrix(uchar size);

    uchar GetCell(uchar row, uchar col) const;

    void SetCell(uchar row, uchar col, uchar value);

    uchar Size() const;

  private:
    uchar size_;

    std::vector<std::vector<uchar>> matrix_;
};

} // namespace kenken
