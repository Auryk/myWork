/*
 * main.cpp
 *
 *  Created on: Nov 6, 2014
 *      Author: 709252
 */

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;





struct data
{
	int id;
	string state;
	double money;
};
const char *fileName = "crime1.txt";
ifstream file;
vector<data>::iterator it;
vector<data> list;

int input()
{
	file.open(fileName);
	while(!file.eof())
	{
		data temp;
		file >> temp.id >> temp.state >> temp.money;
		list.push_back(temp);
	}
	file.close();
	return 0;
}

int printCrime()
{

	for(it = list.begin(); it != list.end(); it++)
	{
		cout << (*it).id << endl;
	}
	return 0;
}

void insertSort(vector<int>::iterator begin, vector<int>::iterator end)
{
    for (vector<int>::iterator i = begin + 1; i < end; ++i)
    {
        for(vector<int>::iterator j = i; *j < *(j - 1) && j > begin; --j )
        {
            std::iter_swap((j - 1), j);
        }
    }
}

int stateOrder()
{
	int j;
	vector<data>::iterator j;
	data temp;

	for (it = list.begin() + 1; it != list.end(); ++it)
	{
		for(j == it;(*j).state.compare(*(j -1)).state) < 0 && j > list.begin(); --j)
		{

		}
	}
	return 0;
}

int dollarOrder()
{
	return 0;
}

int main()
{
	input();
	printCrime();
	system("Pause");
	return 0;
}


