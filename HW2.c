#include <stdio.h>
#include <stdlib.h>

void triangle(char zi){     //���X�����T���� 
	int to=0;
	char i,j,k;
	for(i='a';i<=zi;i++){            //������ 
		for(j=zi-to;j>='a';j--){    //����ťտ�X 
			printf(" ");
		}for(k=zi-to;k<=zi;k++){    //����r����X 
			printf("%c",k);
		}to++;
		printf("\n");
	}
}
int main(){                                                               //�e�� 
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
	system("pause");                        /*�ù��Ȱ�*/
    system("cls");                           /*�M���e��*/
    
    int passcode,i,j;
    int p=0;
    printf("�п�J�K�X:");               //���ұK�X 
    for(i=3; i>0; i--){                  //�K�X�u���J3�� 
    	if(p==0){
    		fflush(stdin);							/*�M��input buffer*/
    		scanf("%d",&passcode);
    		if(passcode != 2024){
    			if(i==1){
    				break;
				}
    			printf("�Ѿl%d�����|\n",i-1);
    			printf("�п�J�K�X:");
			}else if(passcode == 2024){
				system("pause");                        /*�ù��Ȱ�*/
    			system("cls");                          /*�M���e��*/
				int b,num;
				char ch;                           
    			for(j=0; 1; j++){                        //��� 
    					printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    					printf("                                                                                       \n");
    					printf("                     |                      a. �e�X�����T����                         |\n");
    					printf("                                                                                       \n");
    					printf("                     |                      b. ��ܭ��k��                             |\n");
    					printf("                                                                                       \n");
    					printf("                     |                      c.����                                    |\n");
    					printf("                                                                                       \n");
    					printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    					printf("\n");
    					printf("�п�J:");
    					fflush(stdin);							/*�M��input buffer*/
    					scanf("%c",&ch);
    					if(ch == 'a' || ch == 'A'){             //�P�_��Ja,A 
    						system("pause");                        /*�ù��Ȱ�*/
    						system("cls");                          /*�M���e��*/
    						int r;
    						printf("�п�J�r��:");
    						for(r=0;1;r++){
    							char input;
    							fflush(stdin);							/*�M��input buffer*/
    							scanf("%c",&input);
    							if(input >= 'a' && input <= 'n'){
    								triangle(input);                      //�I�s��� triangle
    								system("pause");                        /*�ù��Ȱ�*/
    								system("cls");                          /*�M���e��*/
    								break;
								}else{
									system("pause");                        /*�ù��Ȱ�*/
    								system("cls");                          /*�M���e��*/
									printf("�Э��s��J�r��:");
								}
    						}
						}else if(ch == 'b' || ch == 'B'){           //�P�_��Jb,B
							int f,g,c;
							system("pause");                        /*�ù��Ȱ�*/
    						system("cls");                          /*�M���e��*/
    						printf("�п�J1~9�����:");
    						for(c=0;1;c++){
    							fflush(stdin);							/*�M��input buffer*/
    							scanf("%d",&num);
 
    							if(num>=1 && num<=9){                 //�P�_��J1~9 
    								for(f=1;f<=num;f++){              //���k�� 
    									for(g=1;g<=num;g++){
    										if(f==g){
    											printf("%dx%d=%d ",f,g,f*g);
    										}
										}printf("\n");
									}system("pause");                        /*�ù��Ȱ�*/
    								system("cls");                          /*�M���e��*/
    								break;
								}else{
									system("pause");                        /*�ù��Ȱ�*/
    								system("cls");                          /*�M���e��*/
									printf("�Э��s��J1~9�����:");
								}
							}
						}else if(ch == 'c' || ch == 'C'){                //�P�_��Jc,C
							char comfirm;
    						while(p==0){
    							printf("Continue?(y/n) ");
    							fflush(stdin);							/*�M��input buffer*/
    							scanf("%c",&comfirm);
    							if(comfirm == 'y' || comfirm == 'Y'){      //�P�_��Jy,Y
    								system("pause");                        /*�ù��Ȱ�*/
    								system("cls");                          /*�M���e��*/
    								break;
								}else if(comfirm == 'n' || comfirm == 'N'){   //�P�_��Jn,N
    								p=2;
								}else{
									printf("�Э��s��J\n");
								}
							}if(p==2){
								break;
							}
						}else{
							printf("�Э��s��J\n");
							system("pause");                        /*�ù��Ȱ�*/
    						system("cls");                          /*�M���e��*/
						}
    			}	
    		}
		} 
	}return 0;
}

 
