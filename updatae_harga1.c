#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//#include "validasi.c"

//==========================================================================
//                            VARIABEL GLOBAL                              =
//==========================================================================
char hrg[100];
char pil_kode;
struct tabel_apdate1{
char kode[10];
char barang[20];
int harga;
int stock;
}sport_update1[50];
int ubah;
char stck[100];

//===========================================================================
//                              PROTOTYPE                                   =
//===========================================================================
void harga();
void updt_harga();
void updt_stock();

//===========================================================================
//                               PENDATAAN                                  =
//===========================================================================

void isidata_update1(){
	strcpy(sport_update1[0].kode,"1");
   strcpy(sport_update1[0].barang,"Bola Mikasa");
   sport_update1[0].harga=100000;
   sport_update1[0].stock=20;
   strcpy(sport_update1[1].kode,"2");
   strcpy(sport_update1[1].barang,"Kaos Kaki ");
   sport_update1[1].harga=25000;
   sport_update1[1].stock=50;
	strcpy(sport_update1[2].kode,"3");
   strcpy(sport_update1[2].barang,"Deker");
   sport_update1[2].harga=30000;
   sport_update1[2].stock=30;
   strcpy(sport_update1[3].kode,"4");
   strcpy(sport_update1[3].barang,"Sarung Tangan Kiper");
   sport_update1[3].harga=60000;
   sport_update1[3].stock=20;
   strcpy(sport_update1[4].kode,"5");
   strcpy(sport_update1[4].barang,"Jersey");
   sport_update1[4].harga=150000;
   sport_update1[4].stock=50;
   strcpy(sport_update1[5].kode,"6");
   strcpy(sport_update1[5].barang,"Sepatu Nike");
   sport_update1[5].harga=120000;
   sport_update1[5].stock=35;
}

