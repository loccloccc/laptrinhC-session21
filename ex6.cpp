#include<stdio.h>
#include<process.h>
//Tạo file bt06.txt, xây dựng chương trình để sao chép nội dung từ file bt01.txt sang file bt06.txt.
int main(){
	FILE *fptr1;
	FILE *fptr2;
	//1.tao file bt06
	fptr1 = fopen("bt06.txt","w");
	//2.mo file bt01
	fptr2 = fopen("bt01.txt","r");
	if(fptr1==NULL)
	{
		printf("Tap tin loi");
		return 1;
	}
	if(fptr2==NULL)
	{
		printf("Tap tin loi");
		return 1;
	}
	char cpy;
	if(cpy=fgetc(fptr2)!= EOF)
	{
		fputc(cpy,fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("da copy");
	
	return 0 ;
}
