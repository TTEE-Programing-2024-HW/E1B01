#include <stdio.h>
#include <stdlib.h>

int main(){                                                               //畫圖 
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
	system("pause");                        /*螢幕暫停*/
    system("cls");                           /*清除畫面*/
    
    int passcode,i,a;
    printf("請輸入密碼:");
    for(i=3; i>0; i--){
    	fflush(stdin);							/*清空input buffer*/
    	scanf("%d",&passcode);
    	if(passcode != 2024){
    		if(i==1){
    			break;
			}
    		printf("剩餘%d次機會\n",i-1);
    		printf("請輸入密碼:");
		}else if(passcode == 2024){
			system("pause");                        /*螢幕暫停*/
    		system("cls");                          /*清除畫面*/
			int z=0,b,num;
			char ch;                           
    		for(a=0; 1; a++){
    				printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    				printf("                                                                                       \n");
    				printf("                     |                      a. 畫出直角三角形                         |\n");
    				printf("                                                                                       \n");
    				printf("                     |                      b. 顯示乘法表                             |\n");
    				printf("                                                                                       \n");
    				printf("                     |                      c.結束                                    |\n");
    				printf("                                                                                       \n");
    				printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    				printf("\n");
    				printf("請輸入:");
    				scanf("%c",&ch);
    				if(ch == 'a' || ch == 'A'){
    					
					}else if(ch == 'b' || ch == 'B'){
						int f,g,c;
    					printf("請輸入1~9的整數:");
    					for(c=0;1;c++){
    						scanf("%d",&num);
    						system("pause");                        /*螢幕暫停*/
    						system("cls");                          /*清除畫面*/
    						if(num>=1 && num<=9){
    							for(f=1;f<=num;f++){
    								for(g=1;g<10;g++){
    									printf("%dx%d=%d ",f,g,f*g);
									}printf("\n");
								}system("pause");                        /*螢幕暫停*/
    							system("cls");                          /*清除畫面*/
    							break;
							}else{
								printf("請重新輸入1~9的整數:");
							}
						}
					}else if(ch == 'c' || ch == 'C'){
    					
					}
    					
    		}
		} 
	}
}
