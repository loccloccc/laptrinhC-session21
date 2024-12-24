#include<stdio.h>
#include<string.h>
//Tạo file bt05.txt, xây dựng chương trình để người dùng nhập vào số dòng, nội dung từng dòng. 

//Ghi vào file nội dung vừa nhập theo từng dòng, sau khi nhập xong thì in nội dung file ra màn hình theo từng dòng.
int main(){
	int line;
	char str[100];
	char read[1000]={0};
	//1.tao file
	FILE  *fptr;
	fptr = fopen("bt05.txt","w");
	if(fptr==NULL)
	{
		printf("Tap tin loi.");
		return 1;
	}
	//2. xay dung chuong trinh cho ng nhap vao so dong , nd tung dong
	//2.1 so dong
	printf("Moi ban nhap so dong :");
	scanf("%d",&line);
	str[line];
	//2.2 nhap tung dong
	for(int i = 0 ; i < line ; i++)
	{
		printf("dong %d:\n",i+1);
		fflush(stdin);
		fgets(str,100,stdin);
		fprintf(fptr,"%s",str);
	}
	fclose(fptr);
	//in 
	fptr = fopen("bt05.txt","r");
	if(fptr==NULL)
	{
		printf("Tap tin loi.");
		return 1;
	}
	printf("cac dong co trong file:\n");
	while(fgets(read,sizeof(read),fptr) != NULL)
	{
		printf("%s \n",read);
	}
	fclose(fptr);
	return 0 ;
}
