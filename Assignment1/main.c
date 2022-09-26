#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX   100

int main()
{

	char data[MAX] = {0};	
	char *exit_data = "exit\n"; 
	while(1){
		printf("abdelrahmanRefaat > ");
		if (fgets(data, MAX, stdin)){
			if (strcmp(data,exit_data) != 0){
				printf("%s", data);
			}
			else{
				printf("Goodbye\n");
				exit(0);
			
			}
		}
		
		
	
	}


	return 0;
}
