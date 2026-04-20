/*From one parent create 5 child processes. Each child should run for 5 seconds and print count along
with its pid. Parent should wait for all child processes to complete and clean all of them. Hint: use loop
to fork() multiple child processes.*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){

		int ret, s , count = 0 ;
		printf(" start program start ");
		for(int i =0;i<5;i++){
				ret= fork();
				if(ret == -1)
				{
				printf(" Failed to create child process ");
				exit(-1);
				}

		else if ( ret == 0)
		{
						printf(" child process : %d \n pid : %d\n ppid : %d\n ", i , getpid() , getppid() );
						count ++;
						printf(" count = %d ", count);
						sleep(5);
						exit(0);
		}

}

				for(int i=0; i<5;i++){
				wait(&s);
				printf(" process :  pid : %d\n ppid : %d\n  status : %d", getpid() , getppid() , WEXITSTATUS(s));
				}
				printf("program finished !!!\n");
						return 0;
						}
