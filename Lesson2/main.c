/*

数组 指针 地址

*/

#include <stdio.h>
#include <stdlib.h>

char * createString();

int main()
{
	/*
	int a = 15;
	int* ptr = &a;

	printf("%d\n",*ptr);
	printf("%d",(int)ptr);	
	*/

	/*	
	int arry[1000];
	for(int i=0;i<sizeof(arry)/sizeof(int);i++){
		arry[i] = i;
	}

	int * ptr = arry;
	ptr++;
	
	printf("%d",*ptr);	
	*/
	
	/*	
	int * ptr = (int *)malloc(sizeof(int) * 1000);
	for(int i=0;i<1000;i++){
		ptr[i]=i;
		*ptr = i;
		
		printf("%d\n",*ptr);
		ptr++;
	}
	free(ptr);
	*/
	char * res = createString();
	printf("out function:%s\n",res);
	return 0;
}

char * createString()
{
	char * str = (char *)malloc(sizeof(char) * 1000);
	
	printf("in function:%s\n",str);
	return str;		
}
