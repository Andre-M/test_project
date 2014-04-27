#pragma once

#include <iostream>
#include <string>

namespace TestFunctions
{
	class TestClass
	{
	public:
		void swap_by_ref(int &a, int &b)
		{
			int temp = a;
			a = b;
			b = temp;
		}

		void swap_by_ptr(int * a, int * b)
		{
			int * temp = a;
			a = b;
			b = temp;
		}
	private:
	}; // class TestClass
} // namespace TestFunctions


