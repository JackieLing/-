#include"bookmis.h"
#include<iostream>
using namespace std;
void LocateBook(BookList L)
{
	Book e;
	int i;
	char n = 0;
	while (1)
	{
		std::cout << "����1����Ų��ң�����2���������ң�����3�����������ң�����4����Ų���,����#������һ����" << endl;
		std::cin >> n;
		if (n == '#')
			break;
		if (n == '1')
		{
			std::cout << "������Ҫ���ҵ���ţ�";
			std::cin >> e.isbn;
			for (i = 0; i < L.length; i++)
			{
				if (strcmp(L.elem[i].isbn, e.isbn) == 0)
				{
					std::cout << L.elem[i].isbn << "  " << L.elem[i].name << "  " << L.elem[i].author << endl;
					break;
				}

			}
			if (i >= L.length)
				std::cout << "���޴��飡��鿴�����Ƿ���ȷ" << endl;


		}
		if (n == '2')
		{
			std::cout << "������Ҫ���ҵ�������";
			std::cin >> e.name;
			for (i = 0; i < L.length; i++)
			{
				if (strcmp(L.elem[i].name, e.name) == 0)
				{
					std::cout << L.elem[i].isbn << "  " << L.elem[i].name << "  " << L.elem[i].author << endl;
					break;
				}


			}
			if (i >= L.length)
				std::cout << "���޴��飡��鿴�����Ƿ���ȷ" << endl;
		}
		if (n == '3')
		{
			std::cout << "������Ҫ���ҵ����ߣ�";
			std::cin >> e.author;
			for (i = 0; i < L.length; i++)
			{
				if (strcmp(L.elem[i].author, e.author) == 0)
				{
					std::cout << L.elem[i].isbn << "  " << L.elem[i].name << "  " << L.elem[i].author << endl;
					break;
				}


			}
			if (i >= L.length)
				std::cout << "���޴��飡��鿴�����Ƿ���ȷ" << endl;
		}
		if (n == '4')
		{
			std::cout << "������Ҫ���ҵ���ţ�";
			std::cin >> i;
			if (i <= L.length)
			{
				std::cout << L.elem[i - 1].isbn << "  " << L.elem[i - 1].name << "  " << L.elem[i - 1].author << endl;


			}
			if (i > L.length)
				std::cout << "���޴��飡��鿴�����Ƿ���ȷ" << endl;
		}



	}

}

void Deletebyname(BookList &L)
{
	Book e;
	int i, j;
	char n = 0;
	while (1)
	{


		std::cout << "������Ҫɾ����������";
		std::cin >> e.name;
		for (i = 0; i < L.length; i++)
		{
			if (strcmp(L.elem[i].name, e.name) == 0)
			{
				for (j = i + 1; j <= L.length - 1; j++)
					L.elem[j - 1] = L.elem[j];
				--L.length;
				Printf(L);

			}


		}
	}

}