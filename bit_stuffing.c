#include <stdio.h>
int main() {
	int n;
	printf("enter no of charecters");
	scanf("%d",&n);
	char data[n];
	printf("Enter data bits: ");
	scanf("%s",data);
	char flag[] = "01111110";
	printf("After stuffing: %s",flag);
	int i;
	int len = strlen(data);
	int count = 0;
	for(i = 0;i < len;i++){
		if(data[i] == '1'){
			count = count + 1;
		}
		else{
			count = 0;
		}
		printf("%c",data[i]);
		if(count == 5){
			printf("0");
			count = 0;
		}
	}
	printf("%s",flag);
    return 0;
}
