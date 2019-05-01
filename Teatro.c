#include <stdio.h>
#include <windows.h>
int x1,x2,y1,y2,x3=707,y3=366,x4=724,y4=384,parador=0,cadaux,daux;
POINT p;
int iponto=0;
int preco,q,controle=0,numerofileira,dia,d,espec,cad,i,j,i2,j2,n[3][2][20][30],cont,palco,aux,aux2,c1,c2;
char letra, fil;
// Resolução utilizada: 1366 x 768(FullScreen). Fonte: Comic Sans MS, Tam. 10
void teatro(){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|0);
		aux = 65;
		(dia==0)?i=0:(dia==1)?i=1:(dia==2)?i=2:printf("eu");
		(espec==0)?j=0:(espec==1)?j=1:printf("eu2");
		system("mode 200,200");
		system("cls");
		numerofileira=20;
		for(i;i!=-1;i=-1){
			 for(j;j!=-1;j=-1){
			 	  	printf("\t\t     ");
					   while(aux<=79){
							printf(" %c  ",aux);
							aux++;
						}
						aux=65;
						printf("\t");
						while(aux<=79){
							printf(" %c' ",aux);
							aux++;
						}
						printf("\n");
					for(i2=0;i2<20;i2++){
						(i2==10)?SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|0),printf("\t\t\t\t\t\t\t\t     C   O   R   R   E   D   O   R \n"):printf("");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|0);
						(i2<=10)?printf("\n\t\t%d   ",numerofileira):printf("\n\t\t %d   ",numerofileira);
						numerofileira--;
						for(j2=0;j2<30;j2++){
							if (n[i][j][i2][j2]==0){
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|2);
				                printf ("|%c| ",223);
							(j2==14)?printf("\t"):printf("");
							}
							if (n[i][j][i2][j2]==1){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|4),
							printf("|%c| ", 223);
							(j2==14)?printf("\t"):printf("");
							}
							if((i2==19) &&(j2==29)){
								printf("\n\n\t\t     ");
							    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|4);
								for(q=0; q<63; q++)
									printf("%c ",205);
									printf("\n\t\t    %c", 186);	
								for(q=0; q<29; q++)
									printf("  ");
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|1);
									printf(" P A L C O");
								for(q=0; q<28; q++) 
									printf("  ");
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|4);	
									printf(" %c", 186);	
						}
						}
					printf("\n");
					}
					printf("\n");
			} 
		}
	}
