#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "alamat.c"
#include "validasi.c"
#include "updatae_harga1.c"
#include "updatae_harga2.c"
#include "updatae_harga3.c"
#include "pilih_olahraga.c"
#include "pilih_olahraga1.c"
#include "pertama.c"



////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////                                                                        ////
////								FIRST PROJECT "SAWAL SPORT"                      ////
////                    					 BY                                  ////
////                    		S A W A L U D D I N                           ////
////                    				S1 TEKNIK INFORMATIKA                   ////
////                                                                        ////
////   							                                                 ////
////   							                                                 ////
////                                                                        ////
////                                                                        ////
//// 									  SCREEN BUFFER SIZE                          ////
////   										WIDTH  :120                             ////
////  										 HEIGHT :41                             ////
////                                                                        ////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//========================================================================
//                               PROTOTYPE                               =
//========================================================================
void isidata1();
void masuk();
void bingkai_awal();
void bingkai_judul();
void bingkai_menu();
void tentang();
void bingkai_admin();
void pilih_update();
void layar();
void layar2();
void hps_menu();
void clear(char a[], int x, int y);
void judul();
void bingkai_bismillah();
void bismillah();
void panggil();
void kode();
void kode1();
void keluar();
void tabel();
void tabel_sport1();
void menu_utama();
void menu_utama1();
void info();
void kembali();
void kembali1();
void data();
void input_umur();
void sport_pilihmember();
void sport_pilihbiasa();
void sport1_pilihadmin();
void nama_pembeli();
void alamat1();
void nope1();
void pilih_menu();
void faktur();
void struct_member();
int valtah(char a[]);
int valnope(char a[]);
int valhur(char a[]);
int valal(char a[]);


//==========================================================================
//                            VARIABEL GLOBAL                              =
//==========================================================================
char pilih;
char user[25];
char pil_utama;
char pil_utamauser;
char pil_kode;
int idx;
char unit_sepakbola[6][100];
int jumlah1;
int jumlah2;
int jumlah3;
int jumlah4;
int jumlah5;
int jumlah6;
int total_u;
int total_j;
int total_jmember;
int total_keseluruhan;
struct tabel
{
    char kode[10];
    char barang[20];
    int harga;
    int stock;
} sport1[50];
char uang[100];
char kembalian[100];
char hrg[100];
char stck[100];
char usia[100];




//===========================================================================
//                               PENDATAAN                                  =
//===========================================================================

void isidata1()
{
    strcpy(sport1[0].kode, "1");
    strcpy(sport1[0].barang, "Bola Mikasa");
    strcpy(sport1[1].kode, "2");
    strcpy(sport1[1].barang, "Kaos Kaki ");
    strcpy(sport1[2].kode, "3");
    strcpy(sport1[2].barang, "Deker");
    strcpy(sport1[3].kode, "4");
    strcpy(sport1[3].barang, "Sarung Tangan Kiper");
    strcpy(sport1[4].kode, "5");
    strcpy(sport1[4].barang, "Jersey");
    strcpy(sport1[5].kode, "6");
    strcpy(sport1[5].barang, "Sepatu Nike");

    FILE *bass = fopen("update_harga.txt", "r");
    fscanf(bass, "%d\n%d\n%d\n%d\n%d\n%d", &sport1[0].harga, &sport1[1].harga, &sport1[2].harga, &sport1[3].harga, &sport1[4].harga, &sport1[5].harga);
    fclose(bass);

    FILE *file = fopen("stock.txt", "r");
    fscanf(file, "%d\n%d\n%d\n%d\n%d\n%d", &sport1[0].stock, &sport1[1].stock, &sport1[2].stock, &sport1[3].stock, &sport1[4].stock, &sport1[5].stock);
    fclose(file);

}

//=============================================================================
//                                  MENU AWAL                                 =
//=============================================================================
void menu_utama()
{
    layar();
    bingkai_awal();
    bingkai_menu();
    setcolor(0, 15);
    gotoxy(5, 3);
    printf("Pilih 1 s/d 4");
    gotoxy(111, 10);
    printf("  ");
    gotoxy(50, 5);
    printf("S A W A L  S P O R T");
    gotoxy(9, 10);
    printf("1. PENJUALAN");
    gotoxy(29, 10);
    printf("2. UPDATE DATA");
    gotoxy(50, 10);
    printf("3. PROFIL ADMIN");
    gotoxy(78, 10);
    printf("4. KELUAR");
    gotoxy(97, 10);
    printf("PILIHAN :");
}
void menu_utama1()
{
    gotoxy(107, 10);
    pil_utama = getche();
    if(pil_utama == '1')
    {
        setcolor(12, 15);
        gotoxy(9, 10);
        printf("1. PENJUALAN");
        layar2();
        sport1_pilihadmin();
    }
    else if(pil_utama == '2')
    {
        setcolor(12, 15);
        gotoxy(29, 10);
        printf("2. UPDATE DATA");
        setcolor(12, 15);
        layar2();
        pilih_update();
    }
    else if(pil_utama == '3')
    {
        setcolor(12, 15);
        gotoxy(50, 10);
        printf("3.INFO SAWAL SPORT");
        Sleep(1000);
        tentang();
    }
    else if(pil_utama == '4')
    {
        setcolor(12, 15);
        gotoxy(78, 10);
        printf("4. KELUAR");
        keluar();
    }
    else
    {
        setcolor(12, 15);
        gotoxy(107, 10);
        printf("SALAH!");
        Sleep(500);
        gotoxy(107, 10);
        printf("        ");
        menu_utama1();
    }

}

//===========================================================================
//                         PILIH PENGAPDETAN                                =
//===========================================================================

