//strlen和sizeof的区分
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };//"abcdef";
	printf("%d\n", sizeof(arr1));//打印结果：4，空间大小
	printf("%d\n", sizeof(arr2));//打印结果：3，空间大小
	printf("%d\n", strlen(arr1));//计算字符串长度（不考虑‘\0’）,打印结果：3
	printf("%d\n", strlen(arr2));//无结束标志，随机数
}
