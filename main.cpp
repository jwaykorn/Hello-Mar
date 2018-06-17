#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=0;
	printf("Hello Mar!!\n");
	printf("Enter Your State Number: ");
	scanf("%d",&i);
	
	if (i==1){
		printf("Helo Noth Mar.");
	}else if(i==2){
		printf("Helo East Mar.");
	}
	return 0;
	
}
