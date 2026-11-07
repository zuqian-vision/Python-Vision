#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int *scores=(int*)malloc(n*sizeof(int));
	if(scores==NULL){
		printf("FAIL");
		return 1;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&scores[i]);
	}
	for(int i=0;i<n;i++){
			printf("%d",scores[i]);
		}
		free(scores);
		scores=NULL;
		return 0;
}
