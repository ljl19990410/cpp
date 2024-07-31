#include <stdio.h>
#define MAX 10000;

//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
int g_val = 2021;
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

//性别
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	MALE,
	FEMALE,
	SECRET
};

//常量
//int main()
//{
//	//1.字面常量
//	/*3.14;
//	10;
//	'a';
//	"abcdef";*/
//
//	//2.const修饰的常变量
//	const int num = 10;//不能被修改，否则报错
//	printf("num = %d\n", num);
//
//	//3.#define定义的标识符常量
//	int n = MAX;
//	printf("n = %d\n", n);
//
//	//4.枚举常量
//	//可以一一列举的常量
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//字符串:由双引号引起来的一串字符
int main()
{
	//字符数组-数组是一组相同类型的元素
	//字符串在结尾隐藏了一个\0的字符（结束标识符）
	//实际长度为6
	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}