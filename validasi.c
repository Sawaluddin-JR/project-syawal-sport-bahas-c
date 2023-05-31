#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>



//==========================================================================
//                            VARIABEL GLOBAL                              =
//==========================================================================
char nama[100];
char user1[100];
char alamat[100];
char handphone[100];
char nama_tamp[100][100];
char user1_tamp[100][100];

//===========================================================================
//                              PROTOTYPE                                   =
//===========================================================================
int valtah(char a[]);


//====================================================================
//                          VALIDASI ANGKA                           =
//====================================================================

int valtah(char a[]){
   int x=0;int y=0;
   if(a[0]==' '){
      y=1;
      return y;
   }

	for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='0'&&a[i]<='9')){
    		x++;
 		}
	}
   return x;
}

//========================================================================
//                            VALIDASI NAMA                              =
//========================================================================
char* validasi_nama1(char* nama){	
char inputan;	
char data1[30]={};
char data2[30]={};
int index=0;
    while((inputan=getch())!=13 || index<3 || data1[index-1]==' ' || data1[index-1]=='-' || data1[index-1]=='\'')
	{
		if(index<25 && (inputan>=97 && inputan<=122 || inputan>=65 && inputan<=90 || inputan==' ' && index!=0 && data1[index-1]!=' ' || inputan=='-' && index!=0 && data1[index-1]!='-' && data1[index-1]!='\'' && data1[index-1]!=' '
            || inputan=='\'' && index!=0 && data1[index-1]!='\'' && data1[index-1]!='-' && data1[index-1]!=' ')){

			printf("%c",inputan);
			data1[index]=inputan;
			index++;
		}else if(inputan==8 && index!=0){
			printf("\b \b");
			index-=1;
		    data1[index]=' ';
		}
	}
	for(int a=0;a<index;a++){
		data2[a]=data1[a];
	}
	strcpy(nama,data2);
    return nama;
}
void validasi_nama(){	
char inputan;	
char data1[30]={};
char data2[30]={};
int index=0;
int spasi=4;

while((inputan=getch())!=13 || index<3 || data1[index-1]==' ' || data1[index-1]=='-' || data1[index-1]=='\'')
	{
		if(index<25 && (inputan>=97 && inputan<=122 || inputan>=65 && inputan<=90|| inputan==' ' && index!=0 && data1[index-1]!=' ' && data1[index-1]>spasi|| inputan=='-' && index!=0 && data1[index-1]!='-' && data1[index-1]!='\'' && data1[index-1]!=' '
            || inputan=='\'' && index!=0 && data1[index-1]!='\'' && data1[index-1]!='-' && data1[index-1]!=' ')){
            printf("%c",inputan);
			data1[index]=inputan;
			index++;
		}else if(inputan==8 && index!=0){
			printf("\b \b");
			index-=1;
		    data1[index]=' ';
		}
	}
	for(int a=0;a<index;a++){
		data2[a]=data1[a];
	}
	strcpy(nama,data2);
    strupr(nama);
}
char* validasi_username1( char* user1){
    char inputan1;
    char data1[30]={};
    char data2[30]={};
    int index=0;

    while((inputan1=getch())!=13 || index<8 )
    {
        if(index < 16 &&(inputan1 >=97 && inputan1 <=122 || inputan1 >=65 && inputan1 <=90 || inputan1 >= '0' && inputan1 <='9' && index!=0)){
            printf("%c",inputan1);
            data1[index]=inputan1;
            index++;

        }else if(inputan1==8 && index!=0){
            printf("\b \b");
            index-=1;
            data1[index]=' ';
        }
    }
    for(int a=0;a<index;a++){
		data2[a]=data1[a];
	}
	strcpy(user1,data2);
    return user1;
}
void validasi_username(){
    char inputan1;
    char data1[30]={};
    char data2[30]={};
    int index=0;

    while((inputan1=getch())!=13 || index<8 )
    {
        if(index < 16 &&(inputan1 >=97 && inputan1 <=122 || inputan1 >=65 && inputan1 <=90 || inputan1 >= '0' && inputan1 <='9' && index!=0)){
            printf("%c",inputan1);
            data1[index]=inputan1;
            index++;

        }else if(inputan1==8 && index!=0){
            printf("\b \b");
            index-=1;
            data1[index]=' ';
        }
    }
    for(int a=0;a<index;a++){
		data2[a]=data1[a];
	}
	strcpy(user1,data2);
}
//=======================================================================
//                            VALIDASI NO.HP                            =
//=======================================================================