void pilih_update()
{
    char pilih;
    char lanjut;
    char lanjut1;
    char lanjut2;
    setcolor(4, 0);
    bingkai_awal();
    tampil3();
    hps_menu1();
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 10);
        printf("%c", 220);
    }
    setcolor(9, 0);
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 37; b++)
        {
            setcolor(9, 0);
            gotoxy(42 + b, 12 + a);
            printf("%c", 219);
            gotoxy(42 + b, 18 + a);
            printf("%c", 219);
            gotoxy(42 + b, 24 + a);
            printf("%c", 219);
            setcolor(4, 0);
            gotoxy(42 + b, 30 + a);
            printf("%c", 219);
        }
    }
    setcolor(15, 0);
    gotoxy(45, 14);
    printf(" 1.U P D A T E  F O O T B A L L   ");
    gotoxy(45, 20);
    printf(" 2.U P D A T E  B A D M I N T O N ");
    gotoxy(45, 26);
    printf(" 3.U P D A T E  B I C Y C L E     ");
    gotoxy(45, 32);
    printf("        4.K E L U A R             ");
    setcolor(15, 8);
    gotoxy(43, 35);
    printf(" <=== Tekan Pilihan Anda (1 s/d 4) ===> ");
    gotoxy(93, 37);
    printf("pilih :");
    pilih = getch();
    while (true)
    {
        if (pilih == '1')
        {
            layar2();
            setcolor(15, 0);
            gotoxy(50, 19);
            printf("P E R H A T I A N");
            gotoxy(40, 20);
            printf("JIKA ANDA INGIN MENGAPDUTE HARGA ATAU STOCK");
            gotoxy(35, 21);
            printf("ANDA HARUS MENGAPDUTE KESELURUHAN HARGA ATAUPUN STOCK");
            setcolor(1, 0);
            gotoxy(7, 35);
            printf("Next 'X'atau Kembali'0' :");
            Sleep(500);
            gotoxy(93, 37);
            printf("pilih :");
            lanjut = getch();
            if(lanjut == 'X')
            {
                layar();
                updt_harga();
                layar2();
                pilih_update();
            }
            else if(lanjut == '0')
            {
                pilih_update();
            }
            else
            {
                setcolor(4, 0);
                gotoxy(53, 37);
                printf("INPUTAN SALAH!!!");
                Sleep(1000);
                gotoxy(53, 37);
                printf("                   ");
                Sleep(1);
                setcolor(15, 0);
                gotoxy(93, 37);
                printf("pilih :");
                lanjut = getch();
            }
        }
        else if (pilih == '2')
        {
            layar2();
            setcolor(15, 0);
            gotoxy(50, 19);
            printf("P E R H A T I A N");
            gotoxy(40, 20);
            printf("JIKA ANDA INGIN MENGAPDUTE HARGA ATAU STOCK");
            gotoxy(35, 21);
            printf("ANDA HARUS MENGAPDUTE KESELURUHAN HARGA ATAUPUN STOCK");
            setcolor(1, 0);
            gotoxy(7, 35);
            printf("Next 'X'atau Kembali'0' :");
            Sleep(500);
            gotoxy(93, 37);
            printf("pilih :");
            lanjut1 = getch();
            if(lanjut1 == 'X')
            {
                layar();
                updt_harga1();
                layar2();
                pilih_update();
            }
            else if(lanjut1 == '0')
            {
                pilih_update();
            }
            else
            {
                setcolor(4, 0);
                gotoxy(53, 37);
                printf("INPUTAN SALAH!!!");
                Sleep(1000);
                gotoxy(53, 37);
                printf("                   ");
                Sleep(1);
                setcolor(15, 0);
                gotoxy(93, 37);
                printf("pilih :");
                lanjut1 = getch();
            }
        }
        else if(pilih == '3')
        {
            layar2();
            setcolor(15, 0);
            gotoxy(50, 19);
            printf("P E R H A T I A N");
            gotoxy(40, 20);
            printf("JIKA ANDA INGIN MENGAPDUTE HARGA ATAU STOCK");
            gotoxy(35, 21);
            printf("ANDA HARUS MENGAPDUTE KESELURUHAN HARGA ATAUPUN STOCK");
            setcolor(1, 0);
            gotoxy(7, 35);
            printf("Next 'X'atau Kembali'0' :");
            Sleep(500);
            gotoxy(93, 37);
            printf("pilih :");
            lanjut2 = getch();
            if(lanjut2 == 'X')
            {
                layar();
                updt_harga2();
                layar2();
                pilih_update();
            }
            else if(lanjut2 == '0')
            {
                pilih_update();
            }
            else
            {
                setcolor(4, 0);
                gotoxy(53, 37);
                printf("INPUTAN SALAH!!!");
                Sleep(1000);
                gotoxy(53, 37);
                printf("                   ");
                Sleep(1);
                setcolor(15, 0);
                gotoxy(93, 37);
                printf("pilih :");
                lanjut2 = getch();
            }
        }
        else if (pilih == '4')
        {
            layar2();
            menu_utama();
            menu_utama1();
        }
        else
        {
            setcolor(4, 8);
            gotoxy(57, 36);
            printf("Inputan Salah");
            Sleep(1000);
            setcolor(8, 8);
            gotoxy(57, 36);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(100, 37);
            pilih = getch();
        }
    }

}
//=======================================================================
//                               MASUK CLIENT                           =
//=======================================================================
void masuk()
{
    char pilih;
    layar2();
    bingkai_awal();
    tampil1();
    hps_menu1();
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 10);
        printf("%c", 220);
    }
    setcolor(9, 0);
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 23; b++)
        {
            setcolor(9, 0);
            gotoxy(50 + b, 12 + a);
            printf("%c", 219);
            gotoxy(50 + b, 18 + a);
            printf("%c", 219);
            setcolor(4, 0);
            gotoxy(50 + b, 24 + a);
            printf("%c", 219);
        }
    }
    setcolor(15, 0);
    gotoxy(54, 14);
    printf("  1.D A F T A R   ");
    gotoxy(54, 20);
    printf("  2.M A S U K     ");
    gotoxy(54, 26);
    printf("  3.K E L U A R   ");
    setcolor(15, 8);
    gotoxy(46, 35);
    printf(" <=== Tekan Pilihan Anda (1 s/d 3) ===> ");
    gotoxy(93, 37);
    printf("pilih :");
    pilih = getch();
    while (true)
    {
        if (pilih == '1')
        {
            layar();
            daftarakun();
            layar2();
            sport_pilihbiasa();
        }
        else if (pilih == '2')
        {
            layar();
            cekakun();
            layar2();
            sport_pilihmember();
        }
        else if (pilih == '3')
        {
            layar2();
            bingkai_admin();
        }
        else
        {
            setcolor(4, 8);
            gotoxy(57, 36);
            printf("Inputan Salah");
            Sleep(1000);
            setcolor(8, 8);
            gotoxy(57, 36);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(100, 37);
            pilih = getch();
        }
    }

}
//=======================================================================
//                          TAMPILAN PERTAMA                            =
//=======================================================================
void tentang()
{
    layar2();
    setcolor(15, 0);
    gotoxy(15, 5);
    printf("N A M A     :   S A W A L U D D I N");
    gotoxy(15, 7);
    printf("N I M       :   0 2 0 3 2 1 1 1 0 4 1");
    gotoxy(15, 9);
    printf("P R O D I   :   S 1  T E K N I K   I N F O R M A T I K A");
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 12);
        printf("%c", 220);
    }
    setcolor(2, 0);
    gotoxy(5, 37);
    printf(" Copyright By Sawaluddin Siregar");
    setcolor(15, 0);
    gotoxy(74, 35);
    printf("TEKAN TOMBOL 'X' UNTUK KEMBALI !!!");
    gotoxy(15, 16);
    printf("Tempat/Tanggal lahir : Panti,28 Desember 2001");
    gotoxy(15, 18);
    printf("Hobby                : Sepakbola/Futsal");
    gotoxy(15, 20);
    printf("Alamat               : Padangsidimpuan - Provinsi SUMUT");
    gotoxy(15, 22);
    printf("Agama                : Islam");
    gotoxy(15, 24);
    printf("Golongan Darah       : B");
    gotoxy(15, 26);
    printf("Pendidikan           : Mahasiswa");
    gotoxy(15, 28);
    printf("Asal Sekolah         : SMK NEGERI 3 PADANGSIDIMPUAN");
    gotoxy(74, 37);
    printf("DI TEKAN YA :");
    pilih = getch();
    while(pilih)
    {
        if(pilih == 'X')
        {
            layar();
            menu_utama();
            menu_utama1();
        }
        else
        {
            pilih = getch();
        }
    }

}
void bingkai_admin()
{
    char pilih;
    setcolor(4, 0);
    bingkai_awal();
    setcolor(15, 0);
    gotoxy(35, 5);
    printf("B I S M I L L A H I R R O H M A N I R R O H I M");
    Sleep(100);
    gotoxy(15, 7);
    printf("<=== A S S A L A M U A L A I K U M   W A R A H M A T U L L A H I   W A B A R A K A T U H ===>");
    Sleep(1000);
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 10);
        printf("%c", 220);
    }
    hps_menu1();
    setcolor(9, 0);
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 32; b++)
        {
            setcolor(9, 0);
            gotoxy(45 + b, 12 + a);
            printf("%c", 219);
            gotoxy(45 + b, 18 + a);
            printf("%c", 219);
            gotoxy(45 + b, 24 + a);
            printf("%c", 219);
            setcolor(4, 0);
            gotoxy(45 + b, 30 + a);
            printf("%c", 219);
        }
    }
    setcolor(15, 0);
    gotoxy(49, 14);
    printf("       1. A D M I N       ");
    gotoxy(49, 20);
    printf("    2.I N F O  T O K O    ");
    gotoxy(49, 26);
    printf("       3.M A S U K        ");
    gotoxy(49, 32);
    printf("      4.K E L U A R       ");
    setcolor(15, 8);
    gotoxy(43, 35);
    printf(" <=== Tekan Pilihan Anda (1 s/d 4) ===> ");
    gotoxy(93, 37);
    printf("pilih :");
    pilih = getch();
    while (true)
    {
        if (pilih == '1')
        {
            layar2();
            layar();
            kode();
            kode1();
        }
        else if (pilih == '2')
        {
            layar2();
            for (int a = 2; a < 114; a++)
            {
                gotoxy(2 + a, 10);
                printf("%c", 220);
            }
            info();
        }
        else if(pilih == '3')
        {
            layar2();
            judul();
            masuk();
        }
        else if (pilih == '4')
        {
            layar2();
            setcolor(15, 0);
            gotoxy(50, 20);
            printf("T E R I M A K A S I H");
            gotoxy(15, 22);
            printf("<=== A S S A L A M U A L A I K U M   W A R A H M A T U L L A H I   W A B A R A K A T U H ===>");
            Sleep(1000);
            exit(0);
        }
        else
        {
            setcolor(4, 8);
            gotoxy(57, 36);
            printf("Inputan Salah");
            Sleep(1000);
            gotoxy(57, 36);
            printf("                ");
            Sleep(1000);
            gotoxy(100, 37);
            pilih = getch();
        }
    }
}
//=========================================================================
//                           PERJUDULAN                                   =
//=========================================================================
void judul()
{
    bingkai_awal();
    gotoxy(35, 3);
    printf("B I S M I L L A H I R R O H M A N I R R O H I M");
    Sleep(100);
    gotoxy(38, 5);
    printf("A S S A L A M U A L A I K U M  W R.  W B.");
    Sleep(1000);
    for(int i = 1; i <= 15; i++)
    {
        setcolor(i, 0);
        gotoxy(10, 10);
        printf(" *******     ****      ***              ***      ****      ****            ");
        Sleep(5);
        gotoxy(10, 11);
        printf(" *******    ******     ***              ***     ******     ****            ");
        Sleep(5);
        gotoxy(10, 12);
        printf(" ***       ***  ***    ***              ***    ***  ***    ****            ");
        Sleep(5);
        gotoxy(10, 13);
        printf(" ***       ***  ***    ***      **      ***    ***  ***    ****            ");
        Sleep(5);
        gotoxy(10, 14);
        printf(" ***       ***  ***    ***     ****     ***    ***  ***    ****            ");
        Sleep(5);
        gotoxy(10, 15);
        printf(" *******   ***  ***    ***    ******    ***    ***  ***    ****            ");
        Sleep(5);
        gotoxy(10, 16);
        printf(" *******   ********    ***   ***  ***   ***    ********    ****            ");
        Sleep(5);
        gotoxy(10, 17);
        printf("     ***   ********    ***  ***    ***  ***    ********    ****            ");
        Sleep(5);
        gotoxy(10, 18);
        printf("     ***   ***  ***    *** ***      *** ***    ***  ***    ****            ");
        Sleep(5);
        gotoxy(10, 19);
        printf("     ***   ***  ***    ******        ******    ***  ***    ****            ");
        Sleep(5);
        gotoxy(10, 20);
        printf(" *******   ***  ***    *****          *****    ***  ***    *************** ");
        Sleep(5);
        gotoxy(10, 21);
        printf(" *******   ***  ***    ****            ****    ***  ***    *************** ");
        Sleep(5);

        gotoxy(15, 25);
        printf(" ******    ***********     ****     ***********   ***********    ");
        Sleep(5);
        gotoxy(15, 26);
        printf(" ******    ***********    ******    ***********   ***********    ");
        Sleep(5);
        gotoxy(15, 27);
        printf(" ***       ****    ***   ***  ***   ***    ***        ***        ");
        Sleep(5);
        gotoxy(15, 28);
        printf(" ***       ****   ***    ***  ***   ***   **          ***        ");
        Sleep(5);
        gotoxy(15, 29);
        printf(" ******    *********     ***  ***   ********          ***        ");
        Sleep(5);
        gotoxy(15, 30);
        printf("    ***    ****          ***  ***   ********          ***        ");
        Sleep(5);
        gotoxy(15, 31);
        printf(" ******    ****           ******    ***   ***         ***        ");
        Sleep(5);
        gotoxy(15, 32);
        printf(" ******    ****            ****     ***     **        ***        ");
        Sleep(5);
        gotoxy(43, 37);
        printf("P R O G R A M M E R  S E J A T I");
        Sleep(10);
    }
}

