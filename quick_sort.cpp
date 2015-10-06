#include <iostream>
#include"DimanPRO.h"
#include <cstdlib>
 
using std::rand;
using std::swap;
 
// pivot - "опорный" элемент
// partition - переупорядочивает элементы части массива,
// заданной отрезком [left, right), так что в начале
// следуют элементы меньшие pivot, а в конце - большие;
// возвращает место начала блока элементов, больших pivot;
int * partition(int * left, int *  right, int pivot) {
	while(true){
		while (*left<pivot)
			left++;
		while (*right>pivot)
			right--;
		if (left<right){
			swap(*left,*right);
		} else {
			return right;
		}
	}
}
 
void my_qsort(int * arr, int n) {
	if (n <= 1)
		return; // массив в 1 или 0 элементов уже упорядочен
	int * pivotPtr = arr+rand() % n; // случайный выбор опорного элемента
	int newPivotIdx = partition(arr, arr + n, *pivotPtr) - arr;
	my_qsort(arr, newPivotIdx + 1);
	my_qsort(arr + newPivotIdx+1, n - (newPivotIdx +1));
}
