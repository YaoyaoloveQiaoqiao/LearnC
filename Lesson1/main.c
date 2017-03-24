/*

C语言由方法组成

*/
#include <stdio.h>

void triangle(int m);

int main()
{
        //triangle(20);
	
	int arr[1000];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		arr[i]=i;
		printf("%d",arr[i]);
	}
	/*	
	int count = 20;
	for(int n=1;n<=count;n++){
		//printf("空格行数：%d;;;;",count - n);
		for(int i=0;i<count-n;i++){
			printf(" ");
		}
		//printf("*数量：%d",2 * n - 1);
		for(int i=0;i<2*n-1;i++){
			printf("*");
		}
		printf("\n");	
	}
	*/
	return 0;
}

void triangle(int m){
	int z=0;
	for(int i=0;i<=m;i++){
		for(int j=0;j<=2*m+1;j++){
			if(((2*m+1)/2)-z<= j && j<=((2*m+1)/2)+z){		
				printf("*");
                 	}else{
				printf(" ");
			}		
		}
        printf("\n");
	z++;
        }
	
}
