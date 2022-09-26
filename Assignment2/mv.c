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
	
	
	if (argc == 3 ){
		file_des_source = open(argv[1], O_RDONLY);		
		if (file_des_source < 0){
			printf("error in opening file\n");
			exit(1);
		}
		else{
			while((state = read(file_des_source, file_buff, BUFF_MAX_SIZE) ) != 0){
				if (state < 0){
					printf("error in reading file data\n");
					exit(1);
				}
				else{
					printf("data from file %s\n", file_buff);
					file_des_tin = open(argv[2], O_CREAT|O_RDWR, S_IRWXU|S_IWUSR|S_IWGRP);
					if (file_des_tin < 0){
						printf("error in opening file\n");
						exit(1);
						}
					write(file_des_tin, file_buff, BUFF_MAX_SIZE);
				}
			}
				state = unlink(argv[1]);
				if (state < 0){
					printf("error in removing original file\n");
					exit(1);
				}
			
			
		}
	}
	
	else {
		printf("Command not found \n");
		exit(1);
	}


	return 0;
}
