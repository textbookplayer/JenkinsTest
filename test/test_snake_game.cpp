// test_snake_game.cpp
#include "src/snake_game.cpp" // Include the source code

#include <gtest/gtest.h>

TEST(SnakeGame, InitialSetup) {
    Setup();
    EXPECT_EQ(x, width / 2);
    EXPECT_EQ(y, height / 2);
    EXPECT_EQ(dir, STOP);
    // Add more expectations as needed
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
