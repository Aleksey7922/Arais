#include<iostream>
using namespace std;




void main()
{
	setlocale(LC_ALL, "rus");

#

	const int  SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//arr[3] = 123;//обращаеися к элементам массива на запись
	//cout << arr[3] << endl;//обращаеися к элементам массива на чтение

	cout << "Введите элементы массива:";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}


	//Вывод массива на экран:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " \t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " \t";

	}

	setlocale(LC_ALL, "");
	const int SIZE = 15;
	int arr[SIZE] = { 3, 5, 8 };
	const int SIZE = 5;
	int arr[SIZE];
	//arr[3] = 123;	//îáðàùàåìñÿ ê ýëåìåíòó ìàññèâà íà çàïèñü
	//cout << arr[3] << endl;//îáðàùåíèå ê ýëåìåíòó ìàññèâà íà ÷òåíèå

	cout << "Ââåäèòå çíà÷åíèÿ ýëåìåíòîâ ìàññèâà: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	//Âûâîä ìàññèâà íà ýêðàí:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Âûâîä ìàññèâà íà ýêðàí â îáðàòíîì ïîðÿäêå
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Âû÷èñëåíèå ñóììû ýëåìåíòîâ ìàññèâà:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Ñóììà ýëåìåíòîâ ìàññèâà: " << sum << endl;
	cout << "Ñóììà ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà: " << (double)sum / SIZE << endl;

	//Ïîèñê ìèíèìàëüíîãî è ìàêñèìàëüíîãî çíà÷åíèÿ â ìàññèâå:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàññèâå: " << min << endl;
	cout << "Ìàêñèìàëüíîå çíà÷åíèå â ìàññèâå: " << max << endl;



}