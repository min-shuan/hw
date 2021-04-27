#include<stdio.h>
#include"myfile.h"
#include<stdlib.h>
#include<string.h>
#include<sys/time.h>

int main(){
	FILE *fp=fopen("dataset1","r");
	char input[30];
	int arr[1000005],idx=0;
	struct timeval start,end;
	unsigned long diff;
	while(fgets(input,1000000,fp)!=NULL){
		if(*(input+strlen(input)-1)=='\n'){
			*(input+strlen(input)-1)=='\0';
		}
		arr[idx]=atoi(input);
		idx++;
	}
	gettimeofday(&start,NULL);
	insertionsort(arr,1000000);
	gettimeofday(&end,NULL);
	diff = 1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
	printf("Sorting performance %ld us (equal %f sec)\n", diff,diff/1000000.0);
	return 0;
}
