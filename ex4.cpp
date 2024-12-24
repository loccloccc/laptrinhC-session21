#include<stdio.h>

int main(){
	FILE *fptr;
	char str[100];
	//1.mo file
	fptr = fopen("bt01.txt","r");
	if(fptr==NULL)
	{
		printf("Loi tap tin");;
		return 1;
	}
	//2.thao tac voi file
	if(fgets(str,sizeof(str),fptr))
	{
		printf("dong dau : %s",str);
	}
	
	
	//3.dong file
	fclose(fptr);
	return 0 ;
}
