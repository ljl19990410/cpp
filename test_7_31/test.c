#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("man ! what can i say\n");
//	return 0;
//}

//编译+链接+运行代码-快捷键：ctrl+f5

//int main()
//{
//	printf("%d\n", 100); //打印一个整数-%d
//	//打印double用%lf，float用%f
//	//sizeof-关键字-操作符-计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//写一个代码求和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;

}