#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout << "привіт!Тут наші динамічні масиви\n";
	int n = 0;
	cout << "Вкажіть кількість елементів масиву\n";
	cin >> n;
	srand(time(0));//ініціалізація рандом С++
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 20;//числа від 0 до 20
	}
	cout << "наш масив\n";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n";

	return 0;
}