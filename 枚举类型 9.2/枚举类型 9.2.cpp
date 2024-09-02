// 枚举类型 9.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//枚举类型:enum
//内存大小就是int类型的所占类型大小
//枚举的元素会有默认的值，是整数。第一个元素默认的值为0，第n个元素的值为n-1个元素加一。

#include <iostream>
#include<conio.h>
/*enum Arr1
{
	left,
	right,
	up, 
	down
}*/;//可以不用前面的数据类型
 enum {up='w',down='s',right='d',left='a' };
int main()
{

	while (1) {
		switch (_getch())
		{
		case up:
			printf("你按了上这个键\n");
			break; 
		case down:
			printf("你按了下这个键\n");
			break; 
		case left:
			printf("你按了左这个键\n");
			break; 
		case right:				
			printf("你按了右这个键\n");
			break;


		}
	}
	/*printf("Arr1的字节数为%d\n", sizeof(Arr1));*/
}
