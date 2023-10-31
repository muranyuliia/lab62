#include "pch.h"
#include "CppUnitTest.h"
#include "../lab62/lab62.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(SumIndicesMinMaxTest)
        {
            int arr[] = { 10, 5, 7, 3, 8 };
            int n = 5;
            int minIndex = 0;
            int maxIndex = 0;
            int result = calculateSumMinMaxIndices(arr, n, minIndex, maxIndex, 0);
            Assert::AreEqual(10, result);
        }
    };
}