//===========================================================================
//                            BISMILLAH                                     =
//===========================================================================
void bingkai_bismillah()
{
    setcolor(9, 0);
    for (int a = 3; a <= 12; a++)
    {
        for (int b = 14; b <= 106; b++)
        {
            if(a == 3 || a == 12 || b == 14 || b == 106)
            {
                gotoxy(b, a);
                printf("%c", 219);
                Sleep(2);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void bismillah()
{
    bingkai_bismillah();
    for(int i = 1; i <= 15; i++)
    {
        setcolor(i, 0);
        gotoxy(15, 5);
        printf("  ********      ***  ********  ***    ****  ***  **         **           ****    ***   *** ");
        Sleep(5);
        gotoxy(15, 6);
        printf("  ***   **      ***  ***       ****   ****  ***  **         **          ******   ***   *** ");
        Sleep(5);
        gotoxy(15, 7);
        printf("  ***   **      ***  ********  **  ***  **  ***  **         **         ***  ***  ***   *** ");
        Sleep(5);
        gotoxy(15, 8);
        printf("  ***********   ***       ***  **  ***  **  ***  **         **         ********  ********* ");
        Sleep(5);
        gotoxy(15, 9);
        printf("  ***     ***   ***       ***  **       **  ***  *********  *********  ***  ***  ***   *** ");
        Sleep(5);
        gotoxy(15, 10);
        printf("  ***********   ***  ********  **       **  ***  *********  *********  ***  ***  ***   *** ");
        Sleep(5);
    }
}

//===========================================================================
//                            MASUK & KELUAR                                =
//===========================================================================
void kode()
{
    char user[25];
    bismillah();
    setcolor(0, 0);
    for(int a = 1; a <= 5; a++)
    {
        for(int b = 1; b <= 35; b++)
        {
            gotoxy(b + 43, a + 16);
            printf("%c", 219);
        }
    }
    setcolor(11, 0);
    for(int a = 1; a <= 5; a++)
    {
        for(int b = 1; b <= 35; b++)
        {
            if(a == 1 || b == 1 || a == 5 || b == 35)
            {
                gotoxy(b + 43, a + 16);
                printf("%c", 219);
                Sleep(10);
            }
        }
    }
    setcolor(15, 0);
    gotoxy(46, 19);
    printf("Masukkan Kode:");
    gotoxy(61, 19);
    printf("Max 9 digit");
    Sleep(1000);
    gotoxy(61, 19);
    printf("           ");
}
void kode1()
{
    int a = 0;
    setcolor(15, 0);
    gotoxy(61, 19);
    user[a] = getch();
    while(user[a] != 13)
    {
        if(user[a] == 8)
        {
            setcolor(15, 0);
            a--;
            if(a < 0)
            {
                a = 0;
            }
            gotoxy(61 + a, 19);
            printf(" ");
        }
        else
        {
            printf("x");
            a++;
        }
        if(a > 9)
        {
            a = 9;
            gotoxy(70, 19);
            printf(" ");
        }
        gotoxy(61 + a, 19);
        user[a] = getch();

    }
    user[a] = 00;
    if((strlen(user) <= 9) && (strcmp(user, "sawal1234") == 0))
    {
        for(int a = 1, b = 1; a <= 100; a++)
        {
            setcolor(0, 15);
            gotoxy(54, 33);
            printf("Loading %d%%", a);
            Sleep(15);
            if(a % 2 == 0)
            {
                setcolor(0, 15);
                gotoxy(b + 35, 35);
                printf("%c", 178);
                Sleep(20);
                b++;
            }
        }
        Sleep(10);
        layar();
        menu_utama();
        menu_utama1();

    }
    else
    {
        setcolor(4, 0);
        gotoxy(61, 19);
        printf("kode salah!!!");
        Sleep(1000);
        gotoxy(61, 19);
        printf("             ");
        kode1();
    }
}
void keluar()
{
    char pilih;
    setcolor(0, 15);
    gotoxy(45, 20);
    printf("ANDA YAKIN INGIN KELUAR? (Y/N) : ");
    pilih = getche();

    if (pilih == 'Y')
    {
        setcolor(6, 0);
        for(int a = 18; a <= 26; a++)
        {
            for(int b = 22; b <= 96; b++)
            {
                if(a == 18 || a == 26 || b == 22 || b == 96)
                {
                    gotoxy(b, a);
                    printf("%c", 219);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        for(int i = 1; i <= 15; i++)
        {
            setcolor(i, 0);
            gotoxy(24, 20);
            printf("@@@@@@@  @@@@@  @@@@  @  @     @   @@@   @   @   @@@    @@@@   @  @   @");
            Sleep(5);
            gotoxy(24, 21);
            printf("  @     @      @   @  @  @@   @@  @   @  @  @   @   @  @       @  @   @");
            Sleep(5);
            gotoxy(24, 22);
            printf("  @     @@@@   @@@@   @  @ @ @ @  @@@@@  @@@    @@@@@   @@@@   @  @@@@@");
            Sleep(5);
            gotoxy(24, 23);
            printf("  @     @      @  @   @  @  @  @  @   @  @  @   @   @       @  @  @   @");
            Sleep(5);
            gotoxy(24, 24);
            printf("  @     @@@@@  @   @  @  @     @  @   @  @   @  @   @  @@@@@   @  @   @");
            Sleep(5);
        }
        setcolor(9, 0);
        for(int a = 29; a < 33; a++)
        {
            for(int b = 44; b <= 75; b++)
            {
                if(a == 29 || a == 32 || b == 44 || b == 75)
                {
                    gotoxy(b, a);
                    printf("%c", 219);
                    Sleep(5);
                }
            }
        }
        setcolor(0, 15);
        gotoxy(46, 30);
        printf("COPYRIGHT BY SAWALUDDIN SRG");
        gotoxy(50, 31);
        printf("S1 TEKNIK INFORMATIKA");
        Sleep(2000);
        layar2();
        bingkai_admin();
    }
    else if (pilih == 'N')
    {
        layar();
        menu_utama();
        menu_utama1();
    }
    else
    {
        setcolor(12, 15);
        gotoxy(53, 28);
        printf("INPUTAN SALAH!!!");
        Sleep(500);
        setcolor(3, 0);
        hps_menu();
        keluar();
    }
}
//======================================================================
//                                  TABEL                              =
//======================================================================
void tabel()
{
    //hps_menu();
    layar();
    setcolor(0, 0);
    for(int a = 15; a <= 23; a++)
    {
        for(int b = 9; b <= 75; b++)
        {
            gotoxy(b, a);
            printf("%c", 219);
        }
    }
    setcolor(6, 0);
    idx = 5;
    for(int y = 1; y <= idx + 4; y++)
    {
        gotoxy(9, y + 15);
        printf("%c", 219);
        Sleep(1);
        gotoxy(16, y + 15);
        printf("%c", 219);
        gotoxy(43, y + 15);
        printf("%c", 219);
        gotoxy(57, y + 15);
        printf("%c", 219);
        gotoxy(69, y + 15);
        printf("%c", 219);
    }
    for(int x = 1; x <= 67; x++)
    {
        gotoxy(x + 8, 15);
        printf("%c", 219);
        Sleep(1);
        gotoxy(x + 8, 17);
        printf("%c", 219);
        gotoxy(x + 8, idx + 19);
        printf("%c", 219);
    }
    setcolor(15, 0);
    gotoxy(11, 16);
    printf("KODE");
    gotoxy(27, 16);
    printf("BARANG");
    gotoxy(47, 16);
    printf("HARGA");
    gotoxy(60, 16);
    printf("STOCK");

    setcolor(15, 0);
    for(int x = 0; x < idx + 1; x++)
    {
        gotoxy(13, 18 + x);
        printf("%s", sport1[x].kode);
        gotoxy(18, 18 + x);
        printf("%s", sport1[x].barang);
        gotoxy(46, 18 + x);
        printf("%d", sport1[x].harga);
        gotoxy(60, 18 + x);
        printf("%d", sport1[x].stock);
    }
}
//============================================================================
//                              PILIH OLAHRAGA                               =
//============================================================================
void sport_pilihmember()
{
    char pilih;
    setcolor(4, 0);
    bingkai_awal();
    tampil2();
    hps_menu1();
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 10);
        printf("%c", 220);
    }
    setcolor(9, 0);
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 35; b++)
        {
            setcolor(9, 0);
            gotoxy(40 + b, 13 + a);
            printf("%c", 219);
            gotoxy(40 + b, 19 + a);
            printf("%c", 219);
            gotoxy(40 + b, 25 + a);
            printf("%c", 219);
            setcolor(4, 0);
            gotoxy(40 + b, 31 + a);
            printf("%c", 219);
        }
    }
    setcolor(15, 0);
    gotoxy(45, 15);
    printf("    1. S E P A K B O L A   ");
    gotoxy(45, 21);
    printf(" 2. B U L U  T A N G K I S ");
    gotoxy(45, 27);
    printf("   3. B E R S E P E D A    ");
    gotoxy(45, 33);
    printf("     4.K E L U A R         ");
    setcolor(15, 8);
    gotoxy(40, 36);
    printf(" <=== Tekan Pilihan Anda (1 s/d 4) ===> ");
    gotoxy(93, 37);
    printf("pilih :");
    pilih = getch();
    while (true)
    {
        if (pilih == '1')
        {
            layar();
            data();
            tabel();
            pilih_menu();
            struct_member();
            kembali();

        }
        else if (pilih == '2')
        {
            layar();
            inputan_asal();
            data1();
            tabel1();
            pilih_menu1();
            struct_member1();
            kembali();

        }
        else if (pilih == '3')
        {
            layar();
            inputan_asal();
            data2();
            tabel2();
            pilih_menu2();
            struct_member2();
            kembali();
        }
        else if(pilih == '4')
        {
            layar2();
            masuk();
        }
        else
        {
            setcolor(4, 8);
            gotoxy(57, 37);
            printf("Inputan Salah");
            Sleep(1000);
            setcolor(8, 8);
            gotoxy(57, 37);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(100, 37);
            pilih = getch();
        }
    }
}
void sport_pilihbiasa()
{
    char pilih;
    setcolor(4, 0);
    bingkai_awal();
    tampil2();
    hps_menu1();
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 10);
        printf("%c", 220);
    }
    setcolor(9, 0);
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 35; b++)
        {
            setcolor(9, 0);
            gotoxy(40 + b, 13 + a);
            printf("%c", 219);
            gotoxy(40 + b, 19 + a);
            printf("%c", 219);
            gotoxy(40 + b, 25 + a);
            printf("%c", 219);
            setcolor(4, 0);
            gotoxy(40 + b, 31 + a);
            printf("%c", 219);
        }
    }
    setcolor(15, 0);
    gotoxy(45, 15);
    printf("    1. S E P A K B O L A   ");
    gotoxy(45, 21);
    printf(" 2. B U L U  T A N G K I S ");
    gotoxy(45, 27);
    printf("   3. B E R S E P E D A    ");
    gotoxy(45, 33);
    printf("     4.K E L U A R         ");
    setcolor(15, 8);
    gotoxy(40, 36);
    printf(" <=== Tekan Pilihan Anda (1 s/d 4) ===> ");
    gotoxy(93, 37);
    printf("pilih :");
    pilih = getch();
    while (true)
    {
        if (pilih == '1')
        {
            layar();
            data();
            tabel();
            pilih_menu();
            kembali();

        }
        else if (pilih == '2')
        {
            layar();
            inputan_asal();
            data1();
            tabel1();
            pilih_menu1();
            kembali();

        }
        else if (pilih == '3')
        {
            layar();
            inputan_asal();
            data2();
            tabel2();
            pilih_menu2();
            kembali();
        }
        else if(pilih == '4')
        {
            layar2();
            masuk();
        }
        else
        {
            setcolor(4, 8);
            gotoxy(57, 37);
            printf("Inputan Salah");
            Sleep(1000);
            setcolor(8, 8);
            gotoxy(57, 37);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(100, 37);
            pilih = getch();
        }
    }
}
void sport1_pilihadmin()
{
    char pilih;
    setcolor(4, 0);
    bingkai_awal();
    tampil2();
    hps_menu1();
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 10);
        printf("%c", 220);
    }
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 35; b++)
        {
            setcolor(9, 0);
            gotoxy(40 + b, 13 + a);
            printf("%c", 219);
            gotoxy(40 + b, 19 + a);
            printf("%c", 219);
            gotoxy(40 + b, 25 + a);
            printf("%c", 219);
            setcolor(4, 0);
            gotoxy(40 + b, 31 + a);
            printf("%c", 219);
        }
    }
    setcolor(15, 0);
    gotoxy(45, 15);
    printf("    1. S E P A K B O L A   ");
    gotoxy(45, 21);
    printf(" 2. B U L U  T A N G K I S ");
    gotoxy(45, 27);
    printf("   3. B E R S E P E D A    ");
    gotoxy(45, 33);
    printf("     4.K E L U A R         ");
    setcolor(15, 8);
    gotoxy(40, 36);
    printf(" <=== Tekan Pilihan Anda (1 s/d 4) ===> ");
    gotoxy(93, 37);
    printf("pilih :");
    pilih = getch();
    while (true)
    {
        if (pilih == '1')
        {
            layar();
            inputan_asal();
            data();
            tabel();
            pilih_menu();
            kembali1();

        }
        else if (pilih == '2')
        {
            layar();
            inputan_asal();
            data1();
            tabel1();
            pilih_menu1();
            kembali1();

        }
        else if (pilih == '3')
        {
            layar();
            inputan_asal();
            data2();
            tabel2();
            pilih_menu2();
            kembali1();
        }
        else if(pilih == '4')
        {
            layar2();
            menu_utama();
            menu_utama1();
        }
        else
        {
            setcolor(4, 8);
            gotoxy(57, 37);
            printf("Inputan Salah");
            Sleep(1000);
            setcolor(8, 8);
            gotoxy(57, 37);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(100, 37);
            pilih = getch();
        }
    }
}


