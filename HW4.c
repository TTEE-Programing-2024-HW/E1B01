#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exit_system(){
	printf("Continue? (y/n): ");
    while(1){

        char _continue[10],y[2]="y",n[2]="n";
        fflush(stdin);							/*clear input buffer*/
        scanf("%s", _continue);
        if (strcmp(_continue,y)==0) {
            system("pause");                        /*pause the screen*/
    		system("cls");                           /*clear the screen*/
    		return 1;
    		break;
        }else if (strcmp(_continue,n)==0) {
            return 0;
        }else{
            printf("Continue? (y/n): ");
		}
    }
}

int main() {
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
    	printf("---------------[Grade System]---------------\n");
        printf("|         a. Enter student grade           |\n");
        printf("|         b. Display student grade         |\n");
        printf("|         c. Search for student grade      |\n");
        printf("|         d. Grade ranking                 |\n");
        printf("|         e. Exit system                   |\n");
        printf("--------------------------------------------\n");
	
		char choice[10],a[2]="a",b[2]="b",c[2]="c",d[2]="d",e[2]="e";
    	printf("please input letter: ");
    	fflush(stdin);							/*clear input buffer*/
    	scanf("%s", choice);
    	system("pause");                        /*pause the screen*/
    	system("cls");                           /*clear the screen*/
    
    	if(strcmp(choice,a)==0){
    	
		}else if(strcmp(choice,b)==0){
		
		}else if(strcmp(choice,c)==0){
		
		}else if(strcmp(choice,d)==0){
		
		}else if(strcmp(choice,e)==0){
			int re;
			re = exit_system();
			if(re==0){
				return 0;
			}
		}else{
			printf("¿ù»~°T®§\n");
			system("pause");                        /*pause the screen*/
    		system("cls");                           /*clear the screen*/
		}
	}
}


