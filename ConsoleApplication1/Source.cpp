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
void main()
{	
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{
				/*17.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, 
					� ���������� ����� � ������������ ��� ��������� � ���� ���������� - �������.*/
				int size = SizeOfArr();
				int arr[20], sum = 0;
				ArrFilling(arr, &size);
				PrintArr(arr, &size);
				SumOfArr(arr, &size, &sum);
				printf("Arr sum = %d, An adress of pointer - %p\n", sum, &sum);
			} break;

			case 2:
			{
				/*18.	����� �� ������� ��� � � 17 ������� �������� ��� ������������ �������
				(�������� � 2 �������: 1. ���������� �������; 2 �� - ����������� ���������� �� �������)
					a.���� int
					b.���� double
					c.���� Shor int*/

				// �� �������, ��� ������� �� ����� ������ ������)
				int size = SizeOfMatrix();
				int arr[10][10];

				cout << "1 SIZE IN MAIN" << size << endl;
				MatrixFilling(&arr[10], &size);
				cout << "2 SIZE IN MAIN" << size << endl;

				MatrixPrint(&arr[10], &size);
			} break;

			case 3:
			{
				//19.	�������� ������� ��� ���������� ��������, ��� ����������, ��� � ���������.
				// ������ �����
			} break;

			case 4:
			{
				/*20.	�������� �������, ������� �������� ��������� �� ������ � ��� ������
				(������ ��� ���� �� ���������� ��� �����, � ���������� ��� ������ �� ��������� ������� �������),
					� ���������� ���������� �������������, ������������� � ������� ��������� ��� - ����, 
					��������� �������� ������.� ������ ������� ����������� ���������� ������������ enum. 
					(enum ������ ���� ������� - ��� �� ��� �����, �������� ��� ��� ����� ������� �� �������� ��� �����)*/
				int size = 10;
				int arr[10];
				ArrFilling(arr, &size);
				PrintArr(arr, &size);
				int countPlus = WorkWithArr(arr, Plus, LastOne);
				int countNull = WorkWithArr(arr, NUL, LastOne);
				int countMinus = WorkWithArr(arr, Minus, LastOne);
				cout << "Quantity of numbers that more than 0 = " << countPlus << endl;
				cout << "Quantity of numbers that equal 0 = " << countNull << endl;
				cout << "Quantity of numbers that less than 0 = " << countMinus << endl;
			} break;

			case 5:
			{
				/*21.	�������� �������, ������� �������� ��������� 
					�� ��������� ������ � ��� ������, � ���������� ������� �������������� 
					��� - ������ �������, � ����� ���������� ������ � �������� ���������, 
					��������� �������� ������.*/
				int arr[5][5], count1 = 0, count2 = 0;
				WorkWithArr2(arr, &count1, &count2);
				cout << "Tou can devide on 2 = " << count1 << endl;
				cout << "YOu cann't devide on 2 = " << count2 << endl;
			} break;

			case 6:
			{
				//22.	������� �������, ����������� ��������� ���� ��������� � ����� �������.
				int size = SizeOfArr();
				int arr[40];
				ArrFilling(arr, &size);
				PrintArr(arr, &size);
				int size2 = SizeOfArr();
				int size3 = size + size2;
				AddingBlocks(arr, &size, &size3);
				cout << "After adding blocks\n" << endl;
				PrintArr(arr, &size3);
			} break;

			case 7:
			{
				int size = SizeOfArr();
				int arr[1000];
				ArrFilling(arr, &size);
				PrintArr(arr, &size);
			} break;

			case 8:
			{
				/*25.	�������� �������, ������� ��������� ����� ���� ����� � ��������� �� a �� b.
					������������ ������ a �  b.����� - ����������� ������ ������� ��������*/
				int a, b, sum = 0;
				cout << "Enter a then b - ";
				cin >> a >> b;
				SumNumbs(&a, &b, sum);
				cout << "sum = " << sum << endl;
			} break;
		}
	} while (task > 0);
}


