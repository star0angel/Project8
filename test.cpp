#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

#include <iostream>

using namespace std;
//将字符串中的整数提取出来
int main()
{
	char arr[100] = { 0 };
	//接收一组字符串
	cin >> arr;
	char* parr = arr;
	int sum[10] = {0};
	int total=0;
	int i = 0;
	while (*parr)//读到字符串尾
	{
		if (*parr>='0'&&*parr<='9')//判断是否是数字
		{
			while (*parr >= '0' && *parr <= '9')
			{
				total = total * 10 + (*parr-48);
				parr++;
			}
			sum[i++] = total;
			total = 0;
		}
		else
		{
			parr++;
		}
	}
	int j = 0;
	for (;sum[j]!=0;j++)
	{
		cout << sum[j] << endl;
	}
	return 0;
}