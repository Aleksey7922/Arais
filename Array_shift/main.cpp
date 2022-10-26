#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного ьассива на экран 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	////Циклический сдвиг массива по введенному количеству
	//int number_of_shifts;
	//cout << "Введите количество сдвигов : "; cin >> number_of_shifts;
	//for (int i = 0; i < number_of_shifts; i++)
	//{
	//	int buffer = arr[0];
	//	for (int i = 0; i < n; i++)
	//	{
	//		arr[i] = arr[i + 1];
	//	}
	//		arr[n - 1] = buffer;
	//}

	//	// Вывод влево  сдвинутого массива на экран 
	//	for (int i = 0; i < n; i++)
	//	{
	//		cout << arr[i] << "\t";
	//	}
	//	cout << endl;






		//Циклический сдвиг массива на значение больше 1
		//
		//
		//for (int i = 0; i < 3; i++) // ;i < n;
		//{
		//	int buffer = arr[0];
		//	for (int i = 0; i < n; i++)
		//	{
		//		arr[i] = arr[i + 1];
		//	}
		//	arr[n - 1] = buffer;
		//}

		//// Вывод влево  сдвинутого массива на экран 
		//for (int i = 0; i < n; i++)
		//{
		//	cout << arr[i] << "\t";
		//}
		//cout << endl;




	int numb_ent;
	cout << "Введите кол-во сдвигов :";cin>>numb_ent;

		for (int i = 0; i < numb_ent; i++) // ;i < n;
		{
			int buffer = arr[n-1];
			for (int i = n-1; i> 0; i--)
			{
				arr[i] = arr[i-1];
			}
			arr[0] = buffer;
		}

		// Вывод влево  сдвинутого массива на экран 
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;

}