
/* 3. Find max number of child processes that can be created on Linux using C program? Hint: use fork() in
infinite loop (wisely).*/



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
		printf(" start process ");
 		static int count = 0;
	
		while(1){
						
				int ret = fork();
				if( ret == -1){
						printf(" child failed to create\n ");
						printf("%d\n",count);

						break;
							
				}

				else if ( ret== 0)
				{
						printf("child pid [%d] count :%d\n",getpid(),count);
						sleep(10);
						exit(0);				
				}		
					
				
	
				else
				{	
						count++;
						printf("end of process\n ");
				}
			
}
//kill(0,SIGTERM);
return 0;
}
