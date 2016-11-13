// ConsoleApplication_struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Cats
{
	char name[255];
	float age;
	char color[255];
	char fluffy[255];
	char self_concept[255];
	char toy[255];
	char horror[255];
	char valerian[255];
	float voice;
};

void output(Cats *cat, int numCat);
void add(Cats *cat, int numCat, int how_many);
void input1(Cats *cat, int num, int numCat, int how_many);
void input(Cats *cat, int numCat, int how_many);
void edit(Cats *cat, int num, int numCat, int how_many);

void input1 (Cats *cat, int num, int numCat, int how_many)
{
	for (int i = 0; i < (numCat + how_many); i++)
	{
		if (i == (num-1))
		{
			cout << cat[i].name << endl;
			cout << cat[i].age << endl;
			cout << cat[i].color << endl;
			cout << cat[i].fluffy << endl;
			cout << cat[i].self_concept << endl;
			cout << cat[i].toy << endl;
			cout << cat[i].horror << endl;
			cout << cat[i].valerian << endl;
			cout << cat[i].voice << endl;
		}
	}
}

void input(Cats *cat, int numCat, int how_many)
{
	for (int i = 0; i < (numCat + how_many); i++)
	{
			cout << "���: " << cat[i].name << endl;
			cout << cat[i].age << endl;
			cout << cat[i].color << endl;
			cout << cat[i].fluffy << endl;
			cout << cat[i].self_concept << endl;
			cout << cat[i].toy << endl;
			cout << cat[i].horror << endl;
			cout << cat[i].valerian << endl;
			cout << cat[i].voice << endl;
	}
}

void output(Cats *cat, int numCat)
{
	for (int i = 0; i < numCat; i++)
	{
		cout << endl;
		cout << "��� ������: "; 
		cin.get();
		cin.getline(cat[i].name, 255);
		cout << "������� ������: "; 
		cin >> cat[i].age;
		cout << "���� �������: "; 
		cin.get();
		cin.getline(cat[i].color, 255);
		cout << "����������: "; 
		cin.getline(cat[i].fluffy, 255);
		cout << "������������ ����������: ";
		cin.getline(cat[i].self_concept, 255);
		cout << "������� �������: ";
		cin.getline(cat[i].toy, 255);
		cout << "�����-����: ";
		cin.getline(cat[i].horror, 255);
		cout << "������������ � ����������: ";
		cin.getline(cat[i].valerian, 255);
		cout << "��������� ���������� (�������): ";
		cin >> cat[i].voice;
	}
}

void add(Cats *cat, int numCat, int how_many)
{
	for (int i = numCat; i < (numCat + how_many); i++)
	{
		cout << endl;
		cout << "��� ������: ";
		cin.get();
		cin.getline(cat[i].name, 255);
		cout << "������� ������: ";
		cin >> cat[i].age;
		cout << "���� �������: ";
		cin.get();
		cin.getline(cat[i].color, 255);
		cout << "����������: ";
		cin.getline(cat[i].fluffy, 255);
		cout << "������������ ����������: ";
		cin.getline(cat[i].self_concept, 255);
		cout << "������� �������: ";
		cin.getline(cat[i].toy, 255);
		cout << "�����-����: ";
		cin.getline(cat[i].horror, 255);
		cout << "������������ � ����������: ";
		cin.getline(cat[i].valerian, 255);
		cout << "��������� ���������� (�������): ";
		cin >> cat[i].voice;
	}
}

void edit(Cats *cat, int num, int numCat, int how_many)
{
	if (num == (numCat+how_many+1))
	{
		cout << endl;
		cout << "��� ������: ";
		cin.get();
		cin.getline(cat[num].name, 255);
		cout << "������� ������: ";
		cin >> cat[num].age;
		cout << "���� �������: ";
		cin.get();
		cin.getline(cat[num].color, 255);
		cout << "����������: ";
		cin.getline(cat[num].fluffy, 255);
		cout << "������������ ����������: ";
		cin.getline(cat[num].self_concept, 255);
		cout << "������� �������: ";
		cin.getline(cat[num].toy, 255);
		cout << "�����-����: ";
		cin.getline(cat[num].horror, 255);
		cout << "������������ � ����������: ";
		cin.getline(cat[num].valerian, 255);
		cout << "��������� ���������� (�������): ";
		cin >> cat[num].voice;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int numCat;
	int how_many = 0;
	cout << "������� ���������� �������" << endl;
	cin >> numCat;
	struct Cats *cat;
	cat = new Cats[numCat];
	output(cat, numCat);
	cout << endl << "����" << endl << "1. �������� ������" << endl << "2. ������� ������" << endl << "3. ��������������� ������" << endl << "4. ������� ������ �� �������" << endl << "5. ������� ���� ������ �������" << endl << "" << endl;
	int point;
	cin >> point;
	switch (point)
	{
	case 1:
	{
		cout << endl << "������� ������� ������ ��������?" << endl;
		cin >> how_many;
		add(cat, numCat, how_many);
	}
	break;
	case 2:
	{
		cout << endl << "���� �� ������ ������� ������, � ��� �� �� ���� ������ �������... ��������. �� ����� ������� �� ������� ������� ������?" << endl << "1. ������������ ��� 9 ������" << endl << "2. �������� ��� ������ - ����� ������" << endl << "3. �� ��������� :(" << endl;
		int how;
		cin >> how;
		switch (how)
		{
		case 1: cout << "����� ���� �� ����� � �������, ��� ������ ������� ������� �� � ���� ������???" << endl;
		break;
		case 2: cout << "����� ���� �� ����� � �������, ��� ������ ������� ������� �� � ���� ������???" << endl;
		break;
		case 3: cout << "����� ���� �� ����� � �������, ��� ������ ������� ������� �� � ���� ������???" << endl;
		break;
		}
	}
	break;
	case 3:
	{
		cout << "� ��� � ���� ��������� ������. ��� �� �������� ��������������! ��-��-��!" << endl << "����..." << endl << "������ ������ ���������������?" << endl;
		int num;
		cin >> num;
		edit(cat, num, numCat, how_many);
	}
	break;
	case 4:
	{
		cout << "����� ����� �����������?" << endl;
		int num;
		cin >> num;
		input1(cat, num, numCat, how_many);
	}
	break;
	case 5:
	{
		cout << endl;
		input(cat, numCat, how_many);
	}
	break;
	}
	delete[] cat;
	_getch();
    return 0;
}

