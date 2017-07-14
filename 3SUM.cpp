// 3SUM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main()
{
	const int size = 100000;
	float count = 0;
	int input[size];
	ifstream file("Text.txt");
	if (file.is_open())
	{
		for (int ii = 0; ii < size; ii++)
		{
			file >> input[ii];
		}
	}

	sort(input, input + size);

	for (int i = 0; i < size; i++)
	{
		int start = 1;
		int end = size-1;

		while (start != end) {
			int sum = input[start] + input[end] + input[i];
			if (sum == 0)
			{
				count++;
				//cout << "(" << input[start] << ", " << input[end] << ", " << input[i] << ")" << endl;
				end--;
			}
			else if (sum < 0)
			{
				start++;
			}
			else
			{
				end--;
			}
		}
	}
	cout << "TOTAL SOLUTIONS: " << count << endl;
	char temp[] = "";
	cin >> temp;

    return 0;
}

