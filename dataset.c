#include<stdio.h>
#include<stdlib.h>

int main(){
	int numdata[1000005];
        int idx=0;
	for(int i=0;i<1000000;i++){
		numdata[idx]=rand();
		printf("%d\n",numdata[idx]);
		idx++;
	}
	return 0;
}

