// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

#pragma region 2. HT

int func(int a[], int size, int& n, int& o, int& p) {


	if (size == 0) return size;

	if (a[size] < 0) o++; else if (a[size] > 0) p++; else n++;

	return func(a, size - 1, n, o, p);
}

#pragma endregion

//void set(int a[][10], int i1, int j1) {
//
//	srand(time(NULL));
//
//	for (int i = 0; i < i1; i++)
//	{
//		for (int j = 0; j < j1; j++)
//		{
//			a[i][j] = 1 + rand() % 10;
//		}
//		
//	}
//
//}
//
//void print_arr(int a[][10], int i1, int j1) {
//	
//	set(a, i1, j1);
//
//	for (int i = 0; i < i1; i++)
//	{
//		for (int j = 0; j < j1; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}



int main()
{
	srand(time(NULL));

	/*1.	Объвить две переменные и два указателя. Присвоить указателям адреса переменных. Сложить переменные, используя указатели и присвоить результат третьей переменной. Вывести результат сложения на экран и адрес результата.
	int *p, *p1;
	int a = 2, b = 3, c;
	p = &a;
	p1 = &b;
	c = *p + *p1;
	cout << "adress = " << &c << " sum =" << c << endl;*/

	/*2.	Исправить код:

	int a = 2, b = 5;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	cout << *p1 - *p2;*/

	/*3.	Исправить код :
	double a = 2.5, b = 5.2, res;
	double *p1, *p2;
	
	p1 = &a;
	p2 = &b;

	res = *p1 - *p2;
	cout << res << endl;*/


	/*4.	Исправить код :
	const int SIZE = 10;
	int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = A;
	for (p = A; p<A+SIZE; p++) //выполнить вывод массива используя указатели
		cout << *p << " ";*/

	/*5.	Используя указатели заполнить массив случайными числами и вывести его на экран.

	int a[10];
	int *p;

	for (p = a; p < a + 10; p++)
		*p = 1 + rand() % 10;

	for (p = a; p < a+10; p ++)
		cout << *p << " ";
	
	cout << endl;*/

	
	/*6.	Дано натуральное число N и массив целых чисел.Используя указатели, выяснить имеется ли в массиве хотя бы одно нечетное отрицательное число и определить его местонахождение в массиве.

	const int n = 9;
	int a[n] = {1, 2 ,3 ,4, -5, 6, 7, 8, 9};
	int *p = a;

	for (p = a; p < a + n; p++)
		cout << *p << " ";

	for (p = a; p < a + n; p++)
		if (*p < 0 && *p%2 != 0) cout << "\nindex = " << p - a << endl;*/

	/*7.	Даны действительные числа а1, ..a16.Используя указатели получить min(a1*a9, a2*a10, ..., a8*a16).
	
	const int n = 16;
	int a[n] = { 2,2,3,4,5,5,2,3,4,5,4,2,3,4,5,3 };
	int *p=a;

	for (p = a; p < a + n; p++)
		cout << *p << " ";

	cout << endl;

	int min = INT_MAX;

	
	for (p = a; p < a+8; p++)
	{
		//cout << *p * *(p + 8) << endl;
		if (min > (*p * *(p + 8))) 
			min = (*p * *(p + 8));
		
	}

	cout << min;*/

	//8.	Дана последовательность a1, a2, ..., a20.Используя указатели расположить положительные элементы последовательности, стоящие на нечетных местах по возрастанию

	int a[20] = { 1,-3,4,5,2,5,45,12,3,54,6,-7,8,4,2,1,1,23,4,6 };

	int *p = a;


	for (p = a; p < a + 20; p++)
	{
		cout << *p << " ";
	}
	cout << endl;

	for (int pass = 1; pass < 20; pass+=2)
	{
		for (p = a+1; p < a + 19; p+=2)
		{
			if (*p < 0 || *(p+2) < 0) continue; else
				if (*p > *(p + 2))
				{
					swap(*p, *(p + 2));
				}
		}
	}

	for (p = a; p < a + 20; p++)
	{
		cout << *p << " ";
	}

	//#pragma region 2-4
	//
	//	int arr[10];
	//	int *p;
	//	cout << "2. ";
	//	int sum = 0;
	//	for (p = arr; p < arr + 10; p++)
	//	{
	//		*p = -25 + rand() % 60;
	//		sum += *p;
	//	}
	//
	//	for (p = arr; p < arr + 10; p++)
	//	{
	//		cout << *p << " ";
	//	}
	//	cout << " sum = " << sum << endl << endl;
	//
	//	cout << "3. ";
	//
	//	int m = 1;
	//
	//	for (p = arr; p < arr + 10; p++)
	//	{
	//		*p = -44 + rand() % 110;
	//		m *= *p;
	//	}
	//
	//
	//	for (p = arr; p < arr + 10; p++)
	//	{
	//		cout << *p << " ";
	//	}
	//	cout << "proizvedenie = " << m << endl << endl;
	//
	//	cout << "4. ";
	//	int sr;
	//
	//	for (p = arr; p < arr + 10; p++)
	//	{
	//		*p = -15 + rand() % 120;
	//		sum += *p;
	//	}
	//
	//	for (p = arr; p < arr + 10; p++)
	//	{
	//		cout << *p << " ";
	//	}
	//
	//	cout << "srednee arifmet. = " << sum / 10 << endl << endl;
	//#pragma endregion

#pragma region 2. HT



	/*int n = 0, o = 0, p = 0;
	int a[] = { -1,2,-3, 1, 2, 0, 0, 0, 0 };


	cout << func(a, 9, n, o, p) << endl;

	cout << "> " << p << endl;
	cout << "< " << o << endl;
	cout << "0 " << n << endl;*/
#pragma endregion
	return 0;
}

