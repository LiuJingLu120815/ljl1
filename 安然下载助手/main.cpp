#include<iostream>
#include <ShlObj.h> //IsUserAnAdmin()
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;
/*
2024/8/23 22��05
���®

Ŀ�꣺
1.αװ�ɰ�Ȼ���س���
2.���͸����ѣ����Ӻ���
3.���ں�̨���³���
4.�����Ӻ�����������__________�ļ���������

���ף�
1. ����ͬѧ/���ڻ����������п�ݷ�ʽ��Ϊ�˳���
2. ��ͨ�����紫���˳���̫�ѣ���һ��ʵ�֣�
*/



int main()
{
	bool ljl = false;

	ifstream fin("C:\\Users\\ljl20\\Desktop\\txt-ljl.txt");
	if (fin.is_open())
	{
		ljl = true;
		cout << "���®��¼�ɹ�" << endl;
	}

	//                 �ļ�ע��                 //


	string yndownload;
	BOOL bIsAdmin = IsUserAnAdmin();
	cout << "�������簲Ȼmini tools������ӭ�����أ�" << endl;
	Sleep(2000);
	cout << "Ĭ�����ص�ַ�������ļ���" << endl;
	Sleep(1000);
	if (bIsAdmin)
	{
		cout << "�Ƿ�ʼ���أ���yes/no��:";
		cin >> yndownload;
		if (yndownload == "yes")
		{
			cout << "��ʼ���أ�";
			Sleep(1500);
			system("start https://down-load.lanrar.com/file/?BGJXaVprBTQFDAA4AzZVOVRrBj5Q6gunVdtQsVaOA7QGJgF7DBwAPVZuUG8AdAFUUGUPZVdkBScEdVFkViQDMQQqVzBaKQU0BSsAMwNxVTJUZwZvUGoLVlU7UDJWNwMzBj8BYAxoAGFWOVAxAGMBNlAsD2xXewU6BDFRb1Y/AzIEMFcwWjEFZQV1ACYDJ1VpVDwGM1A9Cz1VfVBmVjIDLQY0AWUMfgAwVmNQPgA3ATZQPw8zVzEFMARhUTZWMwM1BDVXMVo1BWUFagBjA29VYVQ3BmJQNws9VWVQYFY7AzoGYwFhDDIAelZlUH4AMQEmUH8PeVdtBXUEalEzVjcDMwQwVzlaPwViBWYAYANxVSBUZwZuUGoLb1VvUGdWPQMwBjIBYgxjAGFWOVAxAGIBLlAkDyxXbgVrBHRRalY7AzUENlc0WjMFYwVnAG8DYVVsVCgGdlB/C35Vb1BnVj0DMAYyAWIMYwBnVjZQNQBlASZQfw9jV3gFOgQyUW9WOQMsBDVXOVoyBX8FYgBuA3lVZVQ/BjZQIQsvVTZQOVZ9A2wGWQE1DDoAaVYw");
			cout << endl << "������ɣ�";
		}
		else if (yndownload == "no")
		{
			cout << "�������أ�";
			Sleep(1500);
			return 0;
		}
		else
		{
			cout << "Ĭ��ѡ��3���ڹر�";
			Sleep(3000);
			return 0;
		}
	}
	else
	{
		cout << "���ù���ԱȨ�޴򿪴˳��򣬼����رճ���";
		Sleep(5000);
		return 0;
	}

	return 0;
}