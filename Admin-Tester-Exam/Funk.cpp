#include <iostream>
#include "Funk.h"
#define _CRT_SECURE_NO_WARNINGS

//���������.
//��� ������ ����� ������� ������������ � ��� ��� � ���� ������������ ��� ������ � ��������.
//���������� string � fstream ��� ������� ������, �� ��� ������ ��� ������, � ������ �� ������������ ������, ��������.
//�� ���� ��������, � ������ ��, ��� ��� ����� �������� �������, ������� ��������� ������ ��� ��������,
//������ ����� ����� ���� ������� �� ������ ���� ������ ��� ��� � �����.
//�������������� ������ � ���� � �����.

void Login()
{
	char* login;
	char* password; //��� ������ ������� ������ ��� �����, �.�. int, �.�. ��� � ����� ������ ����� �������� � �� ����������� ���������� �����.
	void (*full)(char*&);
	full = addNum;

	std::cout << "������� ����� ";
	full(login);
	std::cout << std::endl;

	std::cout << "������� ������ ";
	full(password);
	std::cout << std::endl;

	Print(login);
	Print(password);

	if (AdminCheck(login, password))
	{
		std::cout << "���� ��� ����� ";
		std::cout << std::endl;
	}

	Code(login);
	Code(password);

	Print(login);
	Print(password);

	if (Check(login, password))
	{
		std::cout << "���� ��� ������ ";
		std::cout << std::endl;
	}
	else
	{

		std::cout << "������ ����� � ������ �� �������, ������ �� �� �� ����������������? ";


	}


	delete[] login;
	delete[] password;
}














bool AdminCheck(char* login, char* password)
{
	bool ch = 0;
	char aLogin[6]{"admin"};
	char aPassword[4]{"god"};

	if (sizeof(login) == sizeof(aLogin) && sizeof(password) == sizeof(aPassword))
	{
		for (short x = 0; x < 6; x++)
		{
			if (aLogin[x] != login[x]) break;
			if (x == 5) ch = 1;
		}

		for (short x = 0; x < 4; x++)
		{
			if (aPassword[x] != password[x])
			{
				ch = 0;
				break;
			}
			if (x == 3) ch = 1;
		}
	}

	return ch;
}


bool Check(char* login, char* password)
{
	bool x = 0;


	return x;
}

void Print(char* print)
{
	for (short x = 0; x < sizeof(print); x++)
	{
		std::cout << print[x];
	}
	std::cout << std::endl;
}


//void Save(char* arr)
//{
//	FILE* f = fopen("lpsave.txt", "a+b");
//
//	fputs(arr, f);
//	fclose(f);
//}


void addNum(char*& array)
{
	char* newRow = new char[500];  //������� ����� ������.

	std::cin >> newRow;

	int n=0;

	do
	{
		n++;
	}while(newRow[n-1] != '\0'); //������ ���-�� ����������� �����.

	array = new char[n];


	for (int i = 0; i < n; i++) //��������� ������ � ����� ������.
	{
		array[i] = newRow[i];
	}

	
	delete[] newRow;
}

void Code(char*& arr)
{
	for (int x = 0; x < sizeof(arr) - 1; x++)arr[x] +=sizeof(arr)+2;
}