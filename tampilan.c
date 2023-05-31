#include <windows.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
#include <stdio.h>
//#include <conio.h>


//=======================================================================
//                          PROTOTYPE                                   =
//=======================================================================

void gotoxy(int x, int y);
void setcolor(int text, int background);
void bingkai_awal();
void bingkai_judul();
void bingkai_menu();
void layar();
void layar2();
void hps_menu();
void clear(char a[],int x,int y);

//========================================================================
//                                   ARRAY WARNA                         =
//========================================================================
enum color{
   HITAM,
   BIRU_GELAP,
   HIJAU_GELAP,
   PINK_GELAP,
   MERAH_GELAP,
   UNGU_GELAP,
   KUNING_GELAP,
   PUTIH_GELAP,
   ABU_ABU,
   BIRU,
   HIJAU,
   CYAN,
   MERAH,
   UNGU,
   KUNING,
   PUTIH};

//============================================================================
//                                 WARNA & POSISI                            =
//============================================================================

void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}

//===================================================================
//                           BINGKAI                                =
//===================================================================

void bingkai_awal()
{
   setcolor(9,0);
	for(int a=1;a<=116;a++){
      gotoxy(a+1,1);printf("%c",219);Sleep(5);
      gotoxy(a+1,39);printf("%c",219);
   }
   for(int b=1;b<=38;b++){
      gotoxy(2,b+1);printf("%c",219);Sleep(5);
      gotoxy(3,b+1);printf("%c",219);
      gotoxy(116,b+1);printf("%c",219);
      gotoxy(117,b+1);printf("%c",219);
   }
}
void bingkai_judul(){
	for(int x=1;x<=116;x++){
   	gotoxy(x+1,8);printf("%c",219);Sleep(5);
   }
}
void bingkai_menu(){
	setcolor(1,0);
	for(int x=3;x<=114;x++){
   	gotoxy(x+1,8);printf("%c",219);Sleep(10);
      gotoxy(x+1,12);printf("%c",219);

   }

   for(int y=9;y<=11;y++){
      	gotoxy(25,y);printf("%c",219);Sleep(10);
         gotoxy(48,y);printf("%c",219);Sleep(10);
         gotoxy(71,y);printf("%c",219);Sleep(10);
         gotoxy(94,y);printf("%c",219);Sleep(10);
   }
}
//========================================================================
//                            PERINTAH HAPUS                             =
//========================================================================
void layar(){
	setcolor(15,0);
	for(int y=2;y<=38;y++){
   	for(int x=4;x<116;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }setcolor(4,15);
   gotoxy(98,36);printf("Copyright By");
   gotoxy(100,37);printf("Sawaluddin 2022");
}
void layar2(){
  setcolor(0,0);
	for(int y=2;y<=38;y++){
   	for(int x=4;x<116;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   } 
}
void hps_menu(){
	setcolor(15,0);
	for(int y=13;y<=38;y++){
   	for(int x=4;x<116;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }
}
void hps_menu1(){
	setcolor(8,0);
	for(int y=11;y<=38;y++){
   	for(int x=4;x<116;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }
}
void clear(char a[],int x,int y){
	for(int z=0;z<strlen(a);z++){
   	gotoxy(x+z,y);printf(" ");
   }
}
void tampil1(){
   setcolor(2,0);
   gotoxy(25,3);printf(" #######   ######   ###    ###   #######      ######   ###       ##  ");
   gotoxy(25,4);printf(" ##   ##   ##       ## #  # ##   ##   ##      ##       ###       ##  ");
   gotoxy(25,5);printf(" #######   ######   ##  ##  ##   ##   ##      ######   ###       ##  ");
   gotoxy(25,6);printf(" ##        ##       ##      ##   ##########   ##       ###       ##  ");
   gotoxy(25,7);printf(" ##        ##       ##      ##   ##      ##   ##       ###       ##  ");
   gotoxy(25,8);printf(" ##        ######   ##      ##   ##########   ######   ########  ##  ");
}
void tampil2(){
   setcolor(2,0);
   gotoxy(15,3);printf(" #######   ##   ##      ##   ##   ##      ######  #######    ####    ########  ########    ");
   gotoxy(15,4);printf(" ##   ##   ##   ##      ##   ##   ##      ##      ##   ##   ##  ##   ##    ##     ##      ");
   gotoxy(15,5);printf(" #######   ##   ##      ##   ##   ##      ##      #######   ##  ##   ##   ##      ##      ");
   gotoxy(15,6);printf(" ##        ##   ##      ##   #######      ######  ##        ##  ##   ######       ##      ");
   gotoxy(15,7);printf(" ##        ##   ##      ##   ##   ##          ##  ##        ##  ##   ##   ##      ##      ");
   gotoxy(15,8);printf(" ##        ##   ######  ##   ##   ##      ######  ##         ####    ##    ##     ##      "); 
}
void tampil3(){
   setcolor(2,0);
   gotoxy(30,3);printf(" ##    ##  #######  ##########   #####  ######### ######   ");
   gotoxy(30,4);printf(" ##    ##  ##   ##  ##     ###  ### ###    ##     ##       ");
   gotoxy(30,5);printf(" ##    ##  #######  ##      ##  ##   ##    ##     ######   ");
   gotoxy(30,6);printf(" ##    ##  ##       ##     ##   #######    ##     ##       ");
   gotoxy(30,7);printf(" ##    ##  ##       ##    ##    ##   ##    ##     ##       ");
   gotoxy(30,8);printf(" ########  ##       #######     ##   ##    ##     ######   "); 
}

// void main(){
//    tampil3();
   
//}