#include<stdio.h>
#include"myfile.h"
#include<stdlib.h>
#include<string.h>
#include<sys/time.h>

int main(){
	FILE *fp=fopen("dataset2","r");
	char input[105];
	char *str[1000000];
	int idx=0;
	struct timeval start,end;
	unsigned long diff;
	while(fgets(input,105,fp)!=NULL){
		*(str+idx)=malloc(sizeof(char)*strlen(input));
		if(*(input+strlen(input)-1)=='\n'){
			*(input+strlen(input)-1)='\0';
		}
		strcpy(str[idx],input);
		idx++;
	}
        gettimeofday(&start,NULL);
	bubblestringsort(str,1000000);
	gettimeofday(&end,NULL);
        diff = 1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
        printf("Sorting performance %ld us (equal %f sec)\n", diff,diff/1000000.0);
        return 0;
}
