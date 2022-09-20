// Линейный поиск
#include <iostream>

// Линейный поиск первого вхождения элемента value в массив arr. Поиск начинается с позиции begin (по ум. --> 0).
template <typename T> 
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

// Линейный поиск последнего вхождения элемента value в массиве arr.
template <typename T> 
int search_last_index(T arr[], const int length, T value){
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

// Линейный поиск последнего вхождения элемента value в массиве arr. Поиск начинается с позиции begin (по ум. --> 0).
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

//Функция для задания 1. Вывод подслова с позиции символа sym.
void subword(char arr[], const int length, char sym) {
	int index = search_index(arr, length, sym);
	if (index == -1)
		std::cout << " ERROR!";
	else {
		for (int i = index; i < length; i++)
			std::cout << arr[i];
		std::cout << "\n";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	const int size = 10;
	int arr[size]{ 1, 2, 3, 4, 3, 3, 3, 6, 7, 8 };
	// SEARCH-INDEX
	/*std::cout << " Позиция числа 7 в  массиве = " << search_index(arr, size, 7) << " .\n";
	std::cout << " Первая позиция числа 3 в массиве = " << search_index(arr, size, 3) << " .\n";
	std::cout << " Первая позиция числа 3, начиная с позиции 4, в массиве = " << search_index(arr, size, 3, 6) << " .\n";
	if (search_index(arr, size, 100) == -1)
		std::cout << " Числа 100 нет в массиве\n";
	else
	std::cout << " Позиция числа 100 в массиве = " << search_index(arr, size, 100) << " .\n";
	*/

	// SEARCH_LAST_INDEX
	/*std::cout << " Позиция числа 7 в  массиве = " << search_last_index(arr, size, 7) << '\n';
	std::cout << " Последняя позиция числа 3 в массиве = " << search_last_index(arr, size, 3) << " .\n"; 
	std::cout << " Последняя позиция числа 3, начиная с позиции 7, в массиве = " << search_last_index(arr, size, 3, 7) << " .\n";
	*/

	// Задание "Подслово"
	std::cout << " Изначальное слово:\n";
	const int letters = 8;
	char word[letters] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	for (int i = 0; i < letters; i++) 
		std::cout << word[i];
	std::cout << "\n Подслово:\n";
		subword(word, letters, 'n');
	return 0;
}