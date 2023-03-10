#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* length);

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(checklengthValid) // as length is between 1 and 99
		{
			int length = 0;
			setLength(55, &length);
			Assert::AreEqual(55, length);
		}
		TEST_METHOD(ChechlengthInvalid)   //  as length is greater then 99
		{
			int length = 0;
			setLength(100, &length);
			Assert::AreEqual(100, length);
		}
		TEST_METHOD(checklengthInvaid)    // as length is smaller than 1
		{
			int length = 0;
			setLength(-3, &length);
			Assert::AreEqual(-3, length);
		}

		void setLength(int input, int* length) {
			if (input >= 1 && input <= 99) {
				*length = input;
			}
		}
		TEST_METHOD(setwidthInvalidgreater) // as width is greater then 99
		{
			int width = 0;
			setWidth(100, &width);
			Assert::AreEqual(100, width);
		}
		TEST_METHOD(Setwidthvalid)    // as width is between 1 and 99
		{
			int width = 0;
			setWidth(55, &width);
			Assert::AreEqual(55, width);
		}
		TEST_METHOD(setwidthInvalidlessthan1)    // as width is less than  1
		{
			int width = 0;
			setWidth(-2, &width);
			Assert::AreEqual(-2, width);
		}
		void setWidth(int input, int* width) {
			if (input >= 1 && input <= 99) {
				*width = input;
			}
		}
	};
}