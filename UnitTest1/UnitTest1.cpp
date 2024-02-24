#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.33/LongLong.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong l1, l2;
			l1.Init(5, 10);
			l2.Init(3, 7);
			LongLong expected;
			expected.Init(8, 17);

			// Act
			LongLong result = add(l1, l2);

			// Assert
			Assert::AreEqual(expected.getUpper(), result.getUpper());
			Assert::AreEqual(expected.getLower(), result.getLower());
			
		}
	};
}
