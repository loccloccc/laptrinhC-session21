#include<stdio.h>
#include<string.h>
//Sử dụng file bt01.txt đã tạo, xây dựng chương trình để ghi thêm vào file một chuỗi bất kỳ do người dùng nhập vào.

int main(){
	//1.mo file
	FILE *fptr;
	char str[1000];
	fptr=fopen("bt01.txt","a");
	if(fptr==NULL)
	{
		printf("Loi tap tin.");
		return 1;
	}
	//2.thao tac voi file
	else
	{
	
		printf("Moi ban nhap :");
		fgets(str,1000,stdin);
		fprintf(fptr," %s",str);
	}
	//3.dong file
	fclose(fptr);
	printf("Da them vao tap tin ");
	return 0 ;
}
