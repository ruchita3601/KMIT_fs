#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define BUS_NUM 84
#define FILENAME_SIZE 1024
struct Passenger{
	char name[20];
    char phoneno[20],age[10];
    int busnum,seat,id,tid;
    struct Passenger *link;
};
struct Bus {
    int busno;
    int unqID;
    struct Passenger *firstPassenger;
};
int ticid[50];
struct Bus *arr[BUS_NUM];
struct Passenger *cur,*first,*last;
void create(int,int);
void nodecreation(int i,int busno);
void display(int i,int busno);
void cancellation(int i,int busno);

void nodecreation(int i,int busno){
	int j,k;
    first = NULL;
	for(j=0;j<84;j++){
		if(j==i){
			for(k=0;k<32;k++){
				cur = (struct Passenger *)malloc(sizeof(struct Passenger));
				strcpy(cur->age," ");
				cur->busnum=NULL;
				strcpy(cur->name," ");
				strcpy(cur->phoneno," ");
				cur->id=NULL;
				if(first==NULL){
					first=cur;
					cur->link=NULL;
					last=cur;
					struct Bus *bus = (struct Bus *)malloc(sizeof(struct Bus));
                    bus->busno = busno;
                    bus->unqID = i;
                    bus->firstPassenger = cur;
                    arr[i] = bus;
				}
				else{
					last->link=cur;
					cur->link=NULL;
					last=cur;
				}
			}
		}
	}
}


int seat_selection1(int busno,int i){
	while(1){
		int ch,k,n;
		printf("\n\n1.Seat Selection\n2.Tickect Info\n3.Cancellation\n4.Menu\n\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				k=0;
                if (arr[i] == NULL) {
                    nodecreation(i,busno);
                }
				printf("\nNumber of seats to be booked: ");
				scanf("%d",&n);
				while(k<n){
					create(i,busno);
					k++;
				}
				break;
			case 2:
				if(arr[i]==NULL){
					printf("Bus is empty\n");
				}
				else{
					display(i,busno);
				}
				break;
			case 3:
				if(arr[i] == NULL){
					printf("Bus is empty!!\n");
				}
				else{
					cancellation(i,busno);
				}
				break;
			case 4:
				return(1);
//			default:
//				printf("Invalid Choice!!");
		}
	}
}
	
	

void create(int c,int busno){
    int seatNo,i,j1,j,seatNum;
    int c1=0,c2=0; 
	char name[20],phone[20],age[10];
	struct Passenger *t=arr[c]->firstPassenger; 
	struct Passenger *t2=arr[c]->firstPassenger; 
	
	for(j1=0;j1<84;j1++){
        if(j1==c){
	        for(seatNo=1;seatNo<=32;seatNo++){
	        	if(strcmp(t2->name," ")==0 && strcmp(t2->phoneno," ")==0){
					printf("[%02d]",seatNo);
					c1++;
					c2++;
				}
				else{
					printf("[XX]");
					c1++;
					c2++;
				}
				if(c1==2){
					printf("\t");
					c1=0;
				}
				if(c2==4){
					printf("\n");
					c2=0;
				}
				t2=t2->link;
			}
		}      
    }
	
	char se[7];
	printf("\nEnter the seat number (1-32): ");
	scanf("%d",&seatNum);
	sprintf(se,"%d",seatNum);
	for(j=0;j<100;j++){
		if(j==c){
			for(i=1;i<seatNum;i++){
				t=t->link;
			}
			
			if(strcmp(t->age," ")==0 && t->busnum==NULL){
				printf("\nEnter the name: ");
				scanf("%s",name);
				printf("\nEnter the phone number: ");
			    scanf("%s",phone);
			    printf("\nenter the age: ");
			    scanf("%s",age);
				strcpy(t->name,name);
			    strcpy(t->phoneno,phone);
			    strcpy(t->age,age);
			    t->busnum=busno;
			    t->seat=seatNum;
			    t->id=c;
			    t->tid=1000+(rand()%9000);
			   // printf("ticket id: %d",t->tid);
			    sprintf(ticid,"%d",t->tid);
			    FILE *fp;
                char filename[FILENAME_SIZE];
                sprintf(filename,"%d",busno);
                printf("\nTicket Confirmed\n");
                printf("\n****\nTicket ID: %s\nName of the passenger: %s\nAge : %s\nPhone number: %s\nSeat number: %s\n****\n",ticid,name,age,phone,se);
            	fp=fopen(filename,"a+");
            	fprintf(fp,"\n****\nTicket ID: %s\nName of the passenger: %s\nAge : %s\nPhone number: %s\nSeat number: %s\n***\n",ticid,name,age,phone,se);
            	printf("\nDetails copied into file successfully!!!\n");
                fclose(fp);
			}
			else{
				printf("Already reserved!!\n");
				create(c,busno);
			}
			
		}
	}
}

void cancellation(int i,int busno){
	struct Passenger *t;
	int j,seatNo,Id;
	char name[200],ph[10];
	printf("\nEnter the bus ID: ");
    scanf("%d",&Id);
    for(j=0;j<84;j++){
    	if(Id==j){
    		t=arr[j]->firstPassenger;
    		printf("Enter the name and phone number : ");
    		scanf("%s%s",name,ph);
    		for(seatNo=0;seatNo<32;seatNo++){
    			if(strcmp(t->name,name)==0 && strcmp(t->phoneno,ph)==0){
    				strcpy(t->age," ");
    				strcpy(t->name," ");
    				strcpy(t->phoneno," ");
    				t->busnum=NULL;
    				printf("ticket cancelled!!\n");
                    return;
				}
				t=t->link;
			}
            //return;
		}
	}
}

void display(int i,int busno){
    int j,id,k=0,count=0;
    char ph[10];
    struct Passenger *t2;
    printf("\nEnter your bus ID: ");
	scanf("%d",&id);
	
	for(j=0;j<84;j++){
	    if(id==j){
	    	t2=arr[j]->firstPassenger;
	    	printf("enter the ph: ");
			scanf("%s",ph);
			for(k=0;k<32;k++){
			    if(strcmp(ph,t2->phoneno)==0){
			    	if(t2->age!=NULL && t2->busnum!=NULL){
			        	printf("Name = %s\tPhone Number = %s\tAge = %s\tBus no = %d\tSeat number = %d\tBus ID = %d\t",t2->name,t2->phoneno,t2->age,t2->busnum,t2->seat,t2->id);
			        	printf("\n");
			        	printf("ticket id:%d",t2->tid);
					}
				}
				else{
					count++;
				}
				t2=t2->link;    
			}
			if(count==32){
				printf("Details not found!!");
			}
			return;  
		}       
	}
}