#include<stdio.h>
#include<string.h>
int main(){
	char data[100],key[100];
	printf("Enter Data:");
	scanf("%s",data);
	printf("Enter Key:");
	scanf("%s",key);
	char quo[100],rem[100],temp[100],key1[100];
	int dlen = strlen(data);
	int klen = strlen(key);
	strcpy(key1,key);
	int i,j;
	for(i = 0;i<klen;i++){
		data[dlen+i] = '0';
	}
	for(i=0;i<klen;i++){
		temp[i] = data[i];
	}
	for(i=0;i<dlen;i++){
		quo[i] = temp[0];
		if(quo[i] == '0')
		for(j=0;j<klen;j++)
		key[j] = '0';
		else
		for(j=0;j<klen;j++)
		key[j] = key1[j];
		for(j = klen-1;j>0;j--){
			if(temp[j] == key[j])
			rem[j-1] = '0';
			else
			rem[j-1] = '1';
		}	
		rem[klen-1] = data[i+klen];
		strcpy(temp,rem);
	}
	printf("Quotient is ");
	for(i=0;i<dlen;i++){
		printf("%c",quo[i]);
	}
	printf("\n");
	printf("Remainder is ");
	for(i=0;i<klen-1;i++){
		printf("%c",rem[i]);
	}
	printf("\n");
	printf("Original Data is ");
	for(i=0;i<dlen;i++){
		printf("%c",data[i]);
	}
	for(i=0;i<klen-1;i++){
		printf("%c",rem[i]);
	}
	printf("\n");
	return 0;
}
