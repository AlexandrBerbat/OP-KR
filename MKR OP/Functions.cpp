#include "Header.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;



void results_output(int *Arr,int symb1,int symb2,int symb3)
{
	string output = "results.txt";

	ofstream results;

	results.open(output, ofstream::app);

	if (!results.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{

		if (Arr[0] == 0 && Arr[1] == 0 && !(Arr[2] % 2))
		{
			results << "���������� ������ ���������������.\n" << " () - " << symb1 << endl << " [] - " << symb2 << endl << " '' - " << symb3 / 2 << endl;
		}
		else
		{
			results << "���������� ������ �� �������� ����������������.\n";
		}
	}
}