#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//#include "validasi.c"
// #include "pilih_olahraga1.c"

//=========================================================================
//                      PROTOTYPE                                         =
//=========================================================================
void isidata2();
void tabel1();
void data1();
void menu_utama1();
void nama_pembeli1();
void alamat_sport2();
void nope_sport2();
void pilih_menu1();
void faktur1();
void bayar1();
void input_umur1();

//==========================================================================
//                            VARIABEL GLOBAL                              =
//==========================================================================
char pil_utama;
char pil_kode;
int idx;
char unit_bulutangkis[6][100];
int jumlah1;
int jumlah2;
int jumlah3;
int jumlah4;
int jumlah5;
int jumlah6;
int total_u;
int total_j;
int total_jmember1;
int total_keseluruhan1;
struct tabel1{
	char kode[10];
   char barang[20];
   int harga;
   int stock;
}sport2[50];
char usia1[100];


//===========================================================================
//                               PENDATAAN                                  =
//===========================================================================

void isidata2(){
	strcpy(sport2[0].kode,"1");
   strcpy(sport2[0].barang,"Raket Yonex");
   strcpy(sport2[1].kode,"2");
   strcpy(sport2[1].barang,"Shuttlecock(bola) ");
	strcpy(sport2[2].kode,"3");
   strcpy(sport2[2].barang,"Deker/pelindung siku");
   strcpy(sport2[3].kode,"4");
   strcpy(sport2[3].barang,"Net atau Jaring");
   strcpy(sport2[4].kode,"5");
   strcpy(sport2[4].barang,"Tas sporty Yonex");
   strcpy(sport2[5].kode,"6");
   strcpy(sport2[5].barang,"Sepatu Yonex");
   
   FILE *bass= fopen("update_harga1.txt", "r");
   fscanf(bass, "%d\n%d\n%d\n%d\n%d\n%d",&sport2[0].harga,&sport2[1].harga,&sport2[2].harga,&sport2[3].harga,&sport2[4].harga,&sport2[5].harga);
   fclose(bass);

   FILE *file = fopen("stock1.txt", "r");
   fscanf(file, "%d\n%d\n%d\n%d\n%d\n%d",&sport2[0].stock,&sport2[1].stock,&sport2[2].stock,&sport2[3].stock,&sport2[4].stock,&sport2[5].stock);
   fclose(file);

}

//======================================================================
//                                 TABEL                              =
//======================================================================
void tabel1(){
	//hps_menu();
   layar();
   setcolor(0,0);
   for(int a=15;a<=23;a++){
   	for(int b=9;b<=75;b++){
      	gotoxy(b,a);printf("%c",219);
      }
   }
   setcolor(6,0);
    idx=5;
	for(int y=1;y<=idx+4;y++){
   	gotoxy(9,y+15);printf("%c",219);Sleep(2);
      gotoxy(16,y+15);printf("%c",219);
      gotoxy(43,y+15);printf("%c",219);
      gotoxy(57,y+15);printf("%c",219);
      gotoxy(69,y+15);printf("%c",219);
   }for(int x=1;x<=67;x++){
   	gotoxy(x+8,15);printf("%c",219);Sleep(2);
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
    	gotoxy(13,18+x);printf("%s",sport2[x].kode);
      gotoxy(18,18+x);printf("%s",sport2[x].barang);
      gotoxy(46,18+x);printf("%d",sport2[x].harga);
      gotoxy(60,18+x);printf("%d",sport2[x].stock);
   }
}

