#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "Header.h"
using namespace std;

enum ARR
{
	NUL, Plus, Minus, LastOne = 10
};
int TaskNumb()
{
	int task;
	cout << "Enter task number - ";
	cin >> task;
	return task;
}

int SizeOfArr()
{
	int size;
	do
	{
		cout << "Enter size of arr between 5 and 20 - ";
		cin >> size;
	} while (size < 5 || size > 20);
	return size;
}

int ArrFilling(int *arr, int *size)
{
	srand(time(NULL));
	int i = 0;
	while (i < *size)
	{
		*arr = -50 + rand() % 100;
		arr++;
		i++;
	}
	return *arr;
}

void PrintArr(int *arr, int *size)
{	
	int i = 0;
	while (i < *size)
	{
		cout << *arr << endl;
		arr++;
		i++;
	}
}

int SumOfArr(int *arr, int *size, int *sum)
{	
	/*17.	Написать функцию, которая получает указатель на массив и его размер,
	и возвращает сумму и произведение его элементов в двух параметрах - ссылках.*/
	int i = 0;
	while (i < *size)
	{
		*sum += *arr;
		arr++;
		i++;
	}
	return *sum;
}

int SizeOfMatrix()
{
	int size;
	do
	{
		cout << "Enter length of lines in matrix between 2 and 3 - ";
		cin >> size;
	} while (size < 2 || size > 3);
	cout << "SIZZZE" << size << endl;
	return size;
}

int MatrixFilling(int (*arr)[10], const int *size)
{	
	srand(time(NULL));
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size; j++)
		{
			arr[i][j] = 1 + rand() % 100;
		}
	}
	return (*arr)[10];
}

void MatrixPrint(int(*arr)[10], int *size)
{	
	cout << "p SIZE" << *size << endl;
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size; j++)
		{
			cout << arr[i][j] << "\t";
		} cout << endl;
	}
}

int WorkWithArr(int *arr, int a, int size)
{	
	int count = 0;
	switch (a)
	{
		case NUL:
		{
			for (int i = 0; i < size; i++)
			{
				if (arr[i] == 0)
					count++;
			}	return count;
		}

		break;
		case Plus:
		{
			for (int i = 0; i < size; i++)
			{
				if (arr[i] > 0)
					count++;
			}	return count;
		}
		break;
		case Minus:
		{
			
			for (int i = 0; i < size; i++)
			{
				if (arr[i] < 0)
					count++;
			}	return count;
		}
			break;
	}
}

int WorkWithArr2(int arr[5][5], int *count1, int *count2)
{	
	int count11 = 0, count22 = 0;
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = -100 + rand() % 200;
			if (arr[i][j] % 2 == 0)
				count11++;
			else
				count22++;
			cout << arr[i][j] << "\t";
		} cout << endl;
		*count1 = count11;
		*count2 = count22;
	}
	return arr[10][10];
}

int AddingBlocks(int *arr, int *size, int *size2)
{	
	srand(time(NULL));
	for (int i = *size; i < *size2; i++)
	{
		arr[i] = -100 + rand() % 200;
	}
	
	return *arr;
}

int AddingBLocks(int*arr, int*size, int *size2, int *a)
{	
	int size3 = *size + *size2, arr2[100], j = 0;
	for (int i = 0; i < size3; i++)
	{
		if (i == *size2)
		{
			arr2[j] = arr[j + *size2];
			j++;

		}
	}
	return 1;

}

int SumNumbs(int *a, int *b, int sum)
{	
	int count = *b;
	if (count <= *a)
		return sum;
	sum += count;
	count--;
	sum = SumNumbs(a, b, sum);

	//fn += z; // fn = fn + 3
	//count--;
	//cout << count << ". fn = " << fn << endl;
	//fn = rFunc(count, z, fn);
	//int sum2 = 0;
	//for (int i = *a; i <= *b; i++)
	//{
	//	sum2 += i;
	//}
}