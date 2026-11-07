#include<stdio.h>
#include<string.h>
struct Contact{
	char name[20];
	char number[20];
};
int main(){
	int choice=0;
	struct Contact book[100]={0};
	int count=0;
	FILE*fp=fopen("contacts.txt","r");
	if(fp!=0){
		fscanf(fp,"%s %s",book[count].name,book[count].number);
		while(fscanf(fp,"%s %s",book[count].name,book[count].number)==2){count++;}
		fclose(fp);
		printf("成功读取了%d个联系人",count);
	}
	do{
		printf("1.添加联系人\n");
		printf("2.显示所有联系人\n");
		printf("3.查找联系人\n");
		printf("4.退出");
        scanf(" %d", &choice);
	switch(choice){
		case 1:printf("选择添加联系人\n");
		       scanf("%s %s",book[count].name,book[count].number);
		       FILE*fpSave=fopen("contact.txt","a");
		       if(fpSave!=NULL){
		       	fprintf(fpSave,"%s %s\n",book[count].name,book[count].number);
		       	fclose(fpSave);
			   }
			   printf("添加成功");
		       count++;
		break;
		case 2:printf("选择显示所有联系人\n");
		        if(count==0){
					printf("无联系人\n");
				}
				else{
					for(int i=0;i<count;i++){
						printf("%s %s\n",book[i].name,book[i].number);
					}
				}
		break;
		case 3:printf("选择查找联系人\n");
		break;
		case 4:printf("选择退出\n");
		break;
		default:printf("错误\n");
	}}	while(choice!=4);
	return 0;
}
