#include<stdio.h>
int main(){
	int a=100;
	int *p=&a;
	printf("%d\n",a);
	printf("%p\n", &a);
	printf("%p\n",p);
	*p=999;
	printf("%d",a);
	return 0;
}
