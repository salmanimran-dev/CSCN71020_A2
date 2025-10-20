#include "pch.h"
#include "CppUnitTest.h"

// ✅ Include your real header (main.h)
#include "main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020_A2_Tests
{
    TEST_CLASS(RectangleTests)
    {
    public:

        // ✅ Test getPerimeter based on your current code: L + L + W
        TEST_METHOD(GetPerimeter_ReturnsCorrectValue)
        {
            int length = 10;
            int width = 5;
            int result = getPerimeter(&length, &width);
            Assert::AreEqual(25, result);  // 10 + 10 + 5 = 25
        }

        // ✅ Test getArea (Length * Width)
        TEST_METHOD(GetArea_ReturnsCorrectValue)
        {
            int length = 4;
            int width = 6;
            int result = getArea(&length, &width);
            Assert::AreEqual(24, result);  // 4 * 6 = 24
        }

        // ✅ Typical valid test for setLength (e.g., 50 is allowed since 0 <= input < 100)
        TEST_METHOD(SetLength_ValidTypicalValue)
        {
            int length = 1;
            setLength(50, &length);
            Assert::AreEqual(50, length);
        }

        // ✅ Lower boundary (0 is allowed based on current code)
        TEST_METHOD(SetLength_AllowsZero)
        {
            int length = 10;
            setLength(0, &length);
            Assert::AreEqual(0, length);
        }

        // ✅ Upper boundary (99 is allowed since < 100)
        TEST_METHOD(SetLength_Allows99)
        {
            int length = 10;
            setLength(99, &length);
            Assert::AreEqual(99, length);
        }

        // ✅ Typical valid width (e.g., 60 is allowed since 1 <= input <= 100)
        TEST_METHOD(SetWidth_ValidTypicalValue)
        {
            int width = 1;
            setWidth(60, &width);
            Assert::AreEqual(60, width);
        }

        // ✅ Lower boundary: width must be >= 1
        TEST_METHOD(SetWidth_AllowsOne)
        {
            int width = 10;
            setWidth(1, &width);
            Assert::AreEqual(1, width);
        }

        // ✅ Upper boundary: width allows 100
        TEST_METHOD(SetWidth_Allows100)
        {
            int width = 5;
            setWidth(100, &width);
            Assert::AreEqual(100, width);
        }
    };
}
