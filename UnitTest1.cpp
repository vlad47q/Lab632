#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int arr[size];
			
			for (int i = 0; i < size; i++) {
				arr[i] = i + 1;
			}

			int tested = amountOfEvenNums(arr, size);

			Assert::AreEqual(tested, 5);
		}
	};
}
