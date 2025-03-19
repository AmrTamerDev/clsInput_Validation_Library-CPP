#pragma once
#include <iostream>
#include <string>
#include "clsDate.h"
#include "clsString.h"
using namespace std;

class clsInputValidate
{
public:

	template <typename T>
	static bool IsNumberBetween(T Num, T From, T To)
	{
		return (Num >= From && Num <= To);
	}

	static bool IsDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo)
	{
		return ((((clsDate::IsDate1AfterDate2(Date, DateFrom)) && (clsDate::IsDate1BeforeDate2(Date, DateTo)))
			||
			((clsDate::IsDate1BeforeDate2(Date, DateFrom)) && (clsDate::IsDate1AfterDate2(Date, DateTo))))
			||
			(clsDate::IsDate1EqualToDate2(Date, DateFrom))
			||
			(clsDate::IsDate1EqualToDate2(Date, DateTo))
			);
	}

	template <typename T>
	static T ReadNumber(string ErrorMessage = "Invalid Number, Enter again :\n")
	{
		T NumberRead;
		cin >> NumberRead;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
			cin >> NumberRead;
		}

		return NumberRead;
	}

	template <typename T>
	static T ReadNumberBetween(T From, T To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		T NumberRead = ReadNumber<T>();

		while (!IsNumberBetween(NumberRead, From, To))
		{
			cout << ErrorMessage;
			NumberRead = ReadNumber<T>();
		}

		return NumberRead;
	}

	static bool IsValidationDate(clsDate Date)
	{
		return clsDate::IsValidateDate(Date);
	}

	static string ReadString()
	{
		string sLine;
		getline(cin >> ws, sLine);
		return sLine;
	}
};