//=============================================================================
//                                  INFO PRODUK                               =
//=============================================================================
void info()
{
    setcolor(15, 0);
    layar2();
    setcolor(15, 0);
    gotoxy(15, 5);
    printf("N A M A  T O K O     :   S A W A L  S P O R T");
    gotoxy(15, 7);
    printf("A L A M A T          :   Jl.Dakota Kel.Sukaraja Kec.Cicendo Kota Bandung,Jawa Barat");
    gotoxy(15, 9);
    printf("B I S N I S          :   Menjual Alat Olahraga");
    setcolor(9, 0);
    for (int a = 2; a < 114; a++)
    {
        gotoxy(2 + a, 12);
        printf("%c", 220);
    }
    setcolor(2, 0);
    gotoxy(5, 37);
    printf(" Copyright By Sawaluddin Siregar");
    setcolor(15, 0);
    gotoxy(74, 35);
    printf("TEKAN TOMBOL 'X' UNTUK KEMBALI !!!");
    gotoxy(15, 16);
    printf("SAWAL SPORT toko menjual peralatan olahraga di bidang olahraga sepakbola,bulutangkis dan bersepeda.");
    gotoxy(15, 18);
    printf("Olahraga Sepakbola   : Menjual Bola merk Mikasa,kaos kaki,Deker/pelindung siku dan lutut,");
    gotoxy(15, 19);
    printf("                       Sarung tangan kiper,jersey,Sepatu merk Nike.");
    gotoxy(15, 21);
    printf("Olahraga Bulutangkis : Menjual Raket merk Yonex,Shuttlecok(bola),Deker/pelindung siku.");
    gotoxy(15, 22);
    printf("                       dan lutut,Net atau Jaring,Tas sporty Yonex,dan Sepatu Yonex");
    gotoxy(15, 24);
    printf("Olahraga Bersepeda   : Menjual Sepeda gunung merk United,Helm United,Pelindung Lutut,");
    gotoxy(15, 25);
    printf("                       Bike glives(sarung tangan),Kacamta pelindung,Sepatu merk Adidas.");
    gotoxy(15, 27);
    printf("Media pembayaran     : Dibayar cash ketika barang sudah sampai di tempat(COD).");
    gotoxy(74, 37);
    printf("DI TEKAN YA :");
    pilih = getch();
    while(pilih)
    {
        if(pilih == 'X')
        {
            layar2();
            bingkai_admin();
        }
        else
        {
            setcolor(4, 0);
            gotoxy(88, 37);
            printf("Inputan Salah");
            Sleep(1000);
            gotoxy(88, 37);
            printf("               ");
            pilih = getch();
        }
    }
    kembali1();
}

