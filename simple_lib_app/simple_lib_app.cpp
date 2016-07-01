// simple_lib_app.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

#include "Source.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cout << endl << "Start of this test app." << endl << endl;


	printToConsole("Test message");


	cout << endl << endl << "End of app :)" << endl << endl;

	system("pause");

	return 0;
}

