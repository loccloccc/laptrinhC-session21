#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
	if(fptr==NULL)
	{
		printf("Loi mo tap tin");
		return 1 ;
	}
	char input[100] ;
	printf("Moi ban nhap :");
	fgets(input,100,stdin);
	fprintf(fptr,"%s",input);
	fclose(fptr);
	printf("Da viet vao trong file");
	return 0 ;
}
