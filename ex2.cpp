#include<stdio.h>
#include<string.h>
//Sử dụng file bt01.txt đã tạo, xây dựng chương trình để in ra màn hình ký tự đầu tiên trong file.

int main(){
	FILE *fptr;
	//1.mo file
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL)
	{
		printf("Loi tap tin");
		return 1;
	}
	//2.thao tac file
	int str=fgetc(fptr);
	if(str!=NULL)
	{
		printf("%c",str);
	}
	else
	{
		printf("rong");
	}
	
	
	
	
	//3.dong file
	fclose(fptr);
	
	
	
	return 0 ;
}
