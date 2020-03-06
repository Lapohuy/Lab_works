#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include "Funcs.h"

using namespace std;

void chapter_three()
{
	string read_str;
	string letter;
	int sum_vow = 0, sum_cons = 0, sum_oth = 0;
	cout << "Enter words (push q to quit): ";

	while (cin >> letter)
	{
		if (letter == "q")
		break;

		if (isalpha(letter[0]))
		{
			if (check_for_vow(letter) == true)
				sum_vow += 1;
			else
				sum_cons += 1;
		}
		else
			sum_oth += 1;
	}
	cout << "The string contains: " << endl;
	cout << sum_vow << " words beginning with vowels" << endl;
	cout << sum_cons << " words beginning with consonants" << endl;
	cout << sum_oth << " other words" << endl;
}

void chapter_four()
{
	ifstream scroll;
	char character;
	int count = 0;

	scroll.open("D://scroll.txt");

	while (scroll.is_open() == true)
	{
		scroll >> character;
		if (scroll.eof() == true)
		{
			break;
		}
		count += 1;
	}

	scroll.close();

	cout << "The count of characters is: " << count << endl;
}

void chapter_five()
{
	Func func_01[]{ add_sum, add_something, add_product };
	double x, y;

	cout << "Enter the numbers: " << endl;
	cin >> x >> y;
	cout << "The result of sum is: " << endl;
	cout << func_01[0](x,y) << endl;
	cout << "The result of product is: " << endl;
	cout << func_01[1](x, y) << endl;
	cout << "The result of something is: " << endl;
	cout << func_01[2](x, y) << endl;
	cout << "The result of calculate is: " << endl;
	cout << calculate(x, y, add_sum) << endl;
}

void main()
{
	int chapter_num;
	cout << "Enter chapter_num" << endl;
	cin >> chapter_num;
	system("cls");
	switch (chapter_num)
	{
		case 3:
			{
				chapter_three();
				exit(0);
			}
		case 4:
			{
				chapter_four();
				exit(0);
			}
		case 5:
			{
				chapter_five();
				exit(0);
			}
	}
}
	
