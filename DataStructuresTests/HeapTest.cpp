#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../DataStructures/MinHeapVector.h"

class MockTest {
public:
    MOCK_METHOD(void, SomeMethod, ());
};

TEST(TestCaseName, TestName) {
    MockTest mock;
    EXPECT_CALL(mock, SomeMethod);
    mock.SomeMethod();
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}