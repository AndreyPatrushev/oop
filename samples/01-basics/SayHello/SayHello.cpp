// SayHello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "What is your name?\n";

	string name;
	getline(cin, name);

	if (name.empty())
	{
		name = "anonymous :)";
	}

	cout << "Hello " << name << "\n";

	return 0;
}
