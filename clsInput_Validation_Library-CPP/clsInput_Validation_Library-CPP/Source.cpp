#include <iostream>
#include <string>
#include "clsInputValidate.h"
#include "clsDate.h"
using namespace std;

int main()
{
	cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
	cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl;

	cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(12, 1, 2025), clsDate(3, 3, 2025)) << endl;
	cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(3, 3, 2025), clsDate(1, 1, 2025)) << endl;

	cout << "\nPlease Enter a Number:\n";
	int Num1 = clsInputValidate::ReadNumber<int>("Invalid Number, Enter again:\n");
	cout << "Num: " << Num1 << endl;

	cout << "\nPlease Enter a Number between 1 and 5:\n";
	int Num2 = clsInputValidate::ReadNumberBetween<int>(1, 5, "Number is not within Range, Enter again:");
	cout << Num2 << endl;

	cout << "\nPlease Enter a Double Number:\n";
	double Num3 = clsInputValidate::ReadNumber<double>("Invalid Number, Enter again:");
	cout << "Num: " << Num3 << endl;

	cout << "\nPlease Enter a Double Number between 1.1 and 5.5:\n";
	double Num4 = clsInputValidate::ReadNumberBetween<double>(1.1, 5.5, "Number is not within Range, Enter again:");
	cout << Num4 << endl;

	cout << clsInputValidate::IsValidationDate(clsDate(35, 1, 2025)) << endl;

	system("pause > 0");
	return 0;
}