//==========================================================================
//                               ISI DATA                                  =
//==========================================================================
void data1(){
	setcolor(0,0);
   for(int a=21;a<=31;a++){
   	for(int b=45;b<=75;b++){
         gotoxy(b,a);printf("%c",219);
      }
   }
   setcolor(6,0);
   for(int a=21;a<=31;a++){
   	for(int b=7;b<=75;b++){
      	if(a==21||b==7||a==31||b==75||b==45){Sleep(10);
         	gotoxy(b,a);printf("%c",219);
         }
      }
   }   
	setcolor(9,15);
   gotoxy(10,19);printf("#alamat toko :Bandung");
   setcolor(0,15);
   gotoxy(86,16);printf("K E T E R A N G A N");
   gotoxy(78,18);printf("1.Nama harus huruf & huruf");
   gotoxy(78,19);printf("  min 3 atau max 25 digit");
   gotoxy(78,20);printf("2.Spasi tidak boleh diisi pertama");
   gotoxy(78,21);printf("  kali dan terakhir spasi juga");
   gotoxy(78,22);printf("  tidak boleh dua kali");
   gotoxy(78,23);printf("3.Pilih Kode alamat(kota) A s/d Q");
   gotoxy(78,24);printf("4.Jarak /Km =Rp 100,-");
   gotoxy(78,25);printf("5.Potongan jika jarak >1000 & <1500");
   gotoxy(78,26);printf("  5%% dari total atau >=1500 & <=2000");
   gotoxy(78,27);printf("  10%% dari total atau >2000 & <=2500");
   gotoxy(78,28);printf("  20%% dari total");
   gotoxy(78,29);printf("  selain itu 0%% dari total");
   gotoxy(78,30);printf("6.No.Hp harus diisi 08 pertama kali");
   gotoxy(78,31);printf("  dan angka min 11 & max 13 digit");
   gotoxy(78,32);printf("  isi angka digit ke-3 selain angka");
   gotoxy(78,33);printf("  0,4,6,8,9 dan angka digit ke-4");
   gotoxy(78,34);printf("  selain angka 0,4,5,6");
   gotoxy(78,35);printf("7.usia >= 10 tahun & <= 63 tahun");
	setcolor(0,15);
   gotoxy(9,23);printf("Nama pembeli                 :");
   gotoxy(9,25);printf("Pilih kode alamat (kota)     :");
   gotoxy(9,27);printf("No.Hp                        :");
   gotoxy(9,29);printf("Usia                         :");
   setcolor(15,0);
   gotoxy(47,23);validasi_nama();
   gotoxy(47,23);printf("%s",nama);
   gotoxy(47,25);inputan_asal1();
   gotoxy(47,27);validasi_nohp();
   input_umur1();
}
void input_umur1(){
   setcolor(15,0);  
   int a=0;
   gotoxy(47,29);printf("    "); 
   gotoxy(47,29);usia1[a]=getch();
   while(usia1[a]!=13){
      if(usia1[a]==8){
         a--;
         if(a<0){
         a=0;
         }gotoxy(47+a,29);printf(" ");
      }else{
         printf("%c",usia1[a]);a++;
      }if(a>2){
         a=2;gotoxy(49,29);printf(" ");
      }gotoxy(47+a,29);
         usia1[a]=getch();
   }usia1[a]=00;
   if(valtah(usia1)==0 && strlen(usia1)<=9 &&strlen(usia1)!=0){
      if(atoi(usia1)>=10 && atoi(usia1) <=63){
         gotoxy(47,29);printf("%d tahun",atoi(usia1));
      }else{
         setcolor(4,0);
         gotoxy(47,29);printf("                    ");
         gotoxy(47,29);printf("Inputan salah!");Sleep(2000);
         gotoxy(47,29);printf("                    ");
         input_umur1();
      }
   }else{
      setcolor(4,0);
      setcolor(12,15);
      gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
      gotoxy(52,36);printf("                     ");
      input_umur1();
   }
}
void pilih_menu1(){
 setcolor(0,0);
   for(int a=15;a<26;a++){
      for(int b=70;b<=103;b++){
         gotoxy(b,a);printf("%c",219);
      }
   }
   for(int a=9;a<=103;a++){
   gotoxy(a,25);printf("%c",219);
   }
   setcolor(6,0);
   for(int y=1;y<=idx+6;y++){
      gotoxy(83,y+15);printf("%c",219);Sleep(2);
      gotoxy(103,y+15);printf("%c",219);
   }
   for(int x=1;x<=34;x++){
   	gotoxy(x+69,15);printf("%c",219);Sleep(2);
      gotoxy(x+69,17);printf("%c",219);
      gotoxy(x+69,idx+19);printf("%c",219);
   }
   for(int x=9;x<=103;x++){
      gotoxy(x,idx+21);printf("%c",219);Sleep(2);
   }
   gotoxy(9,idx+20);printf("%c",219);Sleep(2);
   gotoxy(69,idx+20);printf("%c",219);
   gotoxy(83,idx+20);printf("%c",219);
   gotoxy(103,idx+20);printf("%c",219);
   setcolor(15,0);
   gotoxy(73,16);printf("UNIT");
   gotoxy(87,16);printf("JUMLAH");
   gotoxy(29,idx+20);printf("TOTAL");
   setcolor(0,0);
   for(int a=30;a<35;a++){
      for(int b=18;b<=102;b++){ 
      }
   }    
   setcolor(9,0);
   for(int a=30;a<35;a++){
      for(int b=18;b<=102;b++){
         if(a==30||a==34||b==18||b==102){
            gotoxy(b,a);printf("%c",219);
         }
      }
   }
   setcolor(0,15); 
   gotoxy(20,32);printf("Masukkan kode barang yang ingin dibeli(tombol 'S' untuk selesai):");
   int a=1;
   bool status;
   status=true;
   while(status)
   {
      setcolor(6,0 );
      gotoxy(86,32);pil_kode=getch();
      int barang = pil_kode - 49;
      if(pil_kode >= '1' && pil_kode <= '6')
      {
         if(a>1)
         {
            sport2[barang].stock+=atoi(unit_bulutangkis[barang]);
            total_u-=atoi(unit_bulutangkis[barang]);
            total_j-=jumlah1;
            gotoxy(60,18+barang);printf("        ");
            gotoxy(60,18+barang);printf("%d",sport2[barang].stock);
            gotoxy(85,18+barang);printf("          ");
            gotoxy(71,idx+20);printf("          ");
            gotoxy(85,idx+20);printf("          ");
         }
         a++;
         bool status;
         status=true;
         while(status)
         {
            int a=0;
            setcolor(15,0);
            gotoxy(71,18+barang);printf("      ");
            gotoxy(71,18+barang);unit_bulutangkis[barang][a]=getch();
            while(unit_bulutangkis[barang][a]!=13){
               if(unit_bulutangkis[barang][a]==8){
                  a--;
                  if(a<0){
                     a=0;
                  }gotoxy(71+a,18+barang);printf(" ");
               }else{
                  printf("%c",unit_bulutangkis[barang][a]);a++;
               }if(a>2){
                  a=2;gotoxy(73,18+barang);printf(" ");
               }gotoxy(71+a,18+barang);
               unit_bulutangkis[barang][a]=getch();
            }
            unit_bulutangkis[barang][a]=0;
            if(valtah(unit_bulutangkis[barang])==0 && strlen(unit_bulutangkis[barang])<=9 &&strlen(unit_bulutangkis[barang])!=0)
            {
               if(atoi(unit_bulutangkis[barang])<0||atoi(unit_bulutangkis[barang])>sport2[barang].stock)
               {
                  gotoxy(71,18+barang);printf(" ");
               }else{
                  sport2[barang].stock-=atoi(unit_bulutangkis[barang]);
                              
                  FILE *file = fopen("stock1.txt", "w");
                  fprintf(file, "%d\n%d\n%d\n%d\n%d\n%d",sport2[0].stock,sport2[1].stock,sport2[2].stock,sport2[3].stock,sport2[4].stock,sport2[5].stock);
                  fclose(file);

                  jumlah1=atoi(unit_bulutangkis[barang])*sport2[barang].harga;
                  total_u=atoi(unit_bulutangkis[0])+atoi(unit_bulutangkis[1])+atoi(unit_bulutangkis[2])+atoi(unit_bulutangkis[3])+atoi(unit_bulutangkis[4])+atoi(unit_bulutangkis[5]);
                  total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                  gotoxy(60,18+barang);printf("        ");
                  gotoxy(60,18+barang);printf("%d",sport2[barang].stock);
                  gotoxy(85,18+barang);printf("Rp %d",jumlah1);
                  gotoxy(71,idx+20);printf("%d",total_u);
                  gotoxy(85,idx+20);printf("Rp %d",total_j);
                  status=false;
               }
            }else{
               setcolor(12,15);
               gotoxy(52,36);printf("Inputan tidak valid!!");Sleep(1000);
               gotoxy(52,36);printf("                     ");
            }
         }
      } else if(pil_kode=='S'){
         hps_menu();
         status=false;
         faktur1();
      }else{
         setcolor(12,15);
         gotoxy(52,36);printf("Inputan salah!!!");Sleep(1000);
         gotoxy(52,36);printf("                ");
      }
   }
}
//===========================================================================
//                                     FAKTUR                               =
//===========================================================================