//=========================================================================
//                            KEMBALI                                     =
//=========================================================================

void kembali1()
{
    setcolor(1, 15);
    gotoxy(37, 36);
    printf("TEKAN TOMBOL 'X' UNTUK PILIH MENU LAIN :");
    Sleep(500);
    gotoxy(77, 36);
    printf("  ");
    gotoxy(77, 36);
    pil_utama = getche();
    if(pil_utama == 'X')
    {
        hps_menu();
        menu_utama();
        menu_utama1();
        gotoxy(107, 10);
        printf("       ");
    }
    else
    {
        setcolor(4, 15);
        gotoxy(53, 37);
        printf("INPUTAN SALAH!!!");
        Sleep(1000);
        gotoxy(53, 37);
        printf("                   ");
        Sleep(1);
        kembali1();
    }
}
void kembali()
{
    setcolor(1, 15);
    gotoxy(37, 36);
    printf("TEKAN TOMBOL 'X' UNTUK PILIH MENU LAIN :");
    Sleep(500);
    gotoxy(77, 36);
    printf("  ");
    gotoxy(77, 36);
    pil_utamauser = getche();
    if(pil_utamauser == 'X')
    {
        layar2();
        sport_pilihmember();
        gotoxy(107, 10);
        printf("       ");
    }
    else
    {
        setcolor(4, 15);
        gotoxy(53, 37);
        printf("INPUTAN SALAH!!!");
        Sleep(1000);
        gotoxy(53, 37);
        printf("                   ");
        Sleep(1);
        kembali();
    }
}
//==========================================================================
//                               ISI DATA                                  =
//==========================================================================
void data()
{
    inputan_asal();
    setcolor(0, 0);
    for(int a = 21; a <= 31; a++)
    {
        for(int b = 45; b <= 75; b++)
        {
            gotoxy(b, a);
            printf("%c", 219);
        }
    }
    setcolor(6, 0);
    for(int a = 21; a <= 31; a++)
    {
        for(int b = 7; b <= 75; b++)
        {
            if(a == 21 || b == 7 || a == 31 || b == 75 || b == 45)
            {
                Sleep(10);
                gotoxy(b, a);
                printf("%c", 219);
            }
        }
    }
    setcolor(9, 15);
    gotoxy(10, 19);
    printf("#alamat toko :Bandung");
    setcolor(0, 15);
    gotoxy(86, 16);
    printf("K E T E R A N G A N");
    gotoxy(78, 18);
    printf("1.Nama harus huruf & huruf");
    gotoxy(78, 19);
    printf("  min 3 atau max 25 digit");
    gotoxy(78, 20);
    printf("2.Spasi tidak boleh diisi pertama");
    gotoxy(78, 21);
    printf("  kali dan terakhir spasi juga");
    gotoxy(78, 22);
    printf("  tidak boleh dua kali");
    gotoxy(78, 23);
    printf("3.Pilih Kode alamat(kota) A s/d Q");
    gotoxy(78, 24);
    printf("4.Jarak /Km =Rp 100,-");
    gotoxy(78, 25);
    printf("5.Potongan jika jarak >1000 & <1500");
    gotoxy(78, 26);
    printf("  5%% dari total atau >=1500 & <=2000");
    gotoxy(78, 27);
    printf("  10%% dari total atau >2000 & <=2500");
    gotoxy(78, 28);
    printf("  20%% dari total");
    gotoxy(78, 29);
    printf("  selain itu 0%% dari total");
    gotoxy(78, 30);
    printf("6.No.Hp harus diisi 08 pertama kali,");
    gotoxy(78, 31);
    printf("  angka min 11 & max 13 digit");
    gotoxy(78, 32);
    printf("  isi angka digit ke-3 selain angka");
    gotoxy(78, 33);
    printf("  0,4,6,8,9 dan angka digit ke-4");
    gotoxy(78, 34);
    printf("  selain angka 0,4,5,6");
    gotoxy(78, 35);
    printf("7.usia >= 10 tahun & <= 63 tahun");
    setcolor(0, 15);
    gotoxy(9, 23);
    printf("Nama pembeli                 :");
    gotoxy(9, 25);
    printf("Pilih kode alamat (kota)     :");
    gotoxy(9, 27);
    printf("No.Hp                        :");
    gotoxy(9, 29);
    printf("Usia                         :");
    setcolor(15, 0);
    gotoxy(47, 23);
    validasi_nama();
    gotoxy(47, 23);
    printf("%s", nama);
    setcolor(15, 0);
    gotoxy(47, 25);
    inputan_asal1();
    setcolor(15, 0);
    gotoxy(47, 27);
    validasi_nohp();
    input_umur();
}
void input_umur()
{
    setcolor(15, 0);
    int a = 0;
    gotoxy(47, 29);
    printf("    ");
    gotoxy(47, 29);
    usia[a] = getch();
    while(usia[a] != 13)
    {
        if(usia[a] == 8)
        {
            a--;
            if(a < 0)
            {
                a = 0;
            }
            gotoxy(47 + a, 29);
            printf(" ");
        }
        else
        {
            printf("%c", usia[a]);
            a++;
        }
        if(a > 2)
        {
            a = 2;
            gotoxy(49, 29);
            printf(" ");
        }
        gotoxy(47 + a, 29);
        usia[a] = getch();
    }
    usia[a] = 00;
    if(valtah(usia) == 0 && strlen(usia) <= 9 && strlen(usia) != 0)
    {
        if(atoi(usia) >= 10 && atoi(usia) <= 63)
        {
            gotoxy(47, 29);
            printf("%d tahun", atoi(usia));
        }
        else
        {
            setcolor(4, 0);
            gotoxy(47, 29);
            printf("                    ");
            gotoxy(47, 29);
            printf("Inputan salah!");
            Sleep(2000);
            gotoxy(47, 29);
            printf("                    ");
            input_umur();
        }
    }
    else
    {
        setcolor(4, 0);
        setcolor(12, 15);
        gotoxy(52, 36);
        printf("Inputan tidak valid!!");
        Sleep(1000);
        gotoxy(52, 36);
        printf("                     ");
        input_umur();
    }
    //tabel();
}
void pilih_menu()
{
    setcolor(0, 0);
    for(int a = 15; a < 26; a++)
    {
        for(int b = 70; b <= 103; b++)
        {
            gotoxy(b, a);
            printf("%c", 219);
        }
    }
    for(int a = 9; a <= 103; a++)
    {
        gotoxy(a, 25);
        printf("%c", 219);
    }
    setcolor(6, 0);
    for(int y = 1; y <= idx + 6; y++)
    {
        gotoxy(83, y + 15);
        printf("%c", 219);
        Sleep(2);
        gotoxy(103, y + 15);
        printf("%c", 219);
    }
    for(int x = 1; x <= 34; x++)
    {
        gotoxy(x + 69, 15);
        printf("%c", 219);
        Sleep(2);
        gotoxy(x + 69, 17);
        printf("%c", 219);
        gotoxy(x + 69, idx + 19);
        printf("%c", 219);
    }
    for(int x = 9; x <= 103; x++)
    {
        gotoxy(x, idx + 21);
        printf("%c", 219);
        Sleep(2);
    }
    gotoxy(9, idx + 20);
    printf("%c", 219);
    Sleep(2);
    gotoxy(69, idx + 20);
    printf("%c", 219);
    gotoxy(83, idx + 20);
    printf("%c", 219);
    gotoxy(103, idx + 20);
    printf("%c", 219);
    setcolor(15, 0);
    gotoxy(73, 16);
    printf("UNIT");
    gotoxy(87, 16);
    printf("JUMLAH");
    gotoxy(29, idx + 20);
    printf("TOTAL");
    setcolor(0, 0);
    for(int a = 30; a < 35; a++)
    {
        for(int b = 18; b <= 102; b++)
        {
        }
    }
    setcolor(9, 0);
    for(int a = 30; a < 35; a++)
    {
        for(int b = 18; b <= 102; b++)
        {
            if(a == 30 || a == 34 || b == 18 || b == 102)
            {
                gotoxy(b, a);
                printf("%c", 219);
            }
        }
    }
    setcolor(0, 15);
    gotoxy(20, 32);
    printf("Masukkan kode barang yang ingin dibeli(tombol 'S' untuk selesai):");
    int a = 1;
    bool status;
    status = true;
    while(status)
    {
        setcolor(6, 0 );
        gotoxy(86, 32);
        pil_kode = getch();
        int barang = pil_kode - 49;
        if(pil_kode >= '1' && pil_kode <= '6')
        {
            if(a > 1)
            {
                sport1[barang].stock += atoi(unit_sepakbola[barang]);
                total_u -= atoi(unit_sepakbola[barang]);
                total_j -= jumlah1;
                gotoxy(60, 18 + barang);
                printf("        ");
                gotoxy(60, 18 + barang);
                printf("%d", sport1[barang].stock);
                gotoxy(85, 18 + barang);
                printf("          ");
                gotoxy(71, idx + 20);
                printf("          ");
                gotoxy(85, idx + 20);
                printf("          ");
            }
            a++;
            bool status;
            status = true;
            while(status)
            {
                int a = 0;
                setcolor(15, 0);
                gotoxy(71, 18 + barang);
                printf("      ");
                gotoxy(71, 18 + barang);
                unit_sepakbola[barang][a] = getch();
                while(unit_sepakbola[barang][a] != 13)
                {
                    if(unit_sepakbola[barang][a] == 8)
                    {
                        a--;
                        if(a < 0)
                        {
                            a = 0;
                        }
                        gotoxy(71 + a, 18 + barang);
                        printf(" ");
                    }
                    else
                    {
                        printf("%c", unit_sepakbola[barang][a]);
                        a++;
                    }
                    if(a > 2)
                    {
                        a = 2;
                        gotoxy(73, 18 + barang);
                        printf(" ");
                    }
                    gotoxy(71 + a, 18 + barang);
                    unit_sepakbola[barang][a] = getch();
                }
                unit_sepakbola[barang][a] = 0;
                if(valtah(unit_sepakbola[barang]) == 0 && strlen(unit_sepakbola[barang]) <= 9 && strlen(unit_sepakbola[barang]) != 0)
                {
                    if(atoi(unit_sepakbola[barang]) < 0 || atoi(unit_sepakbola[barang]) > sport1[barang].stock)
                    {
                        gotoxy(71, 18 + barang);
                        printf(" ");
                    }
                    else
                    {
                        sport1[barang].stock -= atoi(unit_sepakbola[barang]);

                        FILE *file = fopen("stock.txt", "w");
                        fprintf(file, "%d\n%d\n%d\n%d\n%d\n%d", sport1[0].stock, sport1[1].stock, sport1[2].stock, sport1[3].stock, sport1[4].stock, sport1[5].stock);
                        fclose(file);

                        jumlah1 = atoi(unit_sepakbola[barang]) * sport1[barang].harga;
                        total_u = atoi(unit_sepakbola[0]) + atoi(unit_sepakbola[1]) + atoi(unit_sepakbola[2]) + atoi(unit_sepakbola[3]) + atoi(unit_sepakbola[4]) + atoi(unit_sepakbola[5]);
                        total_j = jumlah1 + jumlah2 + jumlah3 + jumlah4 + jumlah5 + jumlah6;
                        gotoxy(60, 18 + barang);
                        printf("        ");
                        gotoxy(60, 18 + barang);
                        printf("%d", sport1[barang].stock);
                        gotoxy(85, 18 + barang);
                        printf("Rp %d", jumlah1);
                        gotoxy(71, idx + 20);
                        printf("%d", total_u);
                        gotoxy(85, idx + 20);
                        printf("Rp %d", total_j);
                        status = false;
                    }
                }
                else
                {
                    setcolor(12, 15);
                    gotoxy(52, 36);
                    printf("Inputan tidak valid!!");
                    Sleep(1000);
                    gotoxy(52, 36);
                    printf("                     ");
                }
            }
        }
        else if(pil_kode == 'S')
        {
            hps_menu();
            status = false;
            faktur();
        }
        else
        {
            setcolor(12, 15);
            gotoxy(52, 36);
            printf("Inputan salah!!!");
            Sleep(1000);
            gotoxy(52, 36);
            printf("                ");
        }
    }
}

