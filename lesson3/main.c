/*

杨辉三角

*/
#include <stdio.h>


void triangle(int m);

int main()
{
        triangle(9);
	
	/*
	int arr[1000];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		arr[i]=i;
		printf("%d",arr[i]);
	}
	*/
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
	//int * arr = (int *)malloc(sizeof(int) * m * (2 * m - 1));
	int arr[100][100];	
	for(int i=0;i<m;i++){
		for(int j=0;j<2*m-1;j++){
				if(i==0){
					arr[i][j]=0;
					if(j==(2*m-1)/2){
						arr[i][j]=1;
					}
				}else{
				        int x=j-1;
					if(x<0){
						x=0;
					}
					arr[i][j]=arr[i-1][x]+arr[i-1][j+1];

				}
				if(arr[i][j]==0){
					printf(" ");
				}else{
					printf("%d",arr[i][j]);	
			        }
                 }
		printf("\n");	
	}
        
	
}
