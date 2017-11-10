//Libraries

#include "limits.h"
#include <stdio.h>
#define MAX_NUMBER 10


int max(char *num){
	int max=(*(num));
	printf("%d",max);
	for(int u=0;u<MAX_NUMBER;u++){
		if(max<(*(num+u))){
			max=(*(num+u));
		}
	}
	return max;
}

int main(void){

char ten_number[MAX_NUMBER]={};

printf("%s \n","Enter 10 numbers you want: ");

gets(ten_number);
int result = max(ten_number);
printf("%s",ten_number[0]);

}


