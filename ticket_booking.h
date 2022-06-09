#include<stdio.h>
#include<string.h>
#include"seatsel.h"
	char a[100]="",b[100]="",c[10]="",d[20]="";
	char fair[10]="";
	int busno=0;
	int i;

int ticket_booking(){
	
	FILE *fp;
	int size=100;
	char ch[size];
	fp=fopen("places.txt","r");
	while(fgets(ch,size,fp)){
		printf("\t\t\t\t\t%s",ch);
	}
	fclose(fp);
	
	printf("From: ");
	scanf("%s",a);
	printf("To: ");
	scanf("%s",b);
	printf("Select type [AC/non-AC]: ");
	scanf("%s",c);
	printf("Date (dd/mm/yyyy) : ");
	scanf("%s",d);
	
	char a1[100] = "Hyderabad";
	char b1[100] = "Warangal";
	char c1[100] = "Nizambad";
	char d1[100] = "Adilabad";
	char e1[100] = "Khammam";
	char f1[100] = "Karimnagar";
	char g1[100] = "Nalgonda";
	char h1[100] = "AC";
	char i1[100] = "non-AC";
	
	
	
	
	if(strcmp(a1,a)==0 && strcmp(b1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=400;
		i=0;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(a1,a)==0 && strcmp(b1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=401;
		i=1;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(a1,a)==0 && strcmp(c1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=402;
		i=2;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(a1,a)==0 && strcmp(c1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=403;
		i=3;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(a1,a)==0 && strcmp(d1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=404;
		i=4;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(a1,a)==0 && strcmp(d1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=405;
		i=5;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(a1,a)==0 && strcmp(e1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=406;
		i=6;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(a1,a)==0 && strcmp(e1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=407;
		i=7;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(a1,a)==0 && strcmp(f1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=408;
		i=8;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(a1,a)==0 && strcmp(f1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=409;
		i=9;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(a1,a)==0 && strcmp(g1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=410;
		i=10;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(a1,a)==0 && strcmp(g1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=411;
		i=11;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
//#################################################

    if(strcmp(b1,a)==0 && strcmp(a1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=500;
		i=12;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(b1,a)==0 && strcmp(a1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=501;
		i=66;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(b1,a)==0 && strcmp(c1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=502;
		i=13;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(b1,a)==0 && strcmp(c1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=503;
		i=14;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(b1,a)==0 && strcmp(d1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=504;
		i=15;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(b1,a)==0 && strcmp(d1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=505;
		i=16;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(b1,a)==0 && strcmp(e1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=506;
		i=17;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(b1,a)==0 && strcmp(e1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=507;
		i=18;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(b1,a)==0 && strcmp(f1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=508;
		i=19;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(b1,a)==0 && strcmp(f1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=509;
		i=20;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(b1,a)==0 && strcmp(g1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=510;
		i=21;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(b1,a)==0 && strcmp(g1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=511;
		i=22;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}

    // ##########################################

    if(strcmp(c1,a)==0 && strcmp(a1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=600;
		i=23;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(c1,a)==0 && strcmp(a1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=601;
		i=24;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(c1,a)==0 && strcmp(b1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=602;
		i=25;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(c1,a)==0 && strcmp(b1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=603;
		i=26;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(c1,a)==0 && strcmp(d1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=604;
		i=27;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(c1,a)==0 && strcmp(d1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=605;
		i=28;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(c1,a)==0 && strcmp(e1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=606;
		i=29;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(c1,a)==0 && strcmp(e1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=607;
		i=30;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(c1,a)==0 && strcmp(f1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=608;
		i=31;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(c1,a)==0 && strcmp(f1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=609;
		i=32;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(c1,a)==0 && strcmp(g1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=610;
		i=33;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(c1,a)==0 && strcmp(g1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=611;
		i=34;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}

    //#############################################


    if(strcmp(d1,a)==0 && strcmp(a1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=700;
		i=35;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(d1,a)==0 && strcmp(a1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=701;
		i=36;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(d1,a)==0 && strcmp(c1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=702;
		i=37;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(d1,a)==0 && strcmp(c1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=703;
		i=38;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(d1,a)==0 && strcmp(b1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=704;
		i=39;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(d1,a)==0 && strcmp(b1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=705;
		i=40;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(d1,a)==0 && strcmp(e1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=706;
		i=41;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(d1,a)==0 && strcmp(e1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=707;
		i=42;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(d1,a)==0 && strcmp(f1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=708;
		i=43;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(d1,a)==0 && strcmp(f1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=709;
		i=44;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(d1,a)==0 && strcmp(g1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=710;
		i=45;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(d1,a)==0 && strcmp(g1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=711;
		i=46;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}

    //#############################################

    if(strcmp(e1,a)==0 && strcmp(a1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=800;
		i=47;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(e1,a)==0 && strcmp(a1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=801;
		i=48;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(e1,a)==0 && strcmp(c1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=802;
		i=49;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(e1,a)==0 && strcmp(c1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=803;
		i=50;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(e1,a)==0 && strcmp(d1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=804;
		i=51;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(e1,a)==0 && strcmp(d1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=805;
		i=52;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(e1,a)==0 && strcmp(b1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=806;
		i=53;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(e1,a)==0 && strcmp(b1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=807;
		i=54;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(e1,a)==0 && strcmp(f1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=808;
		i=55;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(e1,a)==0 && strcmp(f1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=809;
		i=56;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(e1,a)==0 && strcmp(g1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=810;
		i=57;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(e1,a)==0 && strcmp(g1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=811;
		i=58;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}

    //###########################################################

    if(strcmp(f1,a)==0 && strcmp(a1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=900;
		i=59;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(f1,a)==0 && strcmp(a1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=901;
		i=60;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(f1,a)==0 && strcmp(c1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=902;
		i=61;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(f1,a)==0 && strcmp(c1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=903;
		i=62;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(f1,a)==0 && strcmp(d1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=904;
		i=63;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(f1,a)==0 && strcmp(d1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=905;
		i=64;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(f1,a)==0 && strcmp(e1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=906;
		i=65;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(f1,a)==0 && strcmp(e1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=907;
		i=67;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(f1,a)==0 && strcmp(b1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=908;
		i=68;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(f1,a)==0 && strcmp(b1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=909;
		i=69;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(f1,a)==0 && strcmp(g1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=910;
		i=70;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(f1,a)==0 && strcmp(g1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=911;
		i=71;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}

    //###################################################

    if(strcmp(g1,a)==0 && strcmp(a1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=300;
		i=72;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(g1,a)==0 && strcmp(a1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=301;
		i=73;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(g1,a)==0 && strcmp(c1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=302;
		i=74;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(g1,a)==0 && strcmp(c1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=303;
		i=75;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(g1,a)==0 && strcmp(d1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 499\n");
		strcpy(fair,"499");
		busno=304;
		i=76;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(g1,a)==0 && strcmp(d1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=305;
		i=77;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(g1,a)==0 && strcmp(e1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=306;
		i=78;	
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(g1,a)==0 && strcmp(e1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 349\n");
		strcpy(fair,"349");
		busno=307;
		i=79;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(g1,a)==0 && strcmp(f1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 549\n");
		strcpy(fair,"549");
		busno=308;
		i=80;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(g1,a)==0 && strcmp(f1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=309;
		i=81;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	
	else if(strcmp(g1,a)==0 && strcmp(b1,b)==0 && strcmp(h1,c)==0){
		printf("Price is 249\n");
		strcpy(fair,"249");
		busno=310;
		i=82;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else if(strcmp(g1,a)==0 && strcmp(b1,b)==0 && strcmp(i1,c)==0){
		printf("Price is 199\n");
		strcpy(fair,"199");
		busno=311;
		i=83;
		printf("Bus Number: %d\nBus ID: %d",busno,i);
		seat_selection1(busno,i);
	}
	else{
		printf("Invalid Input");
	}
}
