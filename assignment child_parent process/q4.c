#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/wait.h>

int main(){
		
		printf(" start processc\n");
		 
				int ret_B,ret_C,s;
			int ret_A = fork();
				if(ret_A == -1){
				printf("fail to create process for child\n ");
				exit(0);
		}
		else if(ret_A == 0){
				printf("child [%d] a created \n",getpid());
				ret_B = fork();

					if(ret_B ==0){
							printf("child [%d] b created\n",getpid());
						ret_C= fork();

							if(ret_C==0){
							printf("child [%d] c created\n",getpid());
							sleep(1);
					exit(0);	
						}
						sleep(2);
						exit(0);
				}
				sleep(3);
				exit(0);
		}

		else {
				wait(&s);
				printf("Child is terminated..\n");
		}
}
