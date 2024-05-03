#include <stdio.h>
#include <stdlib.h>

void triangle(char zi){     //劃出直角三角形 
	int to=0;
	char i,j,k;
	for(i='a';i<=zi;i++){            //控制行數 
		for(j=zi-to;j>='a';j--){    //控制空白輸出 
			printf(" ");
		}for(k=zi-to;k<=zi;k++){    //控制字元輸出 
			printf("%c",k);
		}to++;
		printf("\n");
	}
}
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
    
    int passcode,i,j;
    int p=0;
    printf("請輸入密碼:");               //驗證密碼 
    for(i=3; i>0; i--){                  //密碼只能輸入3次 
    	if(p==0){
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
				int b,num;
				char ch;                           
    			for(j=0; 1; j++){                        //選單 
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
    					fflush(stdin);							/*清空input buffer*/
    					scanf("%c",&ch);
    					if(ch == 'a' || ch == 'A'){             //判斷輸入a,A 
    						system("pause");                        /*螢幕暫停*/
    						system("cls");                          /*清除畫面*/
    						int r;
    						printf("請輸入字元:");
    						for(r=0;1;r++){
    							char input;
    							fflush(stdin);							/*清空input buffer*/
    							scanf("%c",&input);
    							if(input >= 'a' && input <= 'n'){
    								triangle(input);                      //呼叫函數 triangle
    								system("pause");                        /*螢幕暫停*/
    								system("cls");                          /*清除畫面*/
    								break;
								}else{
									system("pause");                        /*螢幕暫停*/
    								system("cls");                          /*清除畫面*/
									printf("請重新輸入字元:");
								}
    						}
						}else if(ch == 'b' || ch == 'B'){           //判斷輸入b,B
							int f,g,c;
							system("pause");                        /*螢幕暫停*/
    						system("cls");                          /*清除畫面*/
    						printf("請輸入1~9的整數:");
    						for(c=0;1;c++){
    							fflush(stdin);							/*清空input buffer*/
    							scanf("%d",&num);
 
    							if(num>=1 && num<=9){                 //判斷輸入1~9 
    								for(f=1;f<=num;f++){              //乘法表 
    									for(g=1;g<=num;g++){
    										if(f==g){
    											printf("%dx%d=%d ",f,g,f*g);
    										}
										}printf("\n");
									}system("pause");                        /*螢幕暫停*/
    								system("cls");                          /*清除畫面*/
    								break;
								}else{
									system("pause");                        /*螢幕暫停*/
    								system("cls");                          /*清除畫面*/
									printf("請重新輸入1~9的整數:");
								}
							}
						}else if(ch == 'c' || ch == 'C'){                //判斷輸入c,C
							char comfirm;
    						while(p==0){
    							printf("Continue?(y/n) ");
    							fflush(stdin);							/*清空input buffer*/
    							scanf("%c",&comfirm);
    							if(comfirm == 'y' || comfirm == 'Y'){      //判斷輸入y,Y
    								system("pause");                        /*螢幕暫停*/
    								system("cls");                          /*清除畫面*/
    								break;
								}else if(comfirm == 'n' || comfirm == 'N'){   //判斷輸入n,N
    								p=2;
								}else{
									printf("請重新輸入\n");
								}
							}if(p==2){
								break;
							}
						}else{
							printf("請重新輸入\n");
							system("pause");                        /*螢幕暫停*/
    						system("cls");                          /*清除畫面*/
						}
    			}	
    		}
		} 
	}return 0;
}

 
