
#include <stdio.h>
#include <string.h>
int main(){
	char inputName[2];
	char name[4];
	int buffer = 0; 
	printf("Please enter your name: ");
	scanf("%s",&name); 
	//fgets(name, sizeof name, stdin);
	strcpy(inputName,name);
	//gets(name);
	printf("This is name variable %s\n", name);
	printf("This is inputName variable %s\n", inputName);
	printf("This is buffer %d\n", buffer);
	printf("Your name is: %s\n", inputName);

}
