#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("man ! what can i say\n");
//	return 0;
//}

//����+����+���д���-��ݼ���ctrl+f5

//int main()
//{
//	printf("%d\n", 100); //��ӡһ������-%d
//	//��ӡdouble��%lf��float��%f
//	//sizeof-�ؼ���-������-�������ͻ��߱�����ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//дһ���������
//scanf���������뺯��
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