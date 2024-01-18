#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int menu(){
	
	int choice;
	
	printf("\n\n MAIN MENU \n");
	
	puts(" Enter 1 for Inventory management");
	puts(" Enter 2 for Events management");
	puts(" Enter 3 for Player management");
	puts(" Enter 4 to watch basketball tutorials for beginners");
	puts(" Enter 0 to exit program");
	
	printf(" Enter choice: ");
	scanf("%d", &choice);
	
	return choice ;
}

void inventory(){
	
	puts("\n INVENTORY MANAGEMENT \n");
	char id[10];
	char password[10];
	int choice = 1 ;
	int qty=0 ;
	int currentitems = 6;
	char searchSup[20] ;
	int searchCode ;
	
	
	struct items {
		
		int code;
		char name[20];
		char supplier[20]; 
		int quantity ;
		
	};
	
	struct items item[100]= {
		
            { 1001,"shirt", "adidas", 10},
            { 1002,"shorts", "adidas", 10},
            { 1003,"basketball", "amazon", 5},
            { 1004,"shoes", "nike", 10},
            { 1005,"drink", "gatorade", 50},
            { 1006,"basket", "amazon", 2}
            
    };
	
	while(choice != 0) {
		
		puts("\n\tINVENTORY MENU\n");
		puts("\tEnter 1 to find number of items in the inventory");
		puts("\tEnter 2 to display current inventory");
		puts("\tEnter 3 to list details of all items by a supplier");
		puts("\tEnter 4 to find item details by code");
		puts("\tEnter 5 to add item information");
		puts("\tEnter 6 to update stock");
		puts("\tEnter 0 to exit inventory\n");
		
		printf("\tEnter choice: ");
		scanf("%d", &choice);
		
		printf("\n\t .... \n\n");
		int i;
		
		switch(choice) {
			
			case 0:
				printf("\tExiting Inventory...");
				break;
			
			case 1:
				
				printf("\tTotal items: %d \n", currentitems);
				break;
				
			case 2:
				
				for( i = 0; i < currentitems; i++) {
					
					printf("\n \n \tItem Code: %d \n", item[i].code);
					printf("\tItem Name: %s \n", item[i].name);
					printf("\tSupplier: %s \n", item[i].supplier);
					printf("\tQuantity: %d ", item[i].quantity);
					
					if(item[i].quantity <= 5) {
						
						printf("****LOW STOCK**** \n");		
					} 
					
				}
				break;
				
			case 3:
				printf("\tEnter supplier name: ");
				gets(searchSup);
				gets(searchSup);
				
				printf("\n\tItems supplied by %s: \n\n", searchSup);

				for(i = 0; i < currentitems; i++) {
					if( strcmp(searchSup, item[i].supplier) == 0) {
						
						printf("\tItem Code: %d \n", item[i].code);
						printf("\tItem Name: %s \n", item[i].name);
						printf("\tSupplier: %s \n", item[i].supplier);
						printf("\tQuantity: %d \n\n", item[i].quantity);
						
					}

				}

				break;
				
			case 4:
				printf("\tEnter item code: ");
				scanf("%d", &searchCode);
				
				for(i = 0; i < currentitems; i++) {
					if(searchCode == item[i].code) {
						printf("\n\tItem Code: %d \n", item[i].code);
						printf("\tItem Name: %s \n", item[i].name);
						printf("\tSupplier: %s \n", item[i].supplier);
						printf("\tQuantity: %d \n", item[i].quantity);
					}

				}
				break;
				
			case 5:
				
				puts("\tAdministrator access required, please enter credentials \n");
				
				printf("\tEnter user ID: ");
				scanf("%s", &id);
				
				printf("\tEnter password: ");
				scanf("%s", &password);
				
				if ( strcmp(id, "a") == 0 && strcmp(password, "a") == 0) {
					
					printf("\tEnter item code: ");
					scanf("%d", &item[currentitems].code); 
					
					printf("\tEnter item name: ");
					gets(item[currentitems].name); 
					gets(item[currentitems].name); 
					
					printf("\tEnter supplier: ");
					gets(item[currentitems].supplier);
					
					printf("\tEnter quantity: ");
					scanf("%d", &item[currentitems].quantity);
					
					currentitems++;
				
				}
				
				else {
					printf("\tSorry, you don't have authorization for this action \n");
				}
					
				break;
				
				
			case 6:
				
				puts("\tAdministrator access required, please enter credentials \n");
				
				printf("\tEnter user ID: ");
				scanf("%s", &id);
				
				printf("\tEnter password: ");
				scanf("%s", &password);
				
				if ( strcmp(id, "a") == 0 && strcmp(password, "a") == 0) {
					
					printf("\tEnter item code to update stock: ");
					scanf("%d", &searchCode);
					
					for(i = 0; i < currentitems; i++) {
						if(searchCode == item[i].code) {
							
							printf("\tEnter quantity to add to stock: ");
							scanf("%d", &qty);
							
							item[i].quantity = item[i].quantity + qty ;
						}
	
					}
				
				}
				
				else {
					printf("\tSorry, you don't have authorization for this action \n");
				}
					
				break;
				
			default:
				printf("\tInvalid entry \n");
		}
	
	}
	
	
	
}

