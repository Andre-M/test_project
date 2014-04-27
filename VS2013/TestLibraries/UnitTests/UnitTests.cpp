// UnitTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest/gtest.h"
//#include "TestLibraries/functions_for_testing.h"


//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}


int main(int argc, char **argv) 
{
	::testing::InitGoogleTest(&argc, argv);
	//return RUN_ALL_TESTS();

	return 0;
}

TEST(TestSwaps, SwapTest)
{
	int a = 99;
	int b = 1001;



}