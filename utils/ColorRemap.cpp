// ColorRemap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fmt/format.h>
#include <fmt/ostream.h>
#include "fstream"
using namespace std;
int main(int argn, char* args[])
{
	if (argn != 3)
	{
		printf("Args != 3 aka no input and/or output specified");
		return 1;
	}
	if (!args[1])
	{
		printf("Args[1] aka input file is missing\n");
		return 1;
	}
	if (!args[2])
	{
		printf("Args[2] aka output file is missing\n");
		return 1;
	}
	ifstream inputFile(args[1]);
	ofstream outputFile(args[2]);
	ifstream inputFromColors("fromColors");
	ifstream inputToColors("toColors");
	if (!inputFile.is_open())
	{
		printf("Input file not found\n");
		return 1;
	}
	if (!outputFile.is_open())
	{
		printf("Output file not found\n");
		return 1;
	}
	if (!inputFromColors.is_open())
	{
		printf("From Colors file not found\n");
		return 1;
	}
	if (!inputToColors.is_open())
	{
		printf("To Colors file not found\n");
		return 1;
	}
	string buffer;
	buffer.clear();
	vector<string> fromColors;
	vector<string> toColors;

	while (getline(inputFromColors, buffer))
	{
		fromColors.push_back(buffer);
		buffer.clear();
	}
	inputFromColors.close();

	while (getline(inputToColors, buffer))
	{
		toColors.push_back(buffer);
		buffer.clear();
	}
	inputToColors.close();

	if (fromColors.size() != toColors.size())
	{
		printf("fromColors.size(%d) != toColors.size(%d)\n", fromColors.size(), toColors.size());
		return 1;
	}

	int replaces = 0;
	//	printf("Start lining\n");
	while (getline(inputFile, buffer))
	{
		//printf("Start iterating\n");
		while (1)
		{
			bool bNotFound = true;
			for (size_t i = 0; i < fromColors.size(); i++)
			{
				string from = fromColors[i];
				string to = toColors[i];
				if (!from._Equal(to)) {
					size_t id = buffer.find(from);
					if (id != string::npos)
					{
						buffer = buffer.replace(id, to.length(), to);
						bNotFound = false;
						replaces++;
					}
				}
			}
			if (bNotFound) break;
		}
		//printf("End iterating\n");
		outputFile << buffer << "\n";
		buffer.clear();
	}
	//printf("End lining\n");
	printf("%d\n", replaces);
	inputFile.close();
	outputFile.close();
	printf("Replaced\n");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
