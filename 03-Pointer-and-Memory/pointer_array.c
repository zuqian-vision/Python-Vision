#include<stdio.h>
int main(){
	int arr[3]={10,20,30};
	int *p=arr;
	printf("%d %d %d\n",arr[0],arr[1],arr[2]);
	printf("%d %d %d\n",*p,*(p+1),*(p+2));
	printf("%p\n",arr);
	printf("%p\n",p);
	printf("%p",p+1);
	return 0;
}
