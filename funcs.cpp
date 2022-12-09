#include <iostream>
#include <vector>
#include "funcs.h"

std::vector<int> makeVector(int n)
{
	std::vector<int> temp;
	for(int i=0;i<n;i++)
	{
		temp.push_back(i);
	}
	return temp;
}

std::vector<int> goodVibes(const std::vector<int>& v)
{
	std::vector<int> temp;
	for(int i=0;i<v.size();i++)
	{
		if(v.at(i)>0)
		{
			temp.push_back(v.at(i));
		}
	}
	return temp;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
	for(int i=0;i<vegeta.size();i++)
	{
		goku.push_back(vegeta.at(i));
	}
	vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
	std::vector<int> temp;
	int lengthS;
	int lengthL;
	int num;
	if(v1.size()<v2.size())
	{
		lengthS=v1.size();
		lengthL=v2.size();
		num=2;
	} else {
		lengthS=v2.size();
		lengthL=v1.size();
		num=1;
	}
	for(int i=0;i<lengthS;i++)
	{
		temp.push_back(v1.at(i)+v2.at(i));
	}
	for(int j=lengthS;j<lengthL;j++)
	{
		if(num==2)
		{
			temp.push_back(v2.at(j));
		}
		if(num==1)
		{
			temp.push_back(v1.at(j));
		}
	}
	return temp;
}

