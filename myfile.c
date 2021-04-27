#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void bubblesort(int *arr,int size){
	int idx;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				idx=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=idx;
			}
		}
	}
}
void selectionsort(int *arr,int size){
	int *min;
	int idx;
	for(int i=0;i<size;i++){
		min=arr+1;
		for(int j=i+1;j<size;j++){
			if(arr[j]<*min){
				min=arr+j;
			}
		}
		idx=arr[i];
		arr[i]=*min;
		*min=idx;
	}
}
void insertionsort(int *arr,int size){
	for(int i=1;i<size;i++){
		int k=i-1;
		int key=arr[i];
		while(k>=0&&arr[k]>key){
			arr[k+1]=arr[k];
			k--;
		}
		arr[k+1]=key;
	}
}
void bubblestringsort(char **str,int size){
	char tmp[101];
    	for(int i=0;i<size;i++){
    		for(int j=0;j<size-1-i;j++){
			if(strcmp(str[j],str[j+1])>0){
				strcpy(tmp,str[j]);
			        strcpy(str[j],str[j+1]);
			        strcpy(str[j+1],tmp);
			}
    		}
     	}
}

void selectionstringsort(char **str,int size){
	char min[101];
	char tmp[101];
	for(int i=0;i<size;i++){
		strcpy(min,str[i]);
		for(int j=i+1;j<size;++j){
			if(strcmp(str[j],min)<0){
				strcpy(min,str[j]);
			}
		}	
		strcpy(tmp,str[i]);
		strcpy(str[i],min);
		strcpy(min,tmp);
	}
}

void insertionstringsort(char **str,int size){
    	int k;
    	char key[101];
    	for (int i=1;i<size;i++){
    		k=i-1;
    		strcpy(key,str[i]);
		while (k>=0 && strcmp(str[k],key)>0){
			strcpy(str[k+1],str[k]);
			k--;
		}
		strcpy(str[k+1],key);
	}
}