void validasi_nohp(){
    char inputan1;
    char data1[30]={};
    char data2[30]={};
    int index=0;

    while((inputan1=getch())!=13 || index<11)
    {
        if(inputan1 >= '0' && inputan1 <='9' && index<13)
        {
            if((index==0 && inputan1=='0') || (index==1 && inputan1 =='8') || (index==2 && inputan1=='1') || (index==2 && inputan1=='2') || (index==2 && inputan1=='3') || (index==2 && inputan1=='5') || (index==2 && inputan1=='7')
                || (index==3 && inputan1=='1') || (index==3 && inputan1=='2') || (index==3 && inputan1=='3') || (index==3 && inputan1=='7') || (index==3 && inputan1=='8') || (index==3 && inputan1=='9')){
              printf("%c",inputan1);
              data1[index]=inputan1;
              index++;
            }else if(index>=4){
                printf("%c",inputan1);
                data1[index]=inputan1;
                index++;
            }
        }else if(inputan1==8 && index!=0){
            printf("\b \b");
            index-=1;
            data1[index]=' ';
        }
    }
    for(int a=0;a<index;a++){
		data2[a]=data1[a];
	}
	strcpy(handphone,data2);
}
void tampilan_akun(){
   setcolor(0,0);
   for(int a=1;a<=7;a++){
   	for(int b=1;b<=45;b++){
      	gotoxy(b+35,a+16);printf("%c",219);
      }
   }
   setcolor(11,0);
   for(int a=1;a<=7;a++){
   	for(int b=1;b<=45;b++){
         if(a==1||b==1||a==7||b==45){
      	gotoxy(b+35,a+16);printf("%c",219);Sleep(10);
         }
      }
   }
}

void daftarakun(){
    int a=0;
    int cek;
    tampilan_akun();
    FILE* login=fopen("C:/Users/sawaluddin/Documents/project.c/register.txt","a");
    FILE *file=fopen("C:/Users/sawaluddin/Documents/project.c/register.txt","r");
   while((fscanf(file,"%[^#]#%[^\n]\n",&nama_tamp[a],&user1_tamp[a]))!=EOF){
       a++;
    }fclose(file);
    do{
        cek=1;
        setcolor(15,0);
        gotoxy(39,19);printf("Nama      :");
        gotoxy(39,21);printf("Password  :");
        gotoxy(51,19);validasi_nama1(nama);
            for(int a=0;a<100;a++){
                if(strcmp(nama,nama_tamp[a])==0){
                    setcolor(4,0);
                    gotoxy(51,19);printf("Nama sudah dipakai !");Sleep(300);
                    gotoxy(51,19);printf("                     ");
                    cek=0;
                }
            }
    }while(cek<1);
    gotoxy(51,21);validasi_username1(user1);
    fprintf(file,"%s#%s\n",nama,user1);
    fclose(file);        
}
void cekakun(){
    tampilan_akun();
    setcolor(15,0);
    int tamp=0;
    int a=0;
    //char name[100],name1[100],pass[100],pass1[100];
    FILE *file=fopen("C:/Users/sawaluddin/Documents/project.c/register.txt","r");
   while((fscanf(file,"%[^#]#%[^\n]\n",&nama_tamp[a],&user1_tamp[a]))!=EOF){
       a++;
    }
   fclose(file);
  do{
       fflush(stdin);
       gotoxy(51,19);printf("                         ");
       gotoxy(51,21);printf("                         ");
       setcolor(4,0); 
       gotoxy(53,19);printf("Inputan Salah !!");Sleep(100);
       gotoxy(53,19);printf("                        ");
       setcolor(15,0);
       gotoxy(39,19);printf("Nama      :");
       gotoxy(39,21);printf("Password  :");
       gotoxy(51,19);validasi_nama1(nama);
       gotoxy(51,21);validasi_username1(user1);
        for(int a=0;a<100;a++){
            if(strcmp(nama,nama_tamp[a])==0 && strcmp(user1,user1_tamp[a])==0 ){
                for(int a=1,b=1;a<=100;a++)
                {
                    setcolor(0,15);
			        gotoxy(54,33);printf("Loading %d%%",a);Sleep(15);
      	            if(a%2==0)
                    {
      		            setcolor(9,0);
   			            gotoxy(b+35,35);printf("%c",219);Sleep(20);b++;
         	        }
                }    
                tamp++;
            }else{ 
                
            }
        }
    }while(tamp<1);
}

//===============================================================================
//                             WAKTU SEKARANG                                   =
//================================================================================

void waktu_sekarang()
{
    FILE *hasil;
  time_t sekarang = time(NULL);
  struct tm waktu = *localtime(&sekarang);

  char hari[][7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
  char bulan[][10] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    
  //hasil=fopen("C:/Users/sawaluddin/Documents/project.c/struct.txt","a");  
  printf("Pesanan pukul %02d.%02d WIB - %s, %d %s %d", waktu.tm_hour, waktu.tm_min, hari[waktu.tm_wday], waktu.tm_mday, bulan[waktu.tm_mon], 1900 + waktu.tm_year);
  //fprintf(hasil,"Pesanan Pukul %02d.%02d WIB - %s, %d %s %d\n",waktu.tm_hour, waktu.tm_min, hari[waktu.tm_wday], waktu.tm_mday, bulan[waktu.tm_mon], 1900 + waktu.tm_year);fclose(hasil);
}

// void main(){

//     //daftarakun();
//     validasi_nama();
//     printf("\t\t%s",nama);
    
//}