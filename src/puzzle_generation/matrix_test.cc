#include "puzzle_generation/matrix.h"
#include <gtest/gtest.h>

TEST(MatrixTest, Construct_MatrixOfGivenSize_ReturnsGivenSize) {
    for (uchar s : {0, 1, 3, 4, 9}) {
        kenken::Matrix m(s);
        ASSERT_EQ(m.Size(), s);
    }
}

TEST(MatrixTest, SetAndGet_RandomValues_ReturnsSetValue) {
    kenken::Matrix m(7);
    for (uchar s : {0, 1, 3, 4, 9}) {
        m.SetCell(0, 0, s);
        ASSERT_EQ(m.GetCell(0, 0), s);

        m.SetCell(4, 2, s);
        ASSERT_EQ(m.GetCell(4, 2), s);

        m.SetCell(0, 6, s);
        ASSERT_EQ(m.GetCell(0, 6), s);

        m.SetCell(0, 0, s + 1);
        ASSERT_EQ(m.GetCell(0, 0), s + 1);
    }
}
