#include<stdio.h>
#include<stdlib.h>

/*三个全局变量*/
int global_uninit_var;//uninit:未初始化
int global_init_var1 = 520;//已经初始化
int global_init_var2 = 880;//已经初始化

void func(void);

void func(void)
{
	;//空语句
}

int main(void)
{
	/*两个局部变量*/
	int local_var1;
	int local_var2;

	/*两个静态变量*/
	static int static_uninit_var;//未初始化
	static int static_init_var = 456;//已初始化

	/*两个字符串*/
	const char *str1 = "I Love FishC.com!";
	const char *str2 = "You are right!";

	int* malloc_var = (int*)malloc(sizeof(int));//malloc申请动态空间

	printf("addr of func->%p\n", func);
	printf("addr of str1->%p\n", str1);
	printf("addr of str2->%p\n", str2);
	printf("addr of global_init_var1->%p\n", &global_init_var1);
	printf("addr of global_init_var2->%p\n", &global_init_var2);
	printf("addr of static_init_var->%p\n", &static_init_var);
	printf("addr of static_uninit_var->%p\n", &static_uninit_var);
	printf("addr of global_uninit_var->%p\n", &global_uninit_var);
	printf("addr of malloc_var->%p\n", malloc_var);
	printf("addr of local_var1->%p\n", &local_var1);
	printf("addr of local_var2->%p\n", &local_var2);

	return 0;






}