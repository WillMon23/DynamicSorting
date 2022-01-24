#pragma once
#include <iostream>

template <typename T>
class Engine
{
public:
	void run();
private:
	void BubbleSort(T* array,int size);
	void PrintSize(T* array, int size);
	void InsertionSort(T* array, int size);
};

template <typename T>
void Engine<T>::run()
{
	int* sort = new int[] {1, 9, 2, 6, 10, 4, 3, 7 };

	PrintSize(sort, 8);

	//SortingFunction(sort,8);

	InsertionSort(sort, 8);

	PrintSize(sort, 8);
}

template <typename T>
void Engine<T>::BubbleSort(T* array, int size)
{


	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			int temp = array[i];
			if (array[j] <= temp)
			{
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template <typename T>
void Engine<T>::PrintSize(T* array, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << std::endl;
	system("pause");
	system("cls");
}

template <typename T>
void Engine<T>::InsertionSort(T* array, int size)
{
	int j = 0;
	int key = 0;

	for (int i = 1; i < size; i++)
	{
		key = array[i];

		j = i - 1;
		while (j >= 0 && array[j] > key)
		{
			if (array[j] > key)
			{
				array[j + 1] = array[j];
				j--;
			}
		}
		array[j + 1] = key;
	}
}