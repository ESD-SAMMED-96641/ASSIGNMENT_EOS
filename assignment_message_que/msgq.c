
/* The PARENT Process send two numbers to the CHILD process via message queue. The parent process
calculate the sum and return via same message queue. The child process print the result and exit. The
parent process wait for completion of the child and then exit.*/




#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<signal.h>
#include<unistd.h>
#include<sys/msg.h>
#include<stdlib.h>
#include<string.h>

#define u_id   0x123

typedef struct msgbuf {
		long type;
		char msg[100];
}m_type;



int main(){
	int num1,num2,res;
	char ch;
	int ret ;
	int msgid = msgget(u_id, IPC_CREAT| 0600);
	int pid = fork();

if(pid== -1)
{
		printf("failed to create receiver ");
		exit(0);
}

if( pid == 0){
			m_type m2;
			printf(" waiting for values....\n");

			sleep(2);
			ret=msgrcv(msgid,&m2,sizeof(m2),1,0);
			printf("calculating the result.....\n");


			printf("calculation is %s\n" , m2.msg);
			
							}
			else
{
	m_type m1;
	
	m1.type = 1;
	

	printf(" num1 : ");
	scanf("%d",&num1);

	printf("num2 :");
	scanf("%d",&num2);
	
	printf("enter ch : ");
 	scanf(" %c",&ch);

		if( ch == '+')  res = (num1 + num2);

	else if (ch =='-')  res = (num1 - num2);
	
	else if (ch =='*')  res = (num1 * num2);

	else if (ch =='/')  res = (num1 / num2);
     
	sprintf(m1.msg, "%d", res); 
	
	ret = msgsnd(msgid,&m1,sizeof(m1),0);

	printf(" num1 = %d\n",num1);
	printf(" num2 = %d\n ",num2);
	printf("res is %d\n",res);

	int status;
	wait(&status);
	msgctl(msgid, IPC_RMID,NULL);
}
}