void faktur1(){
   char potongan[100];
   int total_ongkir;
   FILE*hasil;
   hasil=fopen("./struct_bulutangkis.txt","w");
   fputs("",hasil);fclose(hasil);
   FILE *alamat=fopen("./kota.txt","r");
   fscanf(alamat,"%[^\n]\n",&potongan);
   fscanf(alamat,"%d",&total_ongkir);
	setcolor(0,0);
   for(int a=9;a<=33;a++){
   	for(int b=20;b<=96;b++){
         	gotoxy(b,a);printf("%c",219);
      }
   }

   setcolor(6,0);
   for(int a=9;a<=33;a++){
   	for(int b=20;b<=96;b++){
      	if(a==9||a==33||b==20||b==96){
         	gotoxy(b,a);printf("%c",219);
         }
      }
   }
   setcolor(15,0);
   gotoxy(32,11);waktu_sekarang();
   gotoxy(49,13);printf("B U L U T A N G K I S");

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,15);printf("Nama pembeli           : %s",nama);
   fprintf(hasil,"Nama pembeli                  : %s\n",nama);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,16);printf("No.Hp                  : %s",handphone);
   fprintf(hasil,"No.Hp                         : %s\n",handphone);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,17);printf("Usia                   : %d tahun",atoi(usia1));
   fprintf(hasil,"Usia                          : %d tahun\n",atoi(usia1));fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,18);printf("Total Raket Yonex      : %d           : Rp %d",atoi(unit_bulutangkis[0]),jumlah1);
   fprintf(hasil,"Total Raket Yonex             : %d           : Rp %d\n",atoi(unit_bulutangkis[0]),jumlah1);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,19);printf("Total Shuttlecock(bola): %d           : Rp %d",atoi(unit_bulutangkis[1]),jumlah2);
   fprintf(hasil,"Total Shuttlecock(bola)       : %d           : Rp %d\n",atoi(unit_bulutangkis[1]),jumlah2);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,20);printf("Total Deker            : %d           : Rp %d",atoi(unit_bulutangkis[2]),jumlah3);
   fprintf(hasil,"Total Deker                   : %d           : Rp %d\n",atoi(unit_bulutangkis[2]),jumlah3);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,21);printf("Total Net atau Jaring  : %d           : Rp %d",atoi(unit_bulutangkis[3]),jumlah4);
   fprintf(hasil,"Total Net atau Jaring         : %d           : Rp %d\n",atoi(unit_bulutangkis[3]),jumlah4);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,22);printf("Total Tas Sporty Yonex : %d           : Rp %d",atoi(unit_bulutangkis[4]),jumlah5);
   fprintf(hasil,"Total Tas Sporty Yonex        : %d           : Rp %d\n",atoi(unit_bulutangkis[4]),jumlah5);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,23);printf("Total Sepatu Yonex     : %d           : Rp %d",atoi(unit_bulutangkis[5]),jumlah6);
   fprintf(hasil,"Total Sepatu Yonex            : %d           : Rp %d\n",atoi(unit_bulutangkis[5]),jumlah6);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,24);printf("Total belanja          : %d           : Rp %d",total_u,total_j);
   fprintf(hasil,"Total belanja                 : %d           : Rp %d\n",total_u,total_j);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,27);printf("Total Ongkir                         : Rp %d",total_ongkir);fclose(alamat);
   fprintf(hasil,"Total Ongkir                                : Rp %d\n",total_ongkir);fclose(hasil);

   total_keseluruhan1=total_j+total_ongkir;
   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,28);printf("Total                                : Rp %d",total_keseluruhan1);
   fprintf(hasil,"Total                                       : Rp %d\n",total_keseluruhan1);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(25,29);printf("%s",potongan);fclose(alamat);
   fprintf(hasil,"Jarak dan potongan            : %s ",potongan);fclose(hasil);
}
void struct_member1(){
   char potongan[100];
   int total_ongkir;
   FILE*hasil;
   FILE *alamat=fopen("./kota.txt","r");
   fscanf(alamat,"%[^\n]\n",&potongan);
   fscanf(alamat,"%d",&total_ongkir);
   setcolor(15,0);
   if(total_j <= 500000){
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,25);printf("Potongan harga                       : Rp 0");
      fprintf(hasil,"Potongan harga                              : Rp 0\n");fclose(hasil);

      total_jmember1=total_j;
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,26);printf("Total belanja                        : Rp %d",total_jmember1);
      fprintf(hasil,"Total belanja                               : Rp %d\n",total_jmember1);fclose(hasil);

   }else if(total_j > 500000 && total_j <= 1000000){
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,25);printf("Potongan harga                       : Rp 20000");
      fprintf(hasil,"Potongan harga                              : Rp 20000\n");fclose(hasil);

      total_jmember1=total_j-20000;
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,26);printf("Total belanja                        : Rp %d",total_jmember1);
      fprintf(hasil,"Total belanja                               : Rp %d\n",total_jmember1);fclose(hasil);

   }else if(total_j >1000000 && total_j <=5000000){
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,25);printf("Potongan harga                       : Rp 100000");
      fprintf(hasil,"Potongan harga                              : Rp 100000\n");fclose(hasil);

      total_jmember1=total_j-100000;
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,26);printf("Total belanja                        : Rp %d",total_jmember1);
      fprintf(hasil,"Total belanja                               : Rp %d\n",total_jmember1);fclose(hasil);

   }else if(total_j >5000000 && total_j <=10000000){
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,25);printf("Potongan harga                       : Rp 200000");
      fprintf(hasil,"Potongan harga                              : Rp 200000\n");fclose(hasil);

      total_jmember1 =total_j-200000;
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,26);printf("Total belanja                        : Rp %d",total_jmember1);
   }else{
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,25);printf("Potongan harga                       : Rp 250000");
      fprintf(hasil,"Potongan harga                              : Rp 250000\n");fclose(hasil);

      total_jmember1=total_j-250000;
      hasil=fopen("./struct_bulutangkis.txt","a");
      gotoxy(32,26);printf("Total belanja                        : Rp %d",total_jmember1);
      fprintf(hasil,"Total belanja                               : Rp %d\n",total_jmember1);fclose(hasil);

   }
   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,27);printf("Total Ongkir                         : Rp %d",total_ongkir);fclose(alamat);
   fprintf(hasil,"Total Ongkir                                : Rp %d\n",total_ongkir);fclose(hasil);

   total_keseluruhan1=total_jmember1+total_ongkir;
   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(32,28);printf("Total keseluruhan                    : Rp %d",total_keseluruhan1);
   fprintf(hasil,"Total keseluruhan                           : Rp %d\n",total_keseluruhan1);fclose(hasil);

   hasil=fopen("./struct_bulutangkis.txt","a");
   gotoxy(25,29);printf("%s",potongan);fclose(alamat);
   fprintf(hasil,"Jarak dan potongan            : %s ",potongan);fclose(hasil); 
}
// void main(){
//    isidata2();
//    tabel1();
//    pilih_menu2();
// }



