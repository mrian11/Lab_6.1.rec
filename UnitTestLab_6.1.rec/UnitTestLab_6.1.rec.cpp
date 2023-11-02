#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_6.1_rec/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab61rec
{
	TEST_CLASS(UnitTestLab61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a2[] = { 1, 2, 3, 4, 5, 6 };
			int n2 = 6;
			int result2 = Number(a2, n2, 0);
			int expected2 = 0; 
			Assert::AreEqual(result2, expected2);
		}
	};
}
