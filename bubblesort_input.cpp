#include <iostream>

void print_array(int *array, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << array[i] << " " << std::flush;
	std::cout << std::endl;
}

void bubble_sort(int *array, int n) {
	bool swapped = true;
	int j = 0;
	int temp;

	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; ++i) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}
	}
}

int main() {

	std::cout << "Enter 10 digit number : " << std:endl;

	int z, f;
	int temp2 = 0;
	int array[10] = {0,0,0,0,0,0,0,0,0,0};

	for (int z = 0; z < 10; z++)
	{
		cin >> array[z];
	}

	for (int f = 0; f < 10; f++)
	{
		if (array[f] > temp)
		{
			temp = array[f];
		}
	}


	int n = sizeof(array)/sizeof(array[0]);

	std::cout << "Before sort : " << std::endl;
	print_array(array, n);

	bubble_sort(array, n);

	std::cout << "After sort : " << std::endl;
	print_array(array, n);
	return (0);
}