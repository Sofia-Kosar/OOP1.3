#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.33/LongLong.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
           
			LongLong ll;
			ll.setUpper(10);
			ll.setLower(20);

			Assert::AreEqual(10L, ll.getUpper());
			Assert::AreEqual(20L, ll.getLower());
		}
	};
}