//===========================================================================
//                                     FAKTUR                               =
//===========================================================================

void faktur()
{
    char potongan[100];
    int total_ongkir;
    FILE *hasil;
    hasil = fopen("./struct_sepakbola.txt", "w");
    fputs("", hasil);
    fclose(hasil);
    FILE *alamat = fopen("./kota.txt", "r");
    fscanf(alamat, "%[^\n]\n", &potongan);
    fscanf(alamat, "%d", &total_ongkir);
    setcolor(0, 0);
    for(int a = 9; a <= 33; a++)
    {
        for(int b = 20; b <= 96; b++)
        {
            gotoxy(b, a);
            printf("%c", 219);
        }
    }

    setcolor(6, 0);
    for(int a = 9; a <= 33; a++)
    {
        for(int b = 20; b <= 96; b++)
        {
            if(a == 9 || a == 33 || b == 20 || b == 96)
            {
                gotoxy(b, a);
                printf("%c", 219);
            }
        }
    }
    setcolor(15, 0);
    gotoxy(32, 11);
    waktu_sekarang();
    gotoxy(49, 13);
    printf("S E P A K B O L A");

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 15);
    printf("Nama pembeli           : %s", nama);
    fprintf(hasil, "Nama pembeli                  : %s\n", nama);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 16);
    printf("No.Hp                  : %s", handphone);
    fprintf(hasil, "No.Hp                         : %s\n", handphone);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 17);
    printf("Usia                   : %d tahun", atoi(usia));
    fprintf(hasil, "Usia                          : %d tahun\n", atoi(usia));
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 18);
    printf("Total Sepeda United    : %d           : Rp %d", atoi(unit_sepakbola[0]), jumlah1);
    fprintf(hasil, "Total Sepeda United           : %d           : Rp %d\n", atoi(unit_sepakbola[0]), jumlah1);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 19);
    printf("Total Helm             : %d           : Rp %d", atoi(unit_sepakbola[1]), jumlah2);
    fprintf(hasil, "Total  Helm                   : %d           : Rp %d\n", atoi(unit_sepakbola[1]), jumlah2);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 20);
    printf("Total Pelindung lutut  : %d           : Rp %d", atoi(unit_sepakbola[2]), jumlah3);
    fprintf(hasil, "Total Pelindung lutut         : %d           : Rp %d\n", atoi(unit_sepakbola[2]), jumlah3);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 21);
    printf("Total Bike glives      : %d           : Rp %d", atoi(unit_sepakbola[3]), jumlah4);
    fprintf(hasil, "Total Bike glives             : %d           : Rp %d\n", atoi(unit_sepakbola[3]), jumlah4);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 22);
    printf("Total Kacamata pelindun: %d           : Rp %d", atoi(unit_sepakbola[4]), jumlah5);
    fprintf(hasil, "Total Tas Kacamata pelindung  : %d           : Rp %d\n", atoi(unit_sepakbola[4]), jumlah5);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 23);
    printf("Total Sepatu Adidas    : %d           : Rp %d", atoi(unit_sepakbola[5]), jumlah6);
    fprintf(hasil, "Total Sepatu Adidas           : %d           : Rp %d\n", atoi(unit_sepakbola[5]), jumlah6);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 24);
    printf("Total                  : %d           : Rp %d", total_u, total_j);
    fprintf(hasil, "Total                         : %d           : Rp %d\n", total_u, total_j);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 27);
    printf("Total Ongkir                         : Rp %d", total_ongkir);
    fclose(alamat);
    fprintf(hasil, "Total Ongkir                                : Rp %d\n", total_ongkir);
    fclose(hasil);

    total_keseluruhan = total_j + total_ongkir;
    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 28);
    printf("Total keseluruhan                    : Rp %d", total_keseluruhan);
    fprintf(hasil, "Total keseluruhan                           : Rp %d\n", total_keseluruhan);
    fclose(hasil);

    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(25, 29);
    printf("%s", potongan);
    fclose(alamat);
    fprintf(hasil, "Jarak dan potongan            : %s ", potongan);
    fclose(hasil);
}
void struct_member()
{
    char potongan[100];
    int total_ongkir;
    FILE*hasil;
    setcolor(15, 0);
    if(total_j <= 500000)
    {
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 25);
        printf("Potongan harga                       : Rp 0");
        fprintf(hasil, "Potongan harga                              : Rp 0\n");
        fclose(hasil);

        total_jmember = total_j;
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 26);
        printf("Total belanja                        : Rp %d", total_jmember);
        fprintf(hasil, "Total belanja                               : Rp %d\n", total_jmember);
        fclose(hasil);

    }
    else if(total_j > 500000 && total_j <= 1000000)
    {
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 25);
        printf("Potongan harga                       : Rp 20000");
        fprintf(hasil, "Potongan harga                              : Rp 20000\n");
        fclose(hasil);

        total_jmember = total_j - 20000;
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 26);
        printf("Total belanja                        : Rp %d", total_jmember);
        fprintf(hasil, "Total belanja                               : Rp %d\n", total_jmember);
        fclose(hasil);

    }
    else if(total_j > 1000000 && total_j <= 5000000)
    {
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 25);
        printf("Potongan harga                       : Rp 100000");
        fprintf(hasil, "Potongan harga                              : Rp 100000\n");
        fclose(hasil);

        total_jmember = total_j - 100000;
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 26);
        printf("Total belanja                        : Rp %d", total_jmember);
        fprintf(hasil, "Total belanja                               : Rp %d\n", total_jmember);
        fclose(hasil);

    }
    else if(total_j > 5000000 && total_j <= 10000000)
    {
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 25);
        printf("Potongan harga                       : Rp 200000");
        fprintf(hasil, "Potongan harga                              : Rp 200000\n");
        fclose(hasil);

        total_jmember = total_j - 200000;
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 26);
        printf("Total belanja                        : Rp %d", total_jmember);
    }
    else
    {
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 25);
        printf("Potongan harga                       : Rp 250000");
        fprintf(hasil, "Potongan harga                              : Rp 250000\n");
        fclose(hasil);

        total_jmember = total_j - 250000;
        hasil = fopen("./struct_sepakbola.txt", "a");
        gotoxy(32, 26);
        printf("Total belanja                        : Rp %d", total_jmember);
        fprintf(hasil, "Total belanja                               : Rp %d\n", total_jmember);
        fclose(hasil);

    }
    total_keseluruhan = total_jmember + total_ongkir;
    hasil = fopen("./struct_sepakbola.txt", "a");
    gotoxy(32, 28);
    printf("Total keseluruhan                    : Rp %d", total_keseluruhan);
    fprintf(hasil, "Total keseluruhan                           : Rp %d\n", total_keseluruhan);
    fclose(hasil);
}
void main()
{
    system ("mode con cols=120 lines=40");
    isidata1();
    isidata2();
    isidata3();
    isidata_update1();
    isidata_update2();
    isidata_update3();
    welcome();
    layar2();
    bingkai_admin();
    // tabel();
    // pilih_menu();
}