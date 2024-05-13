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
    

        // �M���y���A�M��i�Ϊ��y��
        while(1){
		
        	int row = rand() % size;
    		int col = rand() % size;
                // �ˬd�O�_���s�򪺪Ůy��
                int k;
                for (k = 0; k < n; k++) {
                	
                    if (seats[row][col + k] != '-') {
                        break;
                    }
                }

                // �p�G���F�s�򪺪Ůy��A�N�аO��'@'�A�ê�^
                if (k == n) {
                    for (k = 0; k < n; k++) {
                        seats[row][col + k] = '@';
                    }
                    printf("�t�Τw���z�w�Ʈy��G\n");
                    printSeats();
                    return;
                }
        	}
        printf("��p�A�S����쨬�����s��y��C\n");
}

void arrangeSeats() {
    int numSeats;
    printf("�ݭn�X�Ӯy��]1~4�^: ");
    scanf("%d", &numSeats);

    if (numSeats >= 1 && numSeats <= 4) {
        // �M���y���A�M��i�Ϊ��y��
        while(1){
		
        	int row = rand() % size;
    		int col = rand() % size;
                // �ˬd�O�_���s�򪺪Ůy��
                int k;
                for (k = 0; k < numSeats; k++) {
                	
                    if (seats[row][col + k] != '-') {
                        break;
                    }
                }

                // �p�G���F�s�򪺪Ůy��A�N�аO��'@'�A�ê�^
                if (k == numSeats) {
                    for (k = 0; k < numSeats; k++) {
                        seats[row][col + k] = '@';
                    }
                    printf("�t�Τw���z�w�Ʈy��G\n");
                    printSeats();
                    return;
                }
        	}
            
        

        printf("��p�A�S����쨬�����s��y��C\n");
    } else {
        printf("���~�G�y��ƶq�����b1��4�����C\n");
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
            printf("�w��\n");
            system("pause");                        /*pause the screen*/
    		system("cls");                           /*clear the screen*/
            break;
        } else if (i == 2) {                    
            printf("���~\n");
            return 0;
        }
    }for(;;){
    //menu
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
            		int num;
            		printf("please input 1~4:");
            		fflush(stdin);             	/*clear input buffer*/
            		scanf("%d",&num);
            		if(num<=4 && num>=1){
            			auto_choose_seat(num);
					}
				}
                break;
            case 'c':
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
            default:                                   //detect whether inputing correct
                printf("���~�T��\n");
                system("pause");                        /*pause the screen*/
    			system("cls");                           /*clear the screen*/
                break;
        }
    }
}
	