void mouse(){
	aux=0;
	aux2=0;
	iponto = 0;
	while(!iponto){
  	 if((GetKeyState(VK_LBUTTON) & 0x80) != 0){
     	GetCursorPos(&p);
     	iponto = -1;
      }
	}
}
void espetaculo(){
		numerofileira=1;
		dia = -1;
		espec = -1;
		while(dia!=0&&dia!=1&&dia!=2){
			printf("Qual dia da semana?\n\n \t0 - Sexta\n \t1 - S%cbado\n \t2 - Domingo\n\n",160);
			scanf("%d",&dia);		/*dia=getch();*/
			(dia!=0&&dia!=1&&dia!=2)?printf("Digite um dia da semana corretamente.\n"):printf("");
		}
		while(espec!=0&&espec!=1){
			printf("Qual espet%cculo?\n\n \t0 - Manh%c\t1- Noite\n",160,198);
			scanf("%d",&espec);
			//espec=getch();
		(espec!=0&&espec!=1)?printf("Digite o hor%crio do espet%cculo corretamente.\n\n",160,160):printf("");
		}
}
main(){
	for(i=0;i<=2;i++){
		for(j=0;j<=1;j++){
			for(i2=0;i2<=19;i2++){
				for(j2=0;j2<=29;j2++){
					n[i][j][i2][j2]=0;
				}
			}
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|5);
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t=========================\n       \t\t\t\t\t\t\t\t\t|Teatro|\n\t\t\t\t\t\t\t\t\t=========================");
	sleep(2);
	do{
		controle=0;
		system("mode 110,30");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|0);
		printf("Selecione uma das op%c%ces abaixo:\n\n T - Informar o n%cmero total de poltronas dispon%cveis.\n\n R - Reservar poltrona\n\n C - Consultar todas as poltronas.\n\n F - Fim da execu%c%co.\n\n",135,228,163,161,135,198);	
		aux = 0;
		while(!aux){
			letra = getch();
			letra = toupper(letra);
			(letra==84||letra==67||letra==82||letra==70)?aux=1:printf("\nEntre com um caractere correto.\n\n");
		}	
		system("cls");
	if(letra=='T'){
		cont=0;
		espetaculo();
		(dia==0)?i=0:(dia==1)?i=1:(dia==2)?i=2:printf("eu");
		(espec==0)?j=0:(espec==1)?j=1:printf("eu2");
		for(i;i!=-1;i=-1){
			 for(j;j!=-1;j=-1){
					for(i2=0;i2<20;i2++){
						for(j2=0;j2<30;j2++){
							if(n[i][j][i2][j2]==0)
								cont++;
						}
					}
			}
		}
		printf("\n%d assentos dispon%cveis.\n\n", cont,161);
	}
	if(letra=='R'){
		espetaculo();
		printf("\n\nSelecione a poltrona desejada e aperte uma tecla para conferir sua disponibilidade e pre%co. \n\n\t\tRedirecionando...",135);
		sleep(3);
		teatro();
		//dia=dia-48;
		//espec=espec-48;
		aux=0,aux2=0;
		parador=0;
		while(parador==0){
			mouse();
			y1=30;
			y2=48;
			daux=0;
			for(d=0;d<20;d++){
				cadaux=0;
				(d==10)?y1=y3,y2=y4,daux=0:printf("");
				x1=171;
				x2=187;
				for(cad=0;cad<30;cad++){
					(cad==15)?x1=x3,x2=x4,cadaux=0:printf("");
					if(((p.x>=(x1+(cadaux*32)))&&(p.x<=(x2+(cadaux*32))))&&((p.y>=(y1+(daux*32)))&&(p.y<=(y2+(daux*32))))){
						aux=cad;
						aux2=d;
						parador++;
						c1=d;
						c2=cad;}
				cadaux++;
				}
			daux++;
			}
		}
		cad=aux;
		d=aux2;
		aux=0;
		i=0;
		if(n[dia][espec][d][cad]==0){
			(d<=4)?preco=200:(d<=9)?preco=300:(d<=14)?preco=400:(d<=19)?preco=500:printf("");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|0);
			c1-=19;
			c1=abs(c1);
			(c2<16)?c2+=64,printf("\nA cadeira %c da fileira %d se encontra dispon%cvel e custa %d reais. Deseja confirmar a compra?\n\nS - Sim\t N - Nao\n\n",c2+1, c1+1,161,preco):(c2>15)?c2+=64,c2-=15,printf("\nA cadeira %c' da fileira %d se encontra dispon%cvel e custa %d reais. Deseja confirmar a compra?\n\nS - Sim\t N - Nao\n\n",c2+1, c1+1,161,preco):printf("");
			while(!i){
				aux = getch();
				aux = tolower(aux);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|0);
				(aux==115)?i=1,n[dia][espec][d][cad]=1,controle++,printf("Compra efetuada com sucesso. Bom espet%cculo!\n\n",160):(aux==110)?i=1,printf("Compra cancelada.\n\n"):printf("");	
			}
		}
		else{
			if(n[dia][espec][d][cad]==1){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15<<4|3);	
				printf("A cadeira est%c ocupada. Tente novamente.\n",160);
			}
		}
	if(controle==1){
		sleep(5);
		i=dia;
		j=espec;
		teatro();
	}
	}
	if(letra=='C'){
		espetaculo();
		teatro();
 	}
	system("pause");
	system("cls");
	printf("\n\n");
}while(letra!='F');
	printf("\tSistema encerrado. Boa sess%co!",198);
}
