#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "practice.h"

using namespace std;

practice::practice()
{
	
}

double practice::add(int table)//adding exercises
{
	double answer = 0.0, correct = 0.0;

	for (int i = 1; i <= 10; i++)
	{
		system("cls");
		cout << i << ") " << i << " + " << table << " = ";
		cin >> answer;

		if (answer == (i + table))
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else
			cout << "Wrong" << endl;
		system("pause");
	}
	return correct;
}

double practice::subtract(int table)//subtracting exercises
{
	double answer = 0.0, correct = 0.0;

	for (int i = 1; i <= 10; i++)
	{
		system("cls");
		cout << i << ") " << i << " - " << table << " = ";
		cin >> answer;

		if (answer == (i - table))
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else
			cout << "Wrong" << endl;
		system("pause");
	}
	return correct;
}

double practice::multiply(int table)//multiplying exercises
{
	double answer = 0.0, correct = 0.0;

	for (int i = 1; i <= 10; i++)
	{
		system("cls");
		cout << i << ") " << i << " * " << table << " = ";
		cin >> answer;

		if (answer == (i * table))
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else
			cout << "Wrong" << endl;
		system("pause");
	}
	return correct;
}

double practice::divide(int table)//division exercises
{
	double answer = 0.0, correct = 0.0;

	if (table == 0)
	{
		cout << "Can't divide 0.";
		return 0;
	}
	else
	{
		for (int i = 1; i <= 10; i++)
		{
			system("cls");
			cout << i << ") "<< i << " / " << table << " = ";
			cin >> answer;

			if (answer == (i / table))
			{
				correct += 1;
				cout << "Correct" << endl;
			}
			else
				cout << "Wrong" << endl;
			system("pause");
		}
	}
	return correct;
}

double practice::getAverage(double correct)//calculates average
{
	return (correct / 10) * 100;
}

char practice::getGrade(double correct)//calculates grade
{
	if ((correct / 10) * 100 >= 90)
		return 'A';
	else if ((correct / 10) * 100 >= 80)
		return 'B';
	else if ((correct / 10) * 100 >= 70)
		return 'C';
	else if ((correct / 10) * 100 >= 60)
		return 'D';
	else
		return 'F';
}

double practice::test()//final test
{
	system("cls");
	double answer = 0.0, correct = 0.0;
	int randomNum1 = 0, randomNum2 = 0;
	char sign;

	srand(time(0));

	cout << "Math Test:\n";
	for (int i = 1; i <= 10; i++)
	{
		randomNum1 = 1 + rand() % 4;//picks a random operator from 1 - 4

		if (randomNum1 == 1)
			sign = '+';
		else if (randomNum1 == 2)
			sign = '-';
		else if (randomNum1 == 3)
			sign = '*';
		else
			sign = '/';

		randomNum1 = rand() % 10;//stores a random number from 1 - 10
		randomNum2 = rand() % 10;//stores a random number from 1 - 10

		cout << i << ") " << randomNum2 << " " << sign << " " << randomNum1 << " = ";
		cin >> answer;

		//checks if your answer is right
		if (sign == '+' && answer == randomNum2 + randomNum1)
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else if (sign == '-' && answer == randomNum2 - randomNum1)
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else if (sign == '*' && answer == randomNum2 * randomNum1)
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else if (sign == '/' && answer == randomNum2 / randomNum1)
		{
			correct += 1;
			cout << "Correct" << endl;
		}
		else
			cout << "Wrong" << endl;
		system("pause");
		system("cls");
	}
	return correct;
}

practice::~practice()
{

}