void events(){
	
	puts("\n EVENT MANAGEMENT \n");
	
	
	int g;
	
	while(g != 0) {
		
		puts("\n\tEVENT MANAGEMENT MENU\n");
		puts("\tEnter 1 for male team schedule \n\tEnter 2 for female team schedule");
		puts("\tEnter 0 to exit event management");
		printf("\tEnter choice: ");
		scanf("%d",&g);
		
		if(g==1){
			printf("\n\t[________ schedule for male team ________]\n");
			printf("\n\tMONDAY\n\tpractice hours(pkt)\t 5pm-6pm----break----8pm-10pm");
			printf("\n\tTUESDAY\n\tpractice hours(pkt)\t 3pm-5pm----break----7pm-8pm");
			printf("\n\tWEDNESDAY\n\tpractice hours(pkt)\t 12pm-3pm");
			printf("\n\tTHRUSDAY\n\tpractice hours(pkt)\t 5pm-6pm----break----8pm-10pm");
			printf("\n\tFRIDAY\n\tpractice hours(pkt)\t 6pm-10pm");
			printf("\n\tSATURDAY\n\tcoaching session+VOD review(pkt)\t 7pm");
			printf("\n\tSUNDAY\n\tpractice hours(pkt)\t O-F-F-D-A-Y\n");
		}
		
		else if (g==2){
			printf("\n\t[________ schedule for female team ________]\n");
			printf("\n\tMONDAY\n\tpractice hours(pkt)\t 7pm-9pm");
			printf("\n\tTUESDAY\n\tpractice hours(pkt)\t O-F-F-D-A-Y");
			printf("\n\tWEDNESDAY\n\tpractice hours(pkt)\t 5pm-pm");
			printf("\n\tTHURSDAY\n\tcoaching session+VOD review(pkt)\t 7pm-9pm");
			printf("\n\tFRIDAY\n\tpractice hours(pkt)\t 6pm-10pm");
			printf("\n\tSATURDAY\n\t O-F-F-D-A-Y");
			printf("\n\tSUNDAY\n\t O-F-F-D-A-Y\n");
		    }
		    
		else if (g==0){
			printf("\n\tExiting event management ... \n");
			
		}
		
		else{
			printf("\tInvalid entry \n");
		}
		    
	}
		
}

