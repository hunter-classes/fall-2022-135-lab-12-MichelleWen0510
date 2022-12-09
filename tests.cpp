#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("CREATE")
{
	std::vector<int> testv1 = makeVector(6);
	CHECK(testv1.front()==0);
	CHECK(testv1.back()==5);
	CHECK(testv1.size()==6);
}

TEST_CASE("POSITIVE")
{
	std::vector<int> testv2{1,-5,2,-3,5,3,4,-7};
	std::vector<int> temp;
        temp = goodVibes(testv2);
	std::vector<int> compare{1,2,5,3,4};
	CHECK(temp==compare);
}

TEST_CASE("COMBINE")
{
	std::vector<int> testv3{1,2,3,4};
	std::vector<int> testv4{5,6,7,8};
	std::vector<int> compare{1,2,3,4,5,6,7,8};
	gogeta(testv3,testv4);
	CHECK(testv3==compare);
	CHECK(testv4.empty());
}

TEST_CASE("ADD")
{
	std::vector<int> testv5{1,2,3,4,5};
	std::vector<int> testv6{2,2,4,1};
	std::vector<int> temp;
        temp = sumPairWise(testv5,testv6);
	std::vector<int> compare{3,4,7,5,5};
	CHECK(temp==compare);

}
