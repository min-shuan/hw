#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define length 100


int main(){
	int flag;
       	char str[101];
	for(int i=0;i<1000000;i++){
		for(int j=0;j<length;j++){
			flag=rand()%2;  
   	                if(flag==0){
				str[j]='A'+rand()%26;  
			}  
			if(flag==1){
				str[j]='a'+rand()%26;  
			}     
		}
		str[length]='\0';  
		printf("%s\n",str);
	}
}
