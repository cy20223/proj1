#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(){
	char buff[10];
	int fd;
	int fe;
	int ff;
	int fg;
	fd = open("test.txt",O_RDONLY);
	if(fd<0){
		perror("error:");
		exit(1);
	}
	fe = read(fd,buff,10);
	if(fe<0){
		perror("error");
		exit(1);
	}
	ff = write(1,buff,10);
	if(ff<0){
		perror("error");
		exit(1);
	}
	fg = close(fd);
	if(fg<0){
		perror("error");
		exit(1);
	}
}
