#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>
#include "tampilan.c"

int perKm=100;
char pilkota;
int berat,total,total1,potongan;
char daerah[17][100] = {"Banda Aceh", "Medan", "Padang", "Pekanbaru", "Jambi", "Palembang", "Bengkulu", "Bandar Lampung", "Pangkal Pinang", "Tanjung Pinang", "Jakarta", "Bandung", "Semarang", "Yogyakarta", "Surabaya", "Serang", "Bali"};
int jarak[17]={2634,2018,1417,1383,940,670,951,347,859,1047,145,8,433,525,772,226,1173};
    
void inputan_asal()
{
    setcolor(15,15);
   for(int a=5;a<=14;a++){
   	for(int b=15;b<=101;b++){
         	gotoxy(b,a);printf("%c",219);
      }
   }
    setcolor(6,15);
   for(int a=5;a<=14;a++){
   	for(int b=15;b<=101;b++){
      	if(a==5||a==14||b==15||b==101){
         	gotoxy(b,a);printf("%c",219);
         }
      }
   }
    setcolor(0,15);
    gotoxy(22,7);printf("A. Banda Aceh");
    gotoxy(22,8);printf("B. Medan");
    gotoxy(22,9);printf("C. Padang");
    gotoxy(22,10);printf("D. Pekanbaru");
    gotoxy(22,11);printf("E. Jambi");
    gotoxy(22,12);printf("F. Palembang");
    gotoxy(44,7);printf("G. Bengkulu");
    gotoxy(44,8);printf("H. Bandar Lampung");
    gotoxy(44,9);printf("I. Pangkal Pinang");
    gotoxy(44,10);printf("J. Tanjung Pinang");
    gotoxy(44,11);printf("K. Jakarta");
    gotoxy(44,12);printf("L. Bandung");
    gotoxy(76,7);printf("M. Semarang");
    gotoxy(76,8);printf("N. Yogyakarta");
    gotoxy(76,9);printf("O. Surabaya");
    gotoxy(76,10);printf("P. Serang");
    gotoxy(76,11);printf("Q. Bali");
}
void inputan_asal1(){
    FILE*asal;
   asal=fopen("./kota.txt","w");
   fputs("",asal);fclose(asal);
    setcolor(15,0);  
    gotoxy(47,25);pilkota=getche(); 
    if(pilkota=='A'){
        gotoxy(47,25);printf("Banda Aceh");
        if(jarak[0] >= 1500 && jarak[0]<=2000){
            total=jarak[0]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[0],jarak[0]);
            fprintf(asal,"Dari %s ke %s dengan jarak    =%d km ",daerah[11],daerah[0],jarak[0]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[0]>2000 && jarak[0]<=2500){
            total=jarak[0]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[0],jarak[0]);
            fprintf(asal,"Dari %s ke %s dengan jarak    =%d km ",daerah[11],daerah[0],jarak[0]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[0]>1000 && jarak[0]<=1500){
            total=jarak[0]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[0],jarak[0]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[0],jarak[0]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
    
        }else{
            total=jarak[0]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[0],jarak[0]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[0],jarak[0]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }
        setcolor(15,0);  
   }else if(pilkota=='B'){
        gotoxy(47,25);printf("Medan");
        if(jarak[1] >= 1500 && jarak[1]<=2000){
            total=jarak[1]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[1],jarak[1]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[1],jarak[1]);fclose(asal);
            
            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[1]>2000 && jarak[1]<=2500){
            total=jarak[1]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[1],jarak[1]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[1],jarak[1]);fclose(asal);
           
            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[1]>1000 && jarak[1]<=1500){
            total=jarak[1]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[1],jarak[1]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[1],jarak[1]);fclose(asal);

           asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else{
            total=jarak[1]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[1],jarak[1]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[1],jarak[1]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);   
        }
        setcolor(15,0);  
    }else if(pilkota=='C'){
        gotoxy(47,25);printf("Padang");
        if(jarak[2] >= 1500 && jarak[2]<=2000){
            total=jarak[2]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[2],jarak[2]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[2],jarak[2]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[2]>2000 && jarak[2]<=2500){
            total=jarak[2]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[2],jarak[2]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[2],jarak[2]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal); 

        }else if(jarak[2]>1000 && jarak[2]<=1500){
            total=jarak[2]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[2],jarak[2]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[2],jarak[2]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else{
            total=jarak[2]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[2],jarak[2]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[2],jarak[2]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
        }
        setcolor(15,0);  
    }else if(pilkota=='D'){
        gotoxy(47,25);printf("Pekanbaru");
        if(jarak[3] >= 1500 && jarak[3]<=2000){
            total=jarak[3]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[3],jarak[3]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km  ",daerah[11],daerah[3],jarak[3]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[3]>2000 && jarak[3]<=2500){
            total=jarak[3]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[3],jarak[3]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[3],jarak[3]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[3]>1000 && jarak[3]<=1500){
            total=jarak[3]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[3],jarak[3]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[3],jarak[3]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
        }else{
            total=jarak[3]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[3],jarak[3]);
            fprintf(asal,"Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[3],jarak[3]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    
        }
        setcolor(15,0);  
    }else if(pilkota=='E'){
         gotoxy(47,25);printf("Jambi");
        if(jarak[4] >= 1500 && jarak[4]<=2000){
            total=jarak[4]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[4],jarak[4]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[4],jarak[4]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[4]>2000 && jarak[4]<=2500){
            total=jarak[4]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[4],jarak[4]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[4],jarak[4]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[4]>1000 && jarak[4]<=1500){
            total=jarak[4]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[4],jarak[4]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[4],jarak[4]);fclose(asal);
            
            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
     
        }else{
            total=jarak[4]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[4],jarak[4]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[4],jarak[4]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
        }
        setcolor(15,0);  
    }else if(pilkota=='F'){
        gotoxy(47,25);printf("Palembang");
        if(jarak[5] >= 1500 && jarak[5]<=2000){
            total=jarak[5]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[5],jarak[5]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[5],jarak[5]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
    
        }else if(jarak[5]>2000 && jarak[5]<=2500){
            total=jarak[5]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[5],jarak[5]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[5],jarak[5]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
    
        }else if(jarak[5]>1000 && jarak[5]<=1500){
            total=jarak[5]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[5],jarak[5]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[5],jarak[5]);fclose(asal);
            
            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else{
            total=jarak[5]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[5],jarak[5]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[5],jarak[5]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
        }
        setcolor(15,0);  
    }else if(pilkota=='G'){
        gotoxy(47,25);printf("Bengkulu");
        if(jarak[6] >= 1500 && jarak[6]<=2000){
            total=jarak[6]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
           asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[6],jarak[6]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[6],jarak[6]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
    
        }else if(jarak[6]>2000 && jarak[6]<=2500){
            total=jarak[6]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[6],jarak[6]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[6],jarak[6]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);
    
        }else if(jarak[6]>1000 && jarak[6]<=1500){
            total=jarak[6]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[6],jarak[6]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[6],jarak[6]);fclose(asal);
            
            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    
        }else{
            total=jarak[6]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[6],jarak[6]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[6],jarak[6]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    
        }
        setcolor(15,0);  
    }else if(pilkota=='H'){
        gotoxy(47,25);printf("Bandar Lampung");
        if(jarak[7] >= 1500 && jarak[7]<=2000){
            total=jarak[7]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[7],jarak[7]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[7],jarak[7]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);

        }else if(jarak[7]>2000 && jarak[7]<=2500){
            total=jarak[7]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[7],jarak[7]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[7],jarak[7]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[7]>1000 && jarak[7]<=1500){
            total=jarak[7]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[7],jarak[7]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[7],jarak[7]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[7]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[7],jarak[7]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[7],jarak[7]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='I'){
        gotoxy(47,25);printf("Pangkal Pinang");
        if(jarak[8] >= 1500 && jarak[8]<=2000){
            total=jarak[8]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[8],jarak[8]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[8],jarak[8]);fclose(asal);

            asal=fopen("./kota.txt","w");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[8]>2000 && jarak[8]<=2500){
            total=jarak[8]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[8],jarak[8]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[8],jarak[8]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[8]>1000 && jarak[8]<=1500){
            total=jarak[8]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[8],jarak[8]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[8],jarak[8]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[8]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[8],jarak[8]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[8],jarak[8]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='J'){
        gotoxy(47,25);printf("Tanjung Pinang");
        if(jarak[9] >= 1500 && jarak[9]<=2000){
            total=jarak[9]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[9],jarak[9]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[9],jarak[9]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[9]>2000 && jarak[9]<=2500){
            total=jarak[9]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[9],jarak[9]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[9],jarak[9]);fclose(asal);


            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[9]>1000 && jarak[9]<=1500){
            total=jarak[9]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[9],jarak[9]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[9],jarak[9]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[9]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[9],jarak[9]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[9],jarak[9]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='K'){
        gotoxy(47,25);printf("Jakarta");
        if(jarak[10] >= 1500 && jarak[10]<=2000){
            total=jarak[10]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[10],jarak[10]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[10],jarak[10]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[10]>2000 && jarak[10]<=2500){
            total=jarak[10]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[10],jarak[10]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[10],jarak[10]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);


        }else if(jarak[10]>1000 && jarak[10]<=1500){
            total=jarak[10]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[10],jarak[10]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[10],jarak[10]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[10]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[10],jarak[10]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[10],jarak[10]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='L'){
        gotoxy(47,25);printf("Bandung");
        if(jarak[11] >= 1500 && jarak[11]<=2000){
            total=jarak[11]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[11],jarak[11]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[11],jarak[11]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal); 

        }else if(jarak[11]>2000 && jarak[11]<=2500){
            total=jarak[11]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[11],jarak[11]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[11],jarak[11]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[11]>1000 && jarak[11]<=1500){
            total=jarak[11]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[11],jarak[11]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[11],jarak[11]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[11]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[11],jarak[11]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[11],jarak[11]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='M'){
        gotoxy(47,25);printf("Semarang");
        if(jarak[12] >= 1500 && jarak[12]<=2000){
            total=jarak[12]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[12],jarak[12]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[12],jarak[12]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[12]>2000 && jarak[12]<=2500){
            total=jarak[12]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[12],jarak[12]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[12],jarak[12]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[12]>1000 && jarak[21]<=1500){
            total=jarak[12]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[12],jarak[12]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[12],jarak[12]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[12]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[12],jarak[12]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[12],jarak[12]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='N'){
        gotoxy(47,25);printf("Yogyakarta");
        if(jarak[13] >= 1500 && jarak[13]<=2000){
            total=jarak[13]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[13],jarak[13]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[13],jarak[13]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[13]>2000 && jarak[13]<=2500){
            total=jarak[13]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[13],jarak[13]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[13],jarak[13]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[13]>1000 && jarak[21]<=1500){
            total=jarak[13]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[13],jarak[13]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[13],jarak[13]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[13]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[13],jarak[13]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[13],jarak[13]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='O'){
        gotoxy(47,25);printf("Surabaya");
        if(jarak[14] >= 1500 && jarak[14]<=2000){
            total=jarak[14]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[14],jarak[14]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[14],jarak[14]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[14]>2000 && jarak[14]<=2500){
            total=jarak[14]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[14],jarak[14]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[14],jarak[14]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[14]>1000 && jarak[21]<=1500){
            total=jarak[14]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[14],jarak[14]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[14],jarak[14]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[14]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[14],jarak[14]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[14],jarak[14]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='P'){
        gotoxy(47,25);printf("Serang");
        if(jarak[15] >= 1500 && jarak[15]<=2000){
            total=jarak[15]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[15],jarak[15]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[15],jarak[15]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[15]>2000 && jarak[15]<=2500){
            total=jarak[15]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[15],jarak[15]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[15],jarak[15]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[15]>1000 && jarak[21]<=1500){
            total=jarak[15]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[15],jarak[15]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[15],jarak[15]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[15]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[15],jarak[15]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[15],jarak[15]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
        setcolor(15,0);  
    }else if(pilkota=='Q'){
        gotoxy(47,25);printf("Bali");
        if(jarak[16] >= 1500 && jarak[16]<=2000){
            total=jarak[16]*perKm;
            potongan=(total*10)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[16],jarak[16]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[16],jarak[16]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[16]>2000 && jarak[16]<=2500){
            total=jarak[16]*perKm;
            potongan=(total*20)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[16],jarak[16]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[16],jarak[16]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else if(jarak[16]>1000 && jarak[21]<=1500){
            total=jarak[16]*perKm;
            potongan=(total*5)/100;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[16],jarak[16]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[16],jarak[16]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);    

        }else{
            total=jarak[16]*perKm;
            potongan=0;
            total1=total-potongan;
            setcolor(0,15);
            asal=fopen("./kota.txt","w");
            gotoxy(9,33);printf("Dari %s ke %s dengan jarak =%d km ",daerah[11],daerah[16],jarak[16]);
            fprintf(asal,"Dari %s ke %s dengan jarak  =%d km ",daerah[11],daerah[16],jarak[16]);fclose(asal);

            asal=fopen("./kota.txt","a");
            gotoxy(9,34);printf("Potongan Rp %d  :Rp %d",potongan,total1); 
            fprintf(asal,"potongan Rp %d\n%d",potongan,total1);fclose(asal);        
        }
    }else{
      setcolor(0,0);  
      gotoxy(47,25);printf(" ");  
      inputan_asal1();  
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                              
}
// void main(){
//     inputan_asal();
//     inputan_asal1();
//     getch();
// }
