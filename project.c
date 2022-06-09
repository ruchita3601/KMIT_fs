#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"login.h"
#include"ticket_booking.h"

void reservation();
void user();
void places();
void contact_info();
int main(){
	int n,i=0;
    char name[20];
    int phone,age;
    while(1){
        int m;
        
        printf("\n\n");
        printf("\t\t****************************************************************************\n\n");
        printf("\t\t\t\t\t------> BUS RESERVATION SYSTEM <---------\n\n");
        printf("\t\t****************************************************************************\n\n");
        printf("\t\t\t\t\t1.User\n\t\t\t\t\t2.Admin\n\t\t\t\t\t3.Exit\n\n");
        printf("\t\t\t\t\tEnter u r choice: ");
        scanf("%d",&m);
        switch (m){
            case 1:
                user();
                break;
        	case 2:
        		admin();
        	    break;
            case 3:
           	    exit(0);
//            default:
//                printf("enter crct choice!!");
        }
    }
}

void user(){
    int n;
    while(1){
        printf("\n\t\t\t\t\t1.Services Available for Places\n\t\t\t\t\t2.Reservation\n\t\t\t\t\t3.Contact Information\n\t\t\t\t\t4.Main Menu");
        printf("\n\n\t\t\t\t\tEnter your choice: ");
        scanf("%d",&n);
        switch(n){
        	case 1:
        		places();
        		break;
            case 2:
                reservation();
                break;
			case 3:
				contact_info();
				break;
			case 4:
				return;
            default:
                printf("Enter the crct choice!!");
        }
    }
	
}
void reservation(){
	ticket_booking();

}
void contact_info(){
	printf("ABC Pvt.ltd\n");
	printf("For any Queries: \n");
	printf("Contact Number: +91971984625\n");
	printf("Email Id: abcpvt.ltd@gmail.com\n");
	printf("Address: Besides Paradise Hotel Secunderabad\n\n");
	
}

void places(){
	FILE *fp;
	int size=100;
	char ch[size];
	fp=fopen("places.txt","r");
	while(fgets(ch,size,fp)){
		printf("\t\t\t\t\t%s",ch);
	}
	fclose(fp);
}
