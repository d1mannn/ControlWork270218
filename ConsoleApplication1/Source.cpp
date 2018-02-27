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
				/*17.	Написать функцию, которая получает указатель на массив и его размер, 
					и возвращает сумму и произведение его элементов в двух параметрах - ссылках.*/
				int size = SizeOfArr();
				int arr[20], sum = 0;
				ArrFilling(arr, &size);
				PrintArr(arr, &size);
				SumOfArr(arr, &size, &sum);
				printf("Arr sum = %d, An adress of pointer - %p\n", sum, &sum);
			} break;

			case 2:
			{
				/*18.	Такую же функцию как и в 17 задании написать для многомерного массива
				(подумать в 2 стороны: 1. Перегрузка функций; 2 Ис - пользование указетелей на функйии)
					a.Типа int
					b.Типа double
					c.Типа Shor int*/

				// то задание, над котором мы долго сидели думали)
				int size = SizeOfMatrix();
				int arr[10][10];

				cout << "1 SIZE IN MAIN" << size << endl;
				MatrixFilling(&arr[10], &size);
				cout << "2 SIZE IN MAIN" << size << endl;

				MatrixPrint(&arr[10], &size);
			} break;

			case 3:
			{
				//19.	Написать Функции для распечатки массивов, как одномерных, так и двумерных.
				// сделал ранее
			} break;

			case 4:
			{
				/*20.	Написать функцию, которая получает указатель на массив и его размер
				(зармер при этом не передавать как число, а передавать как ссылку на последний элемент массива),
					и возвращает количество отрицательных, положительных и нулевых элементов мас - сива, 
					используя механизм ссылок.В данном задании обязательно необходимо использовать enum. 
					(enum должен быть глобаль - ным на все файлы, подумать как это можно сделать не объявляя его везде)*/
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
				/*21.	Написать функцию, которая получает указатель 
					на двумерный массив и его размер, и возвращает среднее арифметическое 
					эле - ментов массива, а также количество чётных и нечётных элементов, 
					используя механизм ссылок.*/
				int arr[5][5], count1 = 0, count2 = 0;
				WorkWithArr2(arr, &count1, &count2);
				cout << "Tou can devide on 2 = " << count1 << endl;
				cout << "YOu cann't devide on 2 = " << count2 << endl;
			} break;

			case 6:
			{
				//22.	Создать функцию, позволяющую добавлять блок элементов в конец массива.
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
				/*25.	Написать функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
					Пользователь вводит a и  b.Проил - люстрируйте работу функции примером*/
				int a, b, sum = 0;
				cout << "Enter a then b - ";
				cin >> a >> b;
				SumNumbs(&a, &b, sum);
				cout << "sum = " << sum << endl;
			} break;
		}
	} while (task > 0);
}


