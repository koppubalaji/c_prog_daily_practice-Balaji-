#include<stdio.h>


int main(){
	int num,n,num2,num3;
	printf("Enter a number");
	scanf("%d",&num);
	
	printf("Enter the bit to be checked: ");
	scanf("%d",&n);

	num2=1<<n;

	num3=num&num2;


	if(num3==0){
		printf("ON");
	}
	else{
		printf("OFF");
	}
}

