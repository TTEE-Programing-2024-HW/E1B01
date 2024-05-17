#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 9

char seats[size][size];

void initialSeats() {     //generate seats
	int i,j;
    for ( i = 0; i < size; i++) {   //generate '-'
        for ( j = 0; j < size; j++) {
            seats[i][j] = '-';
        }
    }for ( i = 0; i < 10; i++) {
        int row = rand() % size;
        int col = rand() % size;
        seats[row][col] = '*';
    }
}
void printSeats() {       //print seats
	int i,j;
	printf("  1 2 3 4 5 6 7 8 9\n");
    for ( i = 0; i < size; i++) {
    	printf("%d ",i+1);
        for ( j = 0; j < size; j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }system("pause");                        /*pause the screen*/
    system("cls");                           /*clear the screen*/
}
void auto_choose_seat(int n){
    

        while(1){
		   //generate random number
        	int row = rand() % size;
    		int col = rand() % size;
                // find empty seats
                int k;
                if(n == 4){                       //choose seats,and mark it @
					if (seats[row][col] == '-' && seats[row][col + 1] == '-' && seats[row + 1][col] == '-' && seats[row + 1][col + 1] == '-' && (col + 1) < size) {
                    	seats[row][col] = '@';
                    	seats[row][col + 1] = '@';
                    	seats[row + 1][col] = '@';
                    	seats[row + 1][col + 1] = '@';
                    	printf("System has arranged your seats¡G\n");
                    	printSeats();
                    	char sat;
                    	printf("Satisfied? (y/n)");
                    	while(1){                                 //ask Satisfied?
							fflush(stdin);							/*clear input buffer*/
                    		scanf("%c",&sat);

                    		if (sat == 'y') {              //if y ,then return
                    			seats[row][col] = '*';
                    			seats[row][col + 1] = '*';
                    			seats[row + 1][col] = '*';
                    			seats[row + 1][col + 1] = '*';
                    			return;
                			}else if (sat == 'n') {       //if n ,then rerun the function
                			    seats[row][col] = '-';
                    			seats[row][col + 1] = '-';
                    			seats[row + 1][col] = '-';
                    			seats[row + 1][col + 1] = '-';
                    			break;
                			}else{
                				printf("Satisfied? (y/n): ");
							}
                    	}
                	}
				}
                if(n >= 1 && n <= 4){
                	for (k = 0; k < n; k++) {
                	
                    if (seats[row][col + k] != '-' ||  (col + k) >= size) {  //find empty seats
                        break;
                    }
                }

                // find empty seats,and mark it @,and return
                	if (k == n) {
                    	for (k = 0; k < n; k++) {
                    	    seats[row][col + k] = '@';
                    	}
                    	printf("System has arranged your seats¡G\n");
                    	printSeats();
                    	char sat;
                    	printf("Satisfied? (y/n)");
                    	while(1){                                 //ask Satisfied?
							fflush(stdin);							/*clear input buffer*/
                    		scanf("%c",&sat);

                    		if (sat == 'y') {                      //if y ,then return
                    			for (k = 0; k < n; k++) {
                    	    		seats[row][col + k] = '*';
                    			}
                    			return;
                			}else if (sat == 'n') {                //if n ,then rerun the function
                			    for (k = 0; k < n; k++) {
                    	    		seats[row][col + k] = '-';
                    			}
                    			break;
                			}else{
                				printf("Satisfied? (y/n): ");
							}
                    	}
                	}
				}        
        }return;
}
void self_choose_seats() {
    char input[100];
    while (1) {
        int i = 0,j = 0;
        
        printf("Please input the seats and input '0' for the end (for example \"1-2 2-9 0\"): ");
        fflush(stdin);							/*clear input buffer*/
        fgets(input, sizeof(input), stdin);  // read the whole line of input

        char *box = strtok(input, " ");           //declare box start from the address of input and the gap is space
        while (box != NULL){                           //determine whether box is null indicator
            if (box[0] == '0') {
                break;
            } else if (strlen(box) != 3 || box[1] != '-' || box[0] < '1' || box[0] > '9' || box[2] < '1' || box[2] > '9') {   //determine input format
                i++;
                printf("wrong input format\n");
                break;
            } else {
                int row = box[0] - '1';
                int col = box[2] - '1';
                if (seats[row][col] == '@' || seats[row][col] == '*') {      //determine whether seats are repeat
                    i++;
                    printf("Seat [%d,%d] has already been chosen\n", row + 1, col + 1);
                    break;
                } else {
                    seats[row][col] = '@';
                }
            }
            box = strtok(NULL, " ");        //let box start from the address of previous one and the gap is space
        }

        if (i == 0) {                      //print the seats you choose
            printSeats();
            for (i = 0; i < size; i++) {
                for ( j = 0; j < size; j++) {
                    if (seats[i][j] == '@') {
                        seats[i][j] = '*';
                    }
                }
            }
            return;
        }else{                                      //regain the seats
        	for(i = 0;i < size; i++){
        		for(j = 0;j < size; j++){
        			if(seats[i][j]=='@'){
        				seats[i][j]='-';
				}
			}
		}
		}
    }
}


int main() {
	srand(time(0));       //design random number generate
	char PASSWORD[5]="2024";
//personal picture
	printf("              *************************************************************\n");
	printf("              *************************************************************\n");
	printf("              **                                                         **\n");
	printf("              **          #######    ##    ######     #######    ##      **\n");
	printf("              **          #######    ##    ######     #######    ##      **\n");
	printf("              **          ##         ##    ##   ##    ##   ##    ##      **\n");
	printf("              **          ##         ##    ##    ##   ##   ##    ##      **\n");
	printf("              **          ##         ##    ##     ##  ##   ##    ##      **\n");
	printf("              **          ##         ##    ##     ##  ##   ##    ##      **\n");
	printf("              **          ##         ##    ##    ##   ##   ##    ##      **\n");
	printf("              **          ##         ##    ##   ##    ##   ##    ##      **\n");
	printf("              **          #######    ##    ######     ##   ##    ##      **\n");
	printf("              **          #######    ##    ######     ##   ##    ##      **\n");
	printf("              **          ##         ##    ##   ##    ##   ##    ##      **\n");
	printf("              **          ##         ##    ##    ##   ##   ##    ##      **\n");
	printf("              **          ##         ##    ##     ##  ##   ##    ##      **\n");
	printf("              **          ##         ##    ##     ##  ##   ##    ##      **\n");
	printf("              **          ##         ##    ##    ##   ##   ##    ##      **\n");
	printf("              **          ##         ##    ##   ##    ##   ##    ##      **\n");
	printf("              **          #######    ##    ######     #######    ##      **\n");
	printf("              **          #######    ##    ######     #######    ##      **\n");
	printf("              **                                                         **\n");
	printf("              *************************************************************\n");
	printf("              *************************************************************\n");
	system("pause");                        /*pause the screen*/
    system("cls");                           /*clear the screen*/
    int i;
    initialSeats();  			        	//call function initialSeats
	for ( i = 0; i < 3; i++) {
        printf("Please input your password(only three changes): ");
        char password[100];
        fflush(stdin);							/*clear input buffer*/
        scanf("%s", password);
//check password
        if (strcmp(password, PASSWORD) == 0) {    
            printf("Åwªï\n");
            system("pause");                        /*pause the screen*/
    		system("cls");                           /*clear the screen*/
            break;
        } else if (i == 2) {                    
            printf("¿ù»~\n");
            return 0;
        }
    }for(;;){
    //menu
    	system("pause");                        /*pause the screen*/
    	system("cls");                           /*clear the screen*/
    	printf("----------[BookingSystem]---------------\n");
        printf("|       a. Available seats             |\n");
        printf("|       b. Arrange for you             |\n");
        printf("|       c. Choose by yourself          |\n");
        printf("|       d. Exit                        |\n");
        printf("----------------------------------------\n");
        
        char choice;
        printf("please input letter:");
        fflush(stdin);							/*clear input buffer*/
        scanf(" %c", &choice);
        system("pause");                        /*pause the screen*/
    	system("cls");                           /*clear the screen*/
    //input a,b,c,d
        switch (choice) {
            case 'a':
            	printSeats();          //call function printSeats
                break;
            case 'b':
            	for(;;){
            		int num=5;
            		printf("please input 1~4:");
            		fflush(stdin);             	/*clear input buffer*/
            		scanf("%d",&num);
            		if(num<=4 && num>=1){
            			auto_choose_seat(num);    //call function auto_choose_seat
            			break;
					}
				}
                break;
            case 'c':
            	self_choose_seats();                 //call function self_choose_seats
                break;
            case 'd':
            	printf("Continue? (y/n): ");
            	while(1){

                	char _continue;
               		fflush(stdin);							/*clear input buffer*/
                	scanf("%c", &_continue);
               		if (_continue == 'y') {
                    	system("pause");                        /*pause the screen*/
    					system("cls");                           /*clear the screen*/
    					break;
                	}else if (_continue == 'n') {
                	    return 0;
                	}else{
                		printf("Continue? (y/n): ");
					}
            	}
                break;
            default:                                   //detect whether input is correct
                printf("¿ù»~°T®§\n");
                system("pause");                        /*pause the screen*/
    			system("cls");                           /*clear the screen*/
                break;
        }
    }
}
	

