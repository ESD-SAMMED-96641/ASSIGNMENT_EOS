/*Thread does sum of integers in given range (start number and end number). Print result in main().*/

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
struct parameter {
		int start ;
		int end;
		int sum;
};

void *calculate_sum(void *par){
		struct parameter* data = (struct parameter*)par;
				data->sum =0;
		for(int i=data->start;i < data->end;i++){
				data-> sum +=i;
		}
	return 0;
		
}
	int main(){
			pthread_t t1;

			struct parameter mydata;

			printf("enter the start value : ");
			scanf("%d",&mydata.start);

			printf("enter the end value : ");
			scanf("%d",&mydata.end);

			int ret = pthread_create(&t1,NULL,calculate_sum,&mydata);
			
			pthread_join(t1,NULL);

			printf(" sum of %d to %d is %d ", mydata.start,mydata.end,mydata.sum);
	}

