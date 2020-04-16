#include <stdio.h>
#include <stdlib.h>
double page_fault_rate();
void userInput(void);

double service_page_fault_empty;
double service_page_fault_modified;
double mem_access_time;
double times_page_modified;
double effective_access_time;
double pageFaultRate;
double service_page_fault_empty_ns;
double service_page_fault_modified_ns;
double times_page_modified_per;
	

void main(){
	int swtch;
	
	do{
	
	
	printf("Select the required option \n");
	printf("1.Find the PageFault Rate\n");
	printf("2.Exit");
	scanf("%d",&swtch);
	switch(swtch){
		case 1:userInput();break;
		case 2:exit(0);
	}
	printf("\n\n");

}while(swtch<3);
}