void players(){
	puts("\n\t PLAYER MANAGEMENT \n");
	
	struct medical{
		float height;
		float weight;
		char bloodtype[5];
		char gender;
	};
	
	struct playerinfo{
		char name[50];
		char fathername[50];
		int playerNum;
		long long int contactNum;
		int dob[3];
		long long int cnic;
		char email[50];
		struct medical medHistory;
	};
	
	struct playerinfo player_data[20] = {
		"Talha Khan", "Zahid Khan", 2, 3338392473, 12, 3, 2002, 4220123423489, "talhazahid@gmail.com", {202.1, 99.80, "A+", 'M'},
		"Mateen Afridi", "Afridi Yousufzai", 5, 3004583560, 14, 2, 1994, 4220195738462, "afridimateen94@gmail.com", {200.8, 100.85, "B+", 'M'},
		"Muhammad Waseem", "Ahmed Rajput", 32, 3139023849, 18, 10, 1998, 4220192847576, "mhwaseem@gmail.com", {204.9, 98.29, "A-", 'M'},
		"Maha Zehra", "Faisal Zehra", 16, 3318362738, 23, 6, 2000, 4220172345619, "mahazehra00@gmail.com", {180.3, 75.57, "AB+", 'F'},
		"Laiba Tabraiz", "Tabraiz Khan", 10, 3332568889, 18, 5, 2002, 4220119222446, "laibatabraiz18@gmail.com", {165.9, 55.80, "A+", 'F'},
		"Fajr Fatima", "Zafar Sheikh", 45, 3028392012, 31, 4, 2001, 4220123423489, "fatimafajr@yahoo.com", {166.5, 60.24, "B-", 'F'},
		"Usaid Ahmed", "Ahmed Kamran", 31, 3459386564, 19, 11, 1999, 4220199778543, "usaidahmed@gmail.com", {210.0, 110.73, "O+", 'M'},
		"Muhammad Owais", "Farrukh Hayat", 7, 3112452310, 23, 6, 2000, 4220188349231, "owasome@gmail.com", {202.5, 89.54, "A+", 'M'},
		"Arham Tariq", "Tariq Hayat", 34, 3314534867, 29, 7, 2003, 4220197868756, "arhamtariq@gmail.com", {200.8, 99.55, "B-", 'M'},
		"Rameez Rehman", "Rehman Siddique", 11, 3114536328, 19, 12, 1997, 4220188833377, "rameezrehman@hotmail.com", {189.4, 100.80, "B+", 'M'},
		"Rameen Yahya", "Yahya Zaidi", 22, 3224637128, 4, 4, 1999, 4220122883312, "rameenyahya@gmail.com", {175.6, 69.43, "A-", 'F'},
		"Sidra Tul Muntaha", "Shabbir Sheikh", 99, 3013884775, 15, 6, 2002, 4220127362478, "sidra2002@gmail.com", {177.5, 70.31, "O-", 'F'},
		"Shahid Baloch", "Shakib Baloch", 100, 3138978786, 28, 2, 2000, 4220140032005, "shahidbaloch@gmail.com", {204.5, 115.32, "A+", 'M'},
		"Maryam Khan", "Babar Khan", 30, 3002773436, 6, 8, 1993, 4220177564435, "maryam93khan@gmail.com", {188.9, 80.89, "AB-", 'F'},
		"Ariba Shiekh", "Saquib Shiekh", 28, 3017686968, 27, 12, 2004, 422017867453, "aribashiekh@yahoo.com", {181.4, 64.98, "A+", 'F'},
		" "," ", 0, 0, 0, 0, 0, 0, " ", {0.0, 0.00, " ", ' '},
		" "," ", 0, 0, 0, 0, 0, 0, " ", {0.0, 0.00, " ", ' '},
		" "," ", 0, 0, 0, 0, 0, 0, " ", {0.0, 0.00, " ", ' '},
	};
	
	int choice=1, crrplrs = 15, snum = 0, flag = 0, fval = 0, c = 0;
	long long int cnum = 0, cnicnum = 0;
	char n[50], fn[50],emailadd[50], g, bt[5];
	
	while (choice != 0){
	
	printf("\n\n\t\t MENU \n\n");
	printf("\n\t1. Show records of all players.");
	printf("\n\t2. Search Player information using Player name.");
	printf("\n\t3. Search Player information using Player's father name.");
	printf("\n\t4. Search Player information using Player shirt number.");
	printf("\n\t5. Search Player information using Player contact number.");
	printf("\n\t6. Search Player information using CNIC.");
	printf("\n\t7. Search Player information using Player email address.");
	printf("\n\t8. Search Player(s) using gender.");
	printf("\n\t9. Search Player(s) using Blood type.");
	printf("\n\t10. Add new player.");
	printf("\n\t11. Count the total number of players registered.");
	printf("\n\t0. Exit.");
	printf("\n\tEnter choice: ");
	scanf("%d", &choice);

	switch (choice){
		case 0:
			printf("\n\tExiting Player management ... \n");
			break;
			
		case 1:
			
			for( int i = 0; i < crrplrs; i++){
				printf("\n\n\tPlayer Number %d: ", i + 1);
				
				printf("\n\tPlayer's Name: ");
				puts(player_data[i].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[i].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[i].playerNum);
			
				printf("\n\tPlayer's Contact Number: %lld", player_data[i].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[i].dob[0], player_data[i].dob[1], player_data[i].dob[2]);
					
				printf("\n\tPlayer's CNIC: %lld", player_data[i].cnic);
				
				printf("\n\tPlayer's email: ");
				puts(player_data[i].email);
				
				printf("\tPlayer's height: %.1f cm", player_data[1].medHistory.height);
				
				printf("\n\tPlayer's weight: %.2f kg", player_data[1].medHistory.weight);
				
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[i].medHistory.bloodtype);
				
				printf("\tPlayer's Gender: %c", player_data[i].medHistory.gender);
				
			}
			break;
			
		case 2:
			printf("\n\n\tEnter player's name: ");
			gets(n);
			gets(n);
			
			for (int i = 0; i < crrplrs; i++){
				if( strcmp(n, player_data[i].name) == 0){
					flag = 1;
					fval = i;
				}
			}
			if (flag == 1){
								
				printf("\n\n\tPlayer's Name: ");
				puts(player_data[fval].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[fval].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[fval].playerNum);
		
				printf("\n\tPlayer's Contact Number: %lld", player_data[fval].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[fval].dob[0], player_data[fval].dob[1], player_data[fval].dob[2]);
				
				printf("\n\tPlayer's CNIC: %lld", player_data[fval].cnic);
				
				printf("\n\tPlayer's email: ");
				puts(player_data[fval].email);
			
				printf("\tPlayer's height: %.1f cm", player_data[fval].medHistory.height);
				
				printf("\n\tPlayer's weight: %.2f kg", player_data[fval].medHistory.weight);
			
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[fval].medHistory.bloodtype);
			
				printf("\tPlayer's Gender: %c", player_data[fval].medHistory.gender);
				
				break;
			}
			
			flag, fval = 0;
			
			break;
			
		case 3:
			printf("\n\n\tEnter player's father's name: ");
			gets(fn);
			gets(fn);
			
			for (int i = 0; i < crrplrs; i++){
				if( strcmp(fn, player_data[i].fathername) == 0){
					flag = 1;
					fval = i;
					break;
				}
			}
			if (flag == 1){

				printf("\n\n\tPlayer's Name: ");
				puts(player_data[fval].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[fval].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[fval].playerNum);
		
				printf("\n\tPlayer's Contact Number: %lld", player_data[fval].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[fval].dob[0], player_data[fval].dob[1], player_data[fval].dob[2]);
				
				printf("\n\tPlayer's CNIC: %lld", player_data[fval].cnic);
			
				printf("\n\tPlayer's email: ");
				puts(player_data[fval].email);
			
				printf("\tPlayer's height: %.1f cm", player_data[fval].medHistory.height);
			
				printf("\n\tPlayer's weight: %.2f kg", player_data[fval].medHistory.weight);
			
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[fval].medHistory.bloodtype);
			
				printf("\tPlayer's Gender: %c", player_data[fval].medHistory.gender);
			}
			
			flag, fval = 0;
			
			break;
		
		case 4:
			printf("\n\n\tEnter player's Shirt number: ");
			scanf("%d", &snum);
			
			for (int i = 0; i < crrplrs; i++){
				if(snum == player_data[i].playerNum){
					flag = 1;
					fval = i;
				}
			}
			if (flag == 1){
								
				printf("\n\n\tPlayer's Name: ");
				puts(player_data[fval].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[fval].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[fval].playerNum);
		
				printf("\n\tPlayer's Contact Number: %lld", player_data[fval].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[fval].dob[0], player_data[fval].dob[1], player_data[fval].dob[2]);
				
				printf("\n\tPlayer's CNIC: %lld", player_data[fval].cnic);
				
				printf("\n\tPlayer's email: ");
				puts(player_data[fval].email);
			
				printf("\tPlayer's height: %.1f cm", player_data[fval].medHistory.height);
			
				printf("\n\tPlayer's weight: %.2f kg", player_data[fval].medHistory.weight);
			
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[fval].medHistory.bloodtype);
			
				printf("\tPlayer's Gender: %c", player_data[fval].medHistory.gender);
				
				break;
			}
			
			flag, fval = 0;
			
			break;
		
		case 5:
			printf("\n\n\tEnter player's contact number(without first 0): ");
			scanf("%lld", &cnum);
			
			for (int i = 0; i < crrplrs; i++){
				if(cnum == player_data[i].contactNum){
					flag = 1;
					fval = i;
				}
			}
			if (flag == 1){
					
				printf("\n\n\tPlayer's Name: ");
				puts(player_data[fval].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[fval].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[fval].playerNum);
		
				printf("\n\tPlayer's Contact Number: %lld", player_data[fval].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[fval].dob[0], player_data[fval].dob[1], player_data[fval].dob[2]);
				
				printf("\n\tPlayer's CNIC: %lld", player_data[fval].cnic);
			
				printf("\n\tPlayer's email: ");
				puts(player_data[fval].email);
			
				printf("\tPlayer's height: %.1f cm", player_data[fval].medHistory.height);
			
				printf("\n\tPlayer's weight: %.2f kg", player_data[fval].medHistory.weight);
			
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[fval].medHistory.bloodtype);
			
				printf("\tPlayer's Gender: %c", player_data[fval].medHistory.gender);
				
				break;
			}
			else{
				printf("\n\tInvalid Entry! Name is not registered.");
			}
			
			break;
			
			flag, fval = 0;
		
		case 6:
			
			printf("\n\n\tEnter player's CNIC(without gap): ");
			scanf("%lld", &cnicnum);
			
			for (int i = 0; i < crrplrs; i++){
				if(cnicnum == player_data[i].cnic){
					flag = 1;
					fval = i;
				}
			}
			if (flag == 1){
					
				printf("\n\n\tPlayer's Name: ");
				puts(player_data[fval].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[fval].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[fval].playerNum);
		
				printf("\n\tPlayer's Contact Number: %lld", player_data[fval].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[fval].dob[0], player_data[fval].dob[1], player_data[fval].dob[2]);
				
				printf("\n\tPlayer's CNIC: %lld", player_data[fval].cnic);
			
				printf("\n\tPlayer's email: ");
				puts(player_data[fval].email);
			
				printf("\tPlayer's height: %.1f cm", player_data[fval].medHistory.height);
			
				printf("\n\tPlayer's weight: %.2f kg", player_data[fval].medHistory.weight);
			
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[fval].medHistory.bloodtype);
			
				printf("\tPlayer's Gender: %c", player_data[fval].medHistory.gender);
				
				break;
			}
			else{
				printf("\n\tInvalid Entry! Name is not registered.");
			}
			
			flag, fval = 0;
	
			break;
		case 7:
			printf("\n\n\tEnter player's email address: ");
			gets(emailadd);
			gets(emailadd);
			
			for (int i = 0; i < crrplrs; i++){
				if( strcmp(emailadd, player_data[i].email) == 0){
					flag = 1;
					fval = i;
				}
			}
			if (flag == 1){
													
				printf("\n\n\tPlayer's Name: ");
				puts(player_data[fval].name);
				
				printf("\tFathers's Name: ");
				puts(player_data[fval].fathername);
				
				printf("\tPlayer's Shirt Number: %d", player_data[fval].playerNum);
		
				printf("\n\tPlayer's Contact Number: %lld", player_data[fval].contactNum);
			
				printf("\n\tPlayer's Date of Birth: %d/%d/%d", player_data[fval].dob[0], player_data[fval].dob[1], player_data[fval].dob[2]);
				
				printf("\n\tPlayer's CNIC: %lld", player_data[fval].cnic);
			
				printf("\n\tPlayer's email: ");
				puts(player_data[fval].email);
			
				printf("\tPlayer's height: %.1f cm", player_data[fval].medHistory.height);
			
				printf("\n\tPlayer's weight: %.2f kg", player_data[fval].medHistory.weight);
				
				printf("\n\tPlayer's Blood Type: ");
				puts(player_data[fval].medHistory.bloodtype);
			
				printf("\tPlayer's Gender: %c", player_data[fval].medHistory.gender);
				
				break;
			}
			
			flag, fval = 0;			
			
			break;

		case 8:
			printf("\n\n\tEnter players' gender(M or F): ");
			scanf(" %c", &g);
			
			for (int i = 0; i < crrplrs; i++){
				if(g == player_data[i].medHistory.gender){
					printf("\n\tPlayer's Name: ");
					puts(player_data[i].name);
				}
			}
			break;
		
		case 9:
			printf("\n\n\tEnter players' blood type: ");
			gets(bt);
			gets(bt);
			
			for (int i = 0; i < crrplrs; i++){
				if( strcmp(bt, player_data[i].email) != 0){
					printf("\n\tPlayer's Name: ");
					puts(player_data[i].name);
				}
			}
			
			break;
			
		case 10:
			printf("\n\n\tEnter Player's Name: ");
			gets(player_data[crrplrs].name);
			gets(player_data[crrplrs].name);
			
			printf("\n\tEnter Fathers's Name: ");
			gets(player_data[crrplrs].fathername);
				
			printf("\n\tEnter Player's Shirt Number: ");
			scanf("%d", &player_data[crrplrs].playerNum) ;
	
			printf("\n\tEnter Player's Contact Number: ");
			scanf("%lld", &player_data[crrplrs].contactNum);
		
			printf("\n\tEnter Player's Date of Birth(dd mm yyyy): ");
			scanf("%d %d %d", &player_data[crrplrs].dob[0], &player_data[crrplrs].dob[1], &player_data[crrplrs].dob[2]);
			
			printf("\n\tEnter Player's CNIC: ");
			scanf("%lld", &player_data[crrplrs].cnic);
		
			printf("\n\tEnter Player's email: ");
			gets(player_data[crrplrs].email);
			gets(player_data[crrplrs].email);
		
			printf("\n\tEnter Player's height in cm: ");
			scanf("%f", &player_data[crrplrs].medHistory.height);
		
			printf("\n\tEnter Player's weight in kg: ");
			scanf("%f", &player_data[crrplrs].medHistory.weight);
			
			printf("\n\tEnter Player's Blood Type: ");
			gets(player_data[crrplrs].medHistory.bloodtype);
			gets(player_data[crrplrs].medHistory.bloodtype);
		
			printf("\n\tEnter Player's Gender(M or F): "); 
			scanf(" %c", &player_data[crrplrs].medHistory.gender);
			
			crrplrs++;
			
			break;

		case 11:
			printf("\n\tTotal number of Players registered are: %d", crrplrs);
			
			break;
			
		default:
			printf("\n\tInvalid Entry! ");
			break;
		}
	
	}
	
}




int main(){
	
	int choice ;
	
	puts(" HOME SCREEN");
	
	
	do {
		
		choice = menu();
		
		switch(choice){
		
		case 0:
			printf("\n\n Closing program...\n Thank you for using our SPORTS MANAGEMENT SYSTEM :)");
			break;
		
		case 1:
			inventory();
			break;
			
		case 2:
			events();
			break;
				
		case 3: 
			players();
			break;
			
		case 4:{
			system("START https://www.youtube.com/watch?v=F6VLIExnc7Q");
			break;
		}	
		default:
			printf(" Invalid choice! Please retry. ");
			
		}	
			
	} while (choice != 0);
	
	
}

