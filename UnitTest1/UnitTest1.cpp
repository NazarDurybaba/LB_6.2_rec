#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_6.2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCreateArray)
		{
			int n = 10;
			int* arr = new int[n];
			create_array(arr, n);
			Assert::AreEqual(n, n);
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(i, arr[i]);
			}
			delete[] arr;
		}

		TEST_METHOD(TestCountOdd)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int n = sizeof(arr) / sizeof(arr[0]);
			int count = count_odd(arr, n);
			Assert::AreEqual(3, count);
		}
	};
}