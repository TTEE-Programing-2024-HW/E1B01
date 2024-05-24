#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char name[10];
	char id[7];
	int math;
	int physics;
	int english;
}student[10];

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

void input_grade(int nn){

		int i;
		
			for(i=0 ; i < nn ; i++){
				printf("\n");
				printf("please input student name:");
				fflush(stdin);							/*clear input buffer*/
				scanf("%s",student[i].name);
				printf("please input student id:");
				fflush(stdin);							/*clear input buffer*/
				scanf("%s",student[i].id);
				for(;;){
					if(strlen(student[i].id) == 6){
						break;	
					}else{
						printf("error\n");
						printf("please input student id again:");
						fflush(stdin);							/*clear input buffer*/
						scanf("%s",student[i].id);
					}	
				}
				printf("please input student math grade:");
				fflush(stdin);							/*clear input buffer*/
				scanf("%d",&student[i].math);
				for(;;){
					if(student[i].math >= 0 && student[i].math <= 100){
						break;	
					}else{
						printf("error\n");
						printf("please input student math grade again:");
						fflush(stdin);							/*clear input buffer*/
						scanf("%d",&student[i].math);
					}	
				}
				printf("please input student physics grade:");
				fflush(stdin);							/*clear input buffer*/
				scanf("%d",&student[i].physics);
				for(;;){
					if(student[i].physics >= 0 && student[i].physics <= 100){
						break;	
					}else{
						printf("error\n");
						printf("please input student physics grade again:");
						fflush(stdin);							/*clear input buffer*/
						scanf("%d",&student[i].physics);
					}	
				}
				printf("please input student english grade:");
				fflush(stdin);							/*clear input buffer*/
				scanf("%d",&student[i].english);
				for(;;){
					if(student[i].english >= 0 && student[i].english <= 100){
						break;	
					}else{
						printf("error\n");
						printf("please input student english grade again:");
						fflush(stdin);							/*clear input buffer*/
						scanf("%d",&student[i].english);
					}	
				}
				printf("\n");
				printf("\n");
			}system("pause");                        /*pause the screen*/
    		system("cls");                           /*clear the screen*/
		
	
}

void print_data(int nn){
	int i;
	float avg;
	printf("name              id        math     physics     english     average\n");
	for(i=0 ; i < nn ; i++){
		avg=(float)(student[i].math+student[i].physics+student[i].english)/3;
		printf("%-10s      %-7s      %2d        %2d         %2d          %.1f\n",student[i].name,student[i].id,student[i].math,student[i].physics,student[i].english,avg);
	}system("pause");                        /*pause the screen*/
    system("cls");                           /*clear the screen*/
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
    	
    	int n;
    
    	if(strcmp(choice,a)==0){
    		for(;;){
    			printf("please input n(5~10) which is type of integer:");
    			fflush(stdin);							/*clear input buffer*/
				scanf("%d",&n);
				if(n>=2 && n<=10){
    				input_grade(n);
    				break;
    			}
			}	
    		
		}else if(strcmp(choice,b)==0){
			print_data(n);
		
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


