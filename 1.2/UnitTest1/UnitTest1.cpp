#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\Політех v2\ООП\1.2\1.2\1.2\Circle.h"
#include "C:\Users\User\Desktop\Політех v2\ООП\1.2\1.2\1.2\Circle.cpp"
#include "C:\Users\User\Desktop\Політех v2\ООП\1.2\1.2\1.2\Source.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Circle w(1, 2, 3);
			bool t;
			t = w.Init(1, 2, 3);

			Assert::AreEqual(t, true);

		}
	};
}
