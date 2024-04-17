#include<stdio.h>
#include<string.h>

int main(){
	printf("Meghavika Baidya 21BLC1667 \n");
	char username[20], password[20];
	printf("Enter username: ");
	scanf("%s", username);
	printf("Enter password: ");
	scanf("%s", password);
	
	if(strcmp(username, "21blc1667")==0
	&& strcmp(password, "meghavika1667")==0)
	{
		printf("Login successful");
	}
	else{
		printf("Invalid Credentials");
	}
	return 0;
}