void tabel_apdate1(){
   hps_menu();
   setcolor(0,0);
   for(int a=15;a<=23;a++){
   	for(int b=9;b<=75;b++){
      	gotoxy(b,a);printf("%c",219);
      }
   }
    setcolor(6,0);
    int idx=5;
	for(int y=1;y<=idx+4;y++){
   	gotoxy(9,y+15);printf("%c",219);Sleep(1);
      gotoxy(16,y+15);printf("%c",219);
      gotoxy(43,y+15);printf("%c",219);
      gotoxy(57,y+15);printf("%c",219);
      gotoxy(69,y+15);printf("%c",219);
   }for(int x=1;x<=67;x++){
   	gotoxy(x+8,15);printf("%c",219);Sleep(1);
      gotoxy(x+8,17);printf("%c",219);
      gotoxy(x+8,idx+19);printf("%c",219);
   }
    	setcolor(15,0);
   	gotoxy(11,16);printf("KODE");
   	gotoxy(27,16);printf("BARANG");
   	gotoxy(47,16);printf("HARGA");
      gotoxy(60,16);printf("STOCK");

      setcolor(15,0);
   for(int x=0;x<idx+1;x++){
      gotoxy(13,18+x);printf("%s",sport_update1[x].kode);
      gotoxy(18,18+x);printf("%s",sport_update1[x].barang);
      gotoxy(46,18+x);printf("%d",sport_update1[x].harga);
      gotoxy(60,18+x);printf("%d",sport_update1[x].stock);
   }

}
void updt_harga(){
   char pilih;
   setcolor(4,15);
   gotoxy(25,12);printf("2. U P D A T E  D A T A");
   tabel_apdate1();
   setcolor(0,0);
   for(int a=3;a<=8;a++){
   	for(int b=47;b<=89;b++){
      	gotoxy(b,a);printf("%c",219);
      }
   }
   setcolor(6,0);
   for(int a=3;a<=8;a++){
   	for(int b=47;b<=89;b++){
         if(a==3||a==8||b==47||b==89){
      	gotoxy(b,a);printf("%c",219);
      	}
      }
   }
   setcolor(15,0);
   gotoxy(49,5); printf("ANDA INGIN MENGUPDATE HARGA? (Y/N) :"); pilih=getche();
   if (pilih=='Y'){
      FILE *terbaru;
      terbaru=fopen("./update_harga.txt","w");
      //fputs("",terbaru);
      fclose(terbaru);
      setcolor(0,0);
   	for(int a=30;a<=34;a++){
   		for(int b=37;b<=86;b++){
      		gotoxy(b,a);printf("%c",219);
      	}
   	}
      setcolor(6,0);
   	for(int a=30;a<=34;a++){
   		for(int b=37;b<=86;b++){
         	if(a==30||a==34||b==37||b==86){
      			gotoxy(b,a);printf("%c",219);
      		}
      	}
   	}
      setcolor(15,0);
   	gotoxy(39,32);printf("masukkan kode (tombol 'S' untuk selesai):");
      bool status;
      status=true;
      while(status){
         setcolor(15,0);
         gotoxy(81,32);pil_kode=getch();
         if(pil_kode=='1'){
            ubah=0;harga();
            terbaru=fopen("./update_harga.txt","a");
            sport_update1[0].harga=atoi(hrg);
            fprintf(terbaru,"%d\n",sport_update1[0].harga);fclose(terbaru);
            if(atoi(hrg)<0){
            	clear(hrg,46,18);
              	gotoxy(112,17);printf(" ");
            }
         }else if(pil_kode=='2'){
         	ubah=1;harga();
            terbaru=fopen("./update_harga.txt","a");
            sport_update1[1].harga=atoi(hrg);
            fprintf(terbaru,"%d\n",sport_update1[1].harga);fclose(terbaru);
            if(atoi(hrg)<0){
            	clear(hrg,46,19);
               gotoxy(112,17);printf(" ");
            }
         }else if(pil_kode=='3'){
         	ubah=2;harga();
            terbaru=fopen("./update_harga.txt","a");
            sport_update1[2].harga=atoi(hrg);
            fprintf(terbaru,"%d\n",sport_update1[2].harga);fclose(terbaru);
            if(atoi(hrg)<0){
            	clear(hrg,46,20);
               gotoxy(112,17);printf(" ");
            }
        	}else if(pil_kode=='4'){
         	ubah=3;harga();
            terbaru=fopen("./update_harga.txt","a");
            sport_update1[3].harga=atoi(hrg);
            fprintf(terbaru,"%d\n",sport_update1[3].harga);fclose(terbaru);
            	if(atoi(hrg)<0){
               	clear(hrg,46,21);
               	gotoxy(112,17);printf(" ");
               }
         }else if(pil_kode=='5'){
         	ubah=4;harga();
            terbaru=fopen("./update_harga.txt","a");
            sport_update1[4].harga=atoi(hrg);
            fprintf(terbaru,"%d\n",sport_update1[4].harga);fclose(terbaru);
            if(atoi(hrg)<0){
            	clear(hrg,46,22);
               gotoxy(112,17);printf(" ");
            }
         }else if(pil_kode=='6'){
            ubah=5;harga();
            terbaru=fopen("./update_harga.txt","a");
            sport_update1[5].harga=atoi(hrg);
            fprintf(terbaru,"%d\n",sport_update1[5].harga);fclose(terbaru);
            if(atoi(hrg)<0){
            	clear(hrg,46,23);
               gotoxy(112,17);printf(" ");
            }
         }else if(pil_kode=='S'){
            updt_stock();
            status=false;
         }else{
            setcolor(12,15);
	       	gotoxy(52,36);printf("Inputan salah!!!");Sleep(1000);
            gotoxy(52,36);printf("                 ");
         }
      }
	}else if(pilih=='N'){
    	updt_stock();
   }else{
   	setcolor(4,15);
   	gotoxy(52,32);printf("INPUTAN SALAH!!!");Sleep(500);
      gotoxy(52,32);printf("                        ");
      setcolor(15,0);
      gotoxy(109,19);printf("   ");
      updt_harga();
   }
}
void harga()
{
   setcolor(15,0);
   gotoxy(46,18+ubah);
   printf("         ");
   gotoxy(46,18+ubah);
   int i = 0;
   char input;
   while (true)
   {
      input = getch();
      if (input == 13) {
         break;
      }
      if (input == 8) {
         hrg[i] = '\0';
         printf("\b \b", input);
         i--;
      } else if (i < 7 && input >= '0' && input <= '9' && (input != '0' || i > 0)) {
         hrg[i] = input;
         printf("%c",hrg[i]);
         i++;
      }
   }
   if(strlen(hrg)!=0){
      if (i < 4){
         clear(hrg,46,18+ubah);
         setcolor(12,15);
         gotoxy(52,36);printf("Inputan kurang");Sleep(1000);
         gotoxy(52,36);printf("                                   ");
         memset(hrg, 0, strlen(hrg));
         harga();
      }
   } else {
      clear(hrg,46,18+ubah);
      setcolor(12,15);
      gotoxy(52,36);printf("Inputan tidak boleh kosong");Sleep(1000);
      gotoxy(52,36);printf("                                   ");
      memset(hrg, 0, strlen(hrg));
      harga();
   }
}
void updt_stock(){
   char pilih;
   setcolor(15,0);
   gotoxy(49,6);printf("ANDA INGIN MENGUPDATE STOCK? (Y/N) :");pilih=getche();
   if (pilih=='Y'){
      FILE *terbarustock;
      terbarustock=fopen("./stock.txt","w");
      //fputs("",terbarustock);
      fclose(terbarustock);
      setcolor(0,0);
   		for(int a=30;a<=34;a++){
   			for(int b=37;b<=86;b++){
      		gotoxy(b,a);printf("%c",219);
      		}
   		}
         setcolor(5,0);
   		for(int a=30;a<=34;a++){
   			for(int b=37;b<=86;b++){
         		if(a==30||a==34||b==37||b==86){
      			gotoxy(b,a);printf("%c",219);
      			}
      		}
   		}
        setcolor(15,0);
      	gotoxy(39,32);printf("masukkan kode (tombol 'S' untuk selesai):");
         bool status;
         status=true;
         while(status)
         {
            setcolor(15,0);
            gotoxy(81,32);pil_kode=getch();
         	if(pil_kode=='1'){
               bool status;
         		status=true;
         		while(status){
               setcolor(15,0);
            	gotoxy(60,18);printf("         ");
               //gotoxy(60,18);gets(stck);
               int a=0;
               gotoxy(60,18);stck[a]=getch();
               while(stck[a]!=13){
                  if(stck[a]==8){
                     a--;
                     if(a<0){
                        a=0;
                     }gotoxy(60+a,18);printf(" ");
                  }else{
                  printf("%c",stck[a]);a++;
                  }if(a>3){
                     a=3;gotoxy(63,18);printf(" ");
                  }gotoxy(60+a,18);
                  stck[a]=getch();
               }stck[a]=00;
               if(valtah(stck)==0&&strlen(stck)<9&&strlen(stck)!=0){
                  status=false;
                  terbarustock=fopen("./stock.txt","a");
               	sport_update1[0].stock=atoi(stck);
                  fprintf(terbarustock,"%d\n",sport_update1[0].stock);fclose(terbarustock);
               	if(atoi(stck)<0){
               		clear(stck,60,18);
                  	gotoxy(112,17);printf(" ");
               	}
               }else{
                     setcolor(12,15);
                  	clear(stck,60,18);
                		gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                     gotoxy(52,36);printf("                     ");
               }
               }
            }else if(pil_kode =='2'){
            	bool status;
         		status=true;
         		while(status){
               setcolor(15,0);
            	gotoxy(60,19);printf("         ");
               int a=0;
               gotoxy(60,19);stck[a]=getch();
               while(stck[a]!=13){
                  if(stck[a]==8){
                     a--;
                     if(a<0){
                        a=0;
                     }gotoxy(60+a,19);printf(" ");
                  }else{
                  printf("%c",stck[a]);a++;
                  }if(a>3){
                     a=3;gotoxy(63,19);printf(" ");
                  }gotoxy(60+a,19);
                  stck[a]=getch();
               }stck[a]=00;
               if(valtah(stck)==0&&strlen(stck)<9&&strlen(stck)!=0){
               	status=false;
                  terbarustock=fopen("./stock.txt","a");
                  sport_update1[1].stock=atoi(stck);
                  fprintf(terbarustock,"%d\n",sport_update1[1].stock);fclose(terbarustock);
               	if(atoi(stck)<0){
               		clear(stck,60,19);
                  	gotoxy(112,17);printf(" ");
               	}
               }else{
                  setcolor(12,15);
                  clear(stck,60,19);
                	gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                gotoxy(52,36);printf("                     ");
               }
               }
            }else if(pil_kode=='3'){
            	bool status;
         		status=true;
         		while(status){
               setcolor(15,0);
            	gotoxy(60,20);printf("         ");
               //gotoxy(60,20);gets(stck);
               int a=0;
               gotoxy(60,20);stck[a]=getch();
               while(stck[a]!=13){
                  if(stck[a]==8){
                     a--;
                     if(a<0){
                        a=0;
                     }gotoxy(60+a,20);printf(" ");
                  }else{
                  printf("%c",stck[a]);a++;
                  }if(a>3){
                     a=3;gotoxy(63,20);printf(" ");
                  }gotoxy(60+a,20);
                  stck[a]=getch();
               }stck[a]=00;
               if(valtah(stck)==0&&strlen(stck)<9&&strlen(stck)!=0){
                  status=false;
                  terbarustock=fopen("./stock.txt","a");
               	sport_update1[2].stock=atoi(stck);
                  fprintf(terbarustock,"%d\n",sport_update1[2].stock);fclose(terbarustock);
               	if(atoi(stck)<0){
               		clear(stck,60,20);
                  	gotoxy(112,17);printf(" ");
               	}
               }else{
                  setcolor(12,15);
                  clear(stck,60,20);
                	gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                  gotoxy(52,36);printf("                     ");
            	}
               }
            }else if(pil_kode=='4'){
            	bool status;
         		status=true;
         		while(status){
                setcolor(15,0);
            	gotoxy(60,21);printf("         ");
               //gotoxy(60,21);gets(stck);
               int a=0;
               gotoxy(60,21);stck[a]=getch();
               while(stck[a]!=13){
                  if(stck[a]==8){
                     a--;
                     if(a<0){
                        a=0;
                     }gotoxy(60+a,21);printf(" ");
                  }else{
                  printf("%c",stck[a]);a++;
                  }if(a>3){
                     a=3;gotoxy(63,21);printf(" ");
                  }gotoxy(60+a,21);
                  stck[a]=getch();
               }stck[a]=00;
               if(valtah(stck)==0&&strlen(stck)<9&&strlen(stck)!=0){
                  status=false;
                  terbarustock=fopen("./stock.txt","a");
               	sport_update1[3].stock=atoi(stck);
                  fprintf(terbarustock,"%d\n",sport_update1[3].stock);fclose(terbarustock);
               	if(atoi(stck)<0){
               		clear(stck,60,21);
                  	gotoxy(112,17);printf(" ");
               	}
               }else{
                  setcolor(12,15);
                  clear(stck,60,21);
                	gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                  gotoxy(52,36);printf("                     ");
               }
               }
            }else if(pil_kode=='5'){
            	bool status;
         		status=true;
         		while(status){
               setcolor(15,0);
            	gotoxy(60,22);printf("         ");
               //gotoxy(60,22);gets(stck);
               int a=0;
               gotoxy(60,22);stck[a]=getch();
               while(stck[a]!=13){
                  if(stck[a]==8){
                     a--;
                     if(a<0){
                        a=0;
                     }gotoxy(60+a,22);printf(" ");
                  }else{
                  printf("%c",stck[a]);a++;
                  }if(a>3){
                     a=3;gotoxy(63,22);printf(" ");
                  }gotoxy(60+a,22);
                  stck[a]=getch();
               }stck[a]=00;
               if(valtah(stck)==0&&strlen(stck)<9&&strlen(stck)!=0){
               	status=false;
                  terbarustock=fopen("./stock.txt","a");
                  sport_update1[4].stock=atoi(stck);
                  fprintf(terbarustock,"%d\n",sport_update1[4].stock);fclose(terbarustock);
            		if(atoi(stck)<0){
            			clear(stck,60,22);
                  	gotoxy(112,17);printf(" ");
               	}
               }else{
                     setcolor(12,15);
                  	clear(stck,60,22);
                	   gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                     gotoxy(52,36);printf("                     ");
                  }
               }
            }else if(pil_kode=='6'){
            	bool status;
         		status=true;
         		while(status){
               setcolor(15,0);
            	gotoxy(60,23);printf("         ");
               //gotoxy(60,23);gets(stck);
               int a=0;
               gotoxy(60,23);stck[a]=getch();
               while(stck[a]!=13){
                  if(stck[a]==8){
                     a--;
                     if(a<0){
                        a=0;
                     }gotoxy(60+a,23);printf(" ");
                  }else{
                  printf("%c",stck[a]);a++;
                  }if(a>3){
                     a=3;gotoxy(63,23);printf(" ");
                  }gotoxy(60+a,23);
                  stck[a]=getch();
               }stck[a]=00;
               if(valtah(stck)==0&&strlen(stck)<9&&strlen(stck)!=0){
                  status=false;
                  terbarustock=fopen("./stock.txt","a");
               	sport_update1[5].stock=atoi(stck);
                  fprintf(terbarustock,"%d\n",sport_update1[5].stock);fclose(terbarustock);
                  if(atoi(stck)<0){
               		clear(stck,60,23);
                  	gotoxy(112,17);printf(" ");
               	}
               }else{
                  setcolor(12,15);
                  clear(stck,60,23);
                	gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                  gotoxy(52,36);printf("                     ");
               }
               }
            }else if(pil_kode=='S'){
               hps_menu();
               layar();
               setcolor(4,15);
               status=false;
            }else{
               setcolor(12,15);
               gotoxy(52,36);printf("Inputan salah!!!");Sleep(1000);
               gotoxy(52,36);printf("                  ");
            }
         }
   }else if(pilih=='N'){
      hps_menu();
      layar();
      setcolor(4,15);
   }else{
      setcolor(12,15);
      gotoxy(52,36);printf("INPUTAN SALAH!!!");Sleep(500);
      gotoxy(52,36);printf("                     ");
      setcolor(0,0);gotoxy(109,20);printf("  ");
      updt_stock();
   }
}
//void main(){
//    isidata_update1();
//    updt_harga();
// }

