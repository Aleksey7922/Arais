#include<iostream>
using namespace std;

//#define NAMERICS_W
//#define NAMERICS_F


void main()
{
	setlocale(LC_ALL, "RUS");

#ifdef NAMERICS_W

	const int n = 32;
	bool bin[n] = {};// ���� ������ ����� ������� ������� ��������� �����
	int decimal; //����������  ����� �������� � ���������� 
	cout << "������� ���������� ����� :"; cin >> decimal;
	cout << decimal << endl;
	int i = 0;//����� �������
	while (decimal)
	{
		bin[i] = decimal % 2; //�������� ������� ������ ��������� �����
		decimal /= 2;   // ������� ���������� ������� ������ �� ����������� ����� 
		i++;

		//��������� � ���������� �������
	}
	// ������� ������� �� ������� � �������� �������
	for (; i >= 0; i--)//int i=n -1; //������� �� ������ ���� � ��������� �� ������ ����� ��� ������� 
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif // NAMERICS_W

#ifdef NAMERICS_F
	const int n = 32;
	bool bin[n] = {};// ���� ������ ����� ������� ������� ��������� �����
	int decimal; //����������  ����� �������� � ���������� 
	cout << "������� ���������� ����� :"; cin >> decimal;
	cout << decimal << endl;
	int i = 0;//����� �������
	for (; decimal > 0; i++, decimal /= 2)
	{
		bin[i] = decimal % 2; //�������� ������� ������ ��������� �����
		///decimal /= 2;   // ������� ���������� ������� ������ �� ����������� ����� 
		//i++;//��������� � ���������� �������
	}
	// ������� ������� �� ������� � �������� �������
	for (; i >= 0; i--)//int i=n -1; //������� �� ������ ���� � ��������� �� ������ ����� ��� ������� 
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif // NAMERICS_F


	int decimal; //����������  ����� �������� � ���������� 
	cout << "������� ���������� ����� :"; cin >> decimal;
	cout << decimal << endl;

	const int n = 8;
	char hex[n] = {};//���� ������ ����� ������� ����������������� ����� 
	int i = 0;
	for (; decimal; decimal /= 16, i++)
	{
		hex[i] = decimal % 16;

	}
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
			case 10:cout << "A"; break;
			case 11:cout << "B"; break;
			case 12:cout << "C"; break;
			case 13:cout << "D"; break;
			case 14:cout << "E"; break;
			case 15:cout << "F"; break;
			default:cout << hex[i];
		}*/

		//if (hex[i] < 10)cout << hex[i]; else cout << char(hex[i] + 55);
		//else cout << char(hex[i] + 55);
		// (hex[i] < 10) ?cout << hex[i]:  cout << char(hex[i] + 55);
		// cout << char(hex[i] < 10 ? hex[i]+48 : char(hex[i] + 55));
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
		hex[i] += hex[i] < 10 ? 48 : 55;
		cout << hex[i];
	}




}