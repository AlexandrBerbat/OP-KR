#include "Header.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string filename = "file.txt";

	ifstream file;

	file.open(filename);

	string line;

	if (!file.is_open())
	{
		cout << "Ошибка чтения файла!";

	}
	else
	{
		cout << "Файл прочитан успешно.";
		getline(file, line);

	}

	cout << endl;

	// 0-() ; 1-[] ; 2-"" ;
	
	int Arr[3];

	for (int i = 0; i < 3; i++)
	{
		Arr[i] = 0;
	}

	int symb1 = 0; // '()'
	int symb2 = 0; // '[]'
	int symb3 = 0; // ' "" '

	int size = line.length();

	for (int k = 0; k < size; k++)
	{

		switch (line[k])
		{
		case '(':
		{
			Arr[0] += 1;
			symb1++;
			break;
		}
		case ')':
		{
			Arr[0] -= 1;
			
			break;
		}
		case '[':
		{
			Arr[1] += 1;
			symb2++;
			break;
		}
		case ']':
		{
			Arr[1] -= 1;
			break;
		}
		case '"':
		{
			Arr[2] += 1;
			symb3++;
			break;
		}
		default:
			break;
		}
	}

	results_output(Arr, symb1, symb2, symb3);

	

	_getch();
	return 0;
}