#include <iostream>
#include <vector>
#include <string>
#include "funcs.h"

int main()
{
	std::vector<int> testv;
	testv = makeVector(6);
	std::cout << "Make vector where n=6" << std::endl;
	for(int i=0;i<testv.size();i++)
	{
		std::cout << std::to_string(testv.at(i)) + " ";
	}
	std::cout << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "Remove negatives" << std::endl;
	std::vector<int> testv1{-5,-1,3,-2,5,2,6,7};
	std::vector<int> testv2;
	testv2 = goodVibes(testv1);
	for(int j=0;j<testv1.size();j++)
        {
                std::cout << std::to_string(testv1.at(j)) + " ";
        }
	std::cout << std::endl;
	for(int k=0;k<testv2.size();k++)
        {
               std::cout << std::to_string(testv2.at(k)) + " ";
	}
	std::cout << std::endl;
	std::cout << "-------------" << std::endl;

	std::vector<int> testv3{1,2,3,4};
	std::vector<int> testv4{5,6,7,8};
	std::cout << "Combine two vectors" << std::endl;
	for(int l=0;l<testv3.size();l++)
	{
		std::cout << std::to_string(testv3.at(l)) + " ";
	}
	std::cout << std::endl;
	for(int m=0;m<testv4.size();m++)
        {
                std::cout << std::to_string(testv4.at(m)) + " ";
        }
	std::cout << std::endl;
	gogeta(testv3,testv4);
	for(int n=0;n<testv3.size();n++)
        {
		std::cout << std::to_string(testv3.at(n)) + " ";
        }
	std::cout << std::endl;

	std::cout << "-------------" << std::endl;

	std::cout << "Add elements in two vectors" << std::endl;
	std::vector<int> testv5{1,2,3,1,5};
	std::vector<int> testv6{2,4,3,1};
	std::vector<int> testv7;
	for(int x=0;x<testv5.size();x++)
	{
                std::cout << std::to_string(testv5.at(x)) + " ";
        }
	std::cout << std::endl;
	for(int y=0;y<testv6.size();y++)
	{
                std::cout << std::to_string(testv6.at(y)) + " ";
        }
        std::cout << std::endl;
	testv7 = sumPairWise(testv5,testv6);
	for(int z=0;z<testv7.size();z++)
	{
        	std::cout << std::to_string(testv7.at(z)) + " ";
	}
        std::cout << std::endl;

}
