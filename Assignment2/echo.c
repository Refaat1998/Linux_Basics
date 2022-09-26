#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


#define	PATH_MAX_LEN	10
#define BUFF_MAX_SIZE	100

int main(int argc, char* argv[])
{
	char *ret_ptr;
	char buff[PATH_MAX_LEN];
	int index = 0;
	int file_des_source = 0;
	int file_des_tin = 0;
	char file_buff[BUFF_MAX_SIZE] = {0};
	int state = 0;
	
	if (argc >= 1){
		if (argc == 1){
			printf("\n");
		}
		else{
			for (index = 1; index < argc; index++){
				printf("%s ", argv[index]);
			}
			printf("\n");
		
		}	
	}
	
	else{
		printf("Command not found \n");
		exit(1);
	
	}




	return 0;
}
