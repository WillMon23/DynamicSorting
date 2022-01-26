#include "Engine.h"
#include "DynamicArray.h"
#include <iostream>

void printDynamicArray(DynamicArray<int> arr) {
	for (int i = 0; i < arr.getLength(); i++)
		std::cout << arr.getItem(i) << std::endl;
	system("pause");
}

void main() {
	DynamicArray<int> arr = DynamicArray<int>();

	arr.addItem(4);
	arr.addItem(3);
	arr.addItem(5);
	arr.addItem(5);
	arr.addItem(2);

	printDynamicArray(arr);
	
	arr.sortItems();
	arr.removeItem(5);
	arr.removeItem(5);

	printDynamicArray(arr);
}

