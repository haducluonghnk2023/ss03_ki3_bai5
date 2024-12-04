#include<stdio.h>
int isPalindrome(char str[],int start,int end){
	if(start >= end){
		return 1;
	}
	while (start < end && !isalnum(str[start])) {
        start++;
    }
	while (start < end && !isalnum(str[end])) {
	    end--;
	}
	if (tolower(str[start]) != tolower(str[end])) {
        return 0; 
    }
	return isPalindrome(str,start+1,end-1);	
}
int main(){
	char str[100];
	printf("nhap chuoi :");
	fgets(str,sizeof(str),stdin);
	int length = strlen(str);
	if(isPalindrome(str,0,length-1)){
		printf("day la chuoi dx");
	}else{
		printf("day 0 p la chuoi dx");
	}

	return 0;
}

