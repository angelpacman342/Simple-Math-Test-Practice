#include "pch.h"
#include <iostream>
#include "practice.h"

using namespace std;

int main()
{
	int table = 0, pick = 0;
	double correct = 0, average = 0;
	char con, result;

	practice math;
	do
	{
		system("cls");
		do
		{
			cout << "Menu\n\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n\npick : ";
			cin >> pick;
		} while (pick < 1 || pick > 4);

		cout << "which table do you want to practice? : ";
		cin >> table;

		if (pick == 1)
			correct = math.add(table);
		else if (pick == 2)
			correct = math.subtract(table);
		else if (pick == 3)
			correct = math.multiply(table);
		else
			correct = math.divide(table);

		result = math.getGrade(correct);
		average = math.getAverage(correct);

		system("cls");
		cout << "Results : " << correct << "/10 = " << average <<"%  "<<result<< endl;

		do
		{
			cout << "Do you want to keep Practicing? : ";
			cin >> con;
		} while ((con != 's') && (con != 'S') && (con != 'N') && (con != 'n'));
	} while (con == 's' || con == 'S');

	correct = math.test();
	result = math.getGrade(correct);
	average = math.getAverage(correct);

	cout << "Test Results : " << correct << "/10 = " << average << "%  " << result << endl;
}