#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.33/LongLong.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest133
{
	TEST_CLASS(UnitTest133)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            LongLong a;
            a.Init(123, 456);
            Assert::AreEqual(123L, a.getUpper());
            Assert::AreEqual(456L, a.getLower());

            LongLong b;
            b.Init(789, 012);
            Assert::AreEqual(789L, b.getUpper());
            Assert::AreEqual(012L, b.getLower());

            LongLong c = add(a, b);
            Assert::AreEqual(912L, c.getUpper());
            Assert::AreEqual(468L, c.getLower());

            LongLong d = multiply(a, b);
            Assert::AreEqual(97047L, d.getUpper());
            Assert::AreEqual(5472L, d.getLower());
		}
	};
}
