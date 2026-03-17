#pragma once
#include <iostream>
using namespace std;

namespace MyFunction
{
	void Test()
	{
		cout << "Hi this is my first Function library" << endl;
	}

	int Sum(int num1, int num2)
	{
		return num1 + num2;
	}

	int ReadNumber()
	{
		int num;
		cout << "enter the number " << endl;
		cin >> num;
		return num;
	}
	string numberTotext(int num)
	{
		if (num == 0)
		{
			return "";
		}

		if (num >= 1 && num <= 19)
		{
			string arr[] = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Therteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen" };
			return arr[num];
		}

		if (num >= 20 && num <= 99)
		{
			string arr[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty","Ninety" };
			return arr[num / 10] + " " + numberTotext(num % 10);
		}
		if (num >= 100 && num <= 199)
		{
			return "One Hundred " + numberTotext(num / 10);
		}
		if (num >= 200 && num <= 999)
		{

			return numberTotext(num / 100) + " Hundreds " + numberTotext(num % 100);
		}
		if (num >= 1000 && num <= 1999)
		{
			return "One Thousand " + numberTotext(num % 1000);
		}

		if (num >= 2000 && num <= 999999)
		{
			return numberTotext(num / 1000) + " Thousands " + numberTotext(num % 1000);
		}
		if (num >= 1000000 && num <= 1999999)
		{
			return "One Million " + numberTotext(num % 1000000);
		}

		if (num >= 2000000 && num <= 999999999)
		{
			return numberTotext(num / 1000000) + " Millions " + numberTotext(num % 1000000);
		}



	}
	

}