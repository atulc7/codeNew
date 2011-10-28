//Project codeNew
//Class implementation
//codeNew.cpp
#include <string>
#include <iostream>
#include "codeNew.h"
#include <fstream>

using namespace std;

string fileOp::createFile()
{
	char name[20];
	string LINE;
	cout << " Enter the name of the header file: " << endl;
	cin >> name;
	ofstream myHeader;
	ifstream myConfig;
	myHeader.open(name, ios::out);
	if (myHeader.is_open())
	{
		cout << " File opened successfully. " << endl;
		myConfig.open("conf.txt");
		{
			while (myConfig.good())
			{
				getline (myConfig, LINE, '\n');
				cout << LINE << endl;
				myHeader << "#" << LINE << endl;
			}
		}
		myHeader.close();
	}
	else
	cout <<" Unable to open the file. " << endl;
	return name;
}

/*--------------------------------------------------------------------*/
