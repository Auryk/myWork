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

vector<data> list;

int input()
{
	ifstream file("crime1.txt");
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
	for(vector<data>::iterator it = list.begin(); it != list.end(); it++)
	{
		cout << it->state << endl;
	}
	return 0;
}

void stateOrder()
{
	vector<data>::iterator i, j;

	for (i = list.begin() + 1; i < list.end(); ++i)
    {
        for(j = i; j->state.compare((j-1)->state) && j > list.begin(); --j )
        {
            std::iter_swap((j - 1), j);
        }
    }
}

int dollarOrder()
{
	return 0;
}

int main()
{
	input();
	printCrime();
	stateOrder();
	printCrime();
	system("pause");
	return 0;
}


