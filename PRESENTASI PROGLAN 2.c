#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50
int tagihan3[MAX];
int akhir = - 1;
int awal = - 1;
int tagihan1[MAX];
int rear = - 1;
int front = - 1;
int tagihan2[MAX];
int belakang = - 1;
int depan = - 1;


int main()
{
	int menu;
	
	printf("\t\t=========================================\n");
	printf("\t\t|      ALAT PENGUKURAN LISTRIK v1.0     |\n");
	printf("\t\t=========================================\n");
	printf("\t\t| 1. Perhitungan biaya                  |\n");
	printf("\t\t| 2. Perhitungan biaya subsidi          |\n");
	printf("\t\t| 3. Daftar biaya listrik               |\n");
	printf("\t\t| 4. Perhitungan biaya alat per bulan   |\n");
	printf("\t\t| 5. Pengecekan tagihan                 |\n");
	printf("\t\t| 99.Keluar program                     |\n");
	printf("\t\t=========================================\n");
	printf("\t\t *biaya perhitungan berdasarkan april'18\n\n");
	
	printf("Pilihan Menu : ");
	scanf("%d", &menu);
	
	if(menu==1)
		{
			system("cls");
			biaya();
		}
	else if(menu==2)
		{
			system("cls");
			biayasub();
		}
	else if(menu==3)
		{
			system("cls");
			daftar();
		}
	else if(menu==4)
		{
			system("cls");
			alat();
		}
	else if(menu==5)
		{
			system("cls");
			tagihan();
		}
	else if(menu==99)
		{
			system("cls");
			printf("\t\t=============================================\n");
			printf("\t\t|  TERIMA KASIH TELAH MENGGUNAKAN ALAT INI  |\n");
			printf("\t\t=============================================\n");
			return 0;
		}
	else
		{
			system("cls");
			printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
			printf("Press any key to continue...");
			getch();
			system("cls");
			main();	
		}
}

int tagihan()
{
	int nomortagih;
	printf("\t\t=============================================\n");
	printf("\t\t|    Mohon Masukkan nomor pengguna anda     |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| 1. User 1                                 |\n");
	printf("\t\t| 2. User 2                                 |\n");
	printf("\t\t| 3. User 3                                 |\n");
	printf("\t\t| 99.Kembali ke menu awal                   |\n");
	printf("\t\t=============================================\n\n");
	printf("Pilihan menu : ");
	scanf("%d", &nomortagih);
	
	if(nomortagih==1)
	{
		system("cls");
		user1();
	}
	else if(nomortagih==2)
	{
		system("cls");
		user2();
	}
	else if(nomortagih==3)
	{
		system("cls");
		user3();
	}
	else if(nomortagih==99)
	{
		system("cls");
		main();
	}
	else
	{
		system("cls");
		printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
		printf("Press any key to continue...");
		getch();
		system("cls");
		tagihan();
	}
}

user1()
{
    int choice;
    while (1)
    {
        printf("\t\t===================================\n");
    	printf("\t\t| MENU TAGIHAN PENGGUNA 1         |\n");
    	printf("\t\t===================================\n");
        printf("\t\t| 1.Memasukkan Tagihan listrik    |\n");
        printf("\t\t| 2.Menghapus Tagihan listrik     |\n");
        printf("\t\t| 3.Menampilkan tagihan listrik   |\n");
        printf("\t\t| 4.Kembali ke menu tagihan       |\n");
        printf("\t\t===================================\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        if(choice==1)
        {
            system("cls");
            insert1();
    	}
        else if(choice==2)
    	{
		    system("cls");
            delete1();
            break;
        }
        else if(choice==3)
        {
		    system("cls");
            display1();
            break;
        }
        else if(choice==4)
        {
		    system("cls");
            tagihan();
    	}
        else
        {
		    system("cls");
			printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
			printf("Press any key to continue...");
			getch();
			system("cls");
			user1();
        } 
    } 
} 

insert1()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Mohon memasukkan besar tagihan listrik anda : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        tagihan1[rear] = add_item;
    }
    system("cls");
    user1();
}
 
delete1()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Tagihan yang dihapus adalah : %d\n", tagihan1[front]);
        front = front + 1;
    }
    system("cls");
    user1();
} 

display1()
{
    int i;
    int a=0;
    if (front == - 1)
        printf("Tagihan anda kosong! \n");
    else
    {
        printf("Tagihan anda : \n");
        for (i = front; i <= rear; i++)
        {
    	printf("Rp.%d\n", tagihan1[i]);
    	}
    	printf("\n");
    	for (i = front-1; i <= rear; i++)
    	a += tagihan1[i];
        
    }
    	 printf("Jumlah tagihan anda : Rp.%d", a);
   		 printf("\n\nPress Enter to Continue");
		getch();
    system("cls");
	user1();
}

user2()
{
    int choice;
    while (1)
    {
        printf("\t\t===================================\n");
    	printf("\t\t| MENU TAGIHAN PENGGUNA 2         |\n");
    	printf("\t\t===================================\n");
        printf("\t\t| 1.Memasukkan Tagihan listrik    |\n");
        printf("\t\t| 2.Menghapus Tagihan listrik     |\n");
        printf("\t\t| 3.Menampilkan tagihan listrik   |\n");
        printf("\t\t| 4.Kembali ke menu tagihan       |\n");
        printf("\t\t===================================\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        if(choice==1)
        {
            system("cls");
            insert2();
    	}
        else if(choice==2)
    	{
		    system("cls");
            delete2();
            break;
        }
        else if(choice==3)
        {
		    system("cls");
            display2();
            break;
        }
        else if(choice==4)
        {
		    system("cls");
            tagihan();
    	}
        else
        {
		    system("cls");
			printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
			printf("Press any key to continue...");
			getch();
			system("cls");
			user2();
        } 
    } 
} 

insert2()
{
    int add_item;
    if (belakang == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (depan == - 1)
        depan = 0;
        printf("Mohon memasukkan besar tagihan listrik anda : ");
        scanf("%d", &add_item);
        belakang = belakang + 1;
        tagihan1[belakang] = add_item;
    }
    system("cls");
    user2();
}
 
delete2()
{
    if (depan == - 1 || depan > belakang)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Tagihan yang dihapus adalah : %d\n", tagihan1[depan]);
        depan = depan + 1;
    }
    system("cls");
    user2();
} 

display2()
{
    int i;
    int a=0;
    if (depan == - 1)
        printf("Tagihan anda kosong! \n");
    else
    {
        printf("Tagihan anda : \n");
        for (i = depan; i <= belakang; i++)
        {
    	printf("Rp.%d\n", tagihan1[i]);
    	}
    	printf("\n");
    	for (i = depan-1; i <= belakang; i++)
    	a += tagihan1[i];
        
    }
    	 printf("Jumlah tagihan anda : Rp.%d", a);
   		 printf("\n\nPress Enter to Continue");
		getch();
    system("cls");
	user2();
}

user3()
{
    int choice;
    while (1)
    {
        printf("\t\t===================================\n");
    	printf("\t\t| MENU TAGIHAN PENGGUNA 3         |\n");
    	printf("\t\t===================================\n");
        printf("\t\t| 1.Memasukkan Tagihan listrik    |\n");
        printf("\t\t| 2.Menghapus Tagihan listrik     |\n");
        printf("\t\t| 3.Menampilkan tagihan listrik   |\n");
        printf("\t\t| 4.Kembali ke menu tagihan       |\n");
        printf("\t\t===================================\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        if(choice==1)
        {
            system("cls");
            insert3();
    	}
        else if(choice==2)
    	{
		    system("cls");
            delete3();
            break;
        }
        else if(choice==3)
        {
		    system("cls");
            display3();
            break;
        }
        else if(choice==4)
        {
		    system("cls");
            tagihan();
    	}
        else
        {
		    system("cls");
			printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
			printf("Press any key to continue...");
			getch();
			system("cls");
			user3();
        } 
    } 
} 

insert3()
{
    int add_item;
    if (akhir == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (awal == - 1)
        awal = 0;
        printf("Mohon memasukkan besar tagihan listrik anda : ");
        scanf("%d", &add_item);
        akhir = akhir + 1;
        tagihan1[akhir] = add_item;
    }
    system("cls");
    user3();
}
 
delete3()
{
    if (awal == - 1 || awal > akhir)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Tagihan yang dihapus adalah : %d\n", tagihan1[awal]);
        awal = awal + 1;
    }
    system("cls");
    user3();
} 

display3()
{
    int i;
    int a=0;
    if (awal == - 1)
        printf("Tagihan anda kosong! \n");
    else
    {
        printf("Tagihan anda : \n");
        for (i = awal; i <= akhir; i++)
        {
    	printf("Rp.%d\n", tagihan1[i]);
    	}
    	printf("\n");
    	for (i = awal-1; i <= akhir; i++)
    	a += tagihan1[i];
        
    }
    	 printf("Jumlah tagihan anda : Rp.%d", a);
   		 printf("\n\nPress Enter to Continue");
		getch();
    system("cls");
	user3();
}

int biaya()
{
	int menubiaya, kwh;
	
	printf("\t\t=============================================\n");
	printf("\t\t|   Mohon Masukkan golongan listrik anda    |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| 1. 900 VA                                 |\n");
	printf("\t\t| 2. >1300 VA                               |\n");
	printf("\t\t| 99.Kembali ke menu awal                   |\n");
	printf("\t\t=============================================\n\n");
	
	printf("Pilihan Menu : ");
	scanf("%d", &menubiaya);
	
	if(menubiaya==1)
		{
			printf("\n\nMohon masukkan listrik yang digunakan per Kwh : ");
			scanf("%d", &kwh);
			printf("\nBESAR BIAYA LISTRIK ANDA ADALAH : ");
			printf("Rp.%d,-", kwh*1352);
			printf("\n\nPress any key to continue...");
			getch();
			system("cls");
			ulang();
		}
	else if(menubiaya==2)
		{
			printf("\n\nMohon masukkan listrik yang digunakan per Kwh : ");
			scanf("%d", &kwh);
			printf("\nBESAR BIAYA LISTRIK ANDA ADALAH : ");
			printf("Rp.%d,-", kwh*1467);
			printf("\n\nPress any key to continue...");
			getch();
			system("cls");
			ulang();
		}
	else if(menubiaya==99)
		{
			system("cls");
			main();
		}
	else
		{
			system("cls");
			printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
			printf("Press any key to continue...");
			getch();
			system("cls");
			biaya();
		}
}

int biayasub()
{
	int menusub, kwhsub;
	
	printf("\t\t=============================================\n");
	printf("\t\t|   Mohon Masukkan golongan listrik anda    |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| 1. 450 VA                                 |\n");
	printf("\t\t| 2. 900 VA                                 |\n");
	printf("\t\t| 99.Kembali ke menu awal                   |\n");
	printf("\t\t=============================================\n\n");
	
	printf("Pilihan Menu : ");
	scanf("%d", &menusub);
	
	if(menusub==1)
		{
			printf("\n\nMohon masukkan listrik yang digunakan per Kwh : ");
			scanf("%d", &kwhsub);
			printf("\nBESAR BIAYA LISTRIK ANDA ADALAH : ");
			printf("Rp.%d,-", kwhsub*415);
			printf("\n\nPress any key to continue...");
			getch();
			system("cls");
			ulang();
		}
	else if(menusub==2)
		{
			printf("\n\nMohon masukkan listrik yang digunakan per Kwh : ");
			scanf("%d", &kwhsub);
			printf("\nBESAR BIAYA LISTRIK ANDA ADALAH : ");
			printf("Rp.%d,-", kwhsub*568);
			printf("\n\nPress any key to continue...");
			getch();
			system("cls");
			ulang();
		}
	else if(menusub==99)
		{
			system("cls");
			main();
		}
	else
		{
			system("cls");
			printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
			printf("Press any key to continue...");
			getch();
			system("cls");
			biayasub();
		}
}

int daftar()
{
	int menudaftar;
	
	printf("\t\t=============================================\n");
	printf("\t\t|           DAFTAR BIAYA LISTRIK            |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| SUBSIDI                                   |\n");
	printf("\t\t|  450 VA = Rp.415,- per Kwh                |\n");
	printf("\t\t|  900 VA = Rp.568,- pew Kwh                |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| NON SUBSIDI                               |\n");
	printf("\t\t|  900 VA = Rp.1352,- per Kwh               |\n");
	printf("\t\t|  >1300 VA = Rp.1467,- per Kwh             |\n");
	printf("\t\t=============================================\n");
	
		printf("\nPress any key to continue...");
		getch();
		system("cls");
		main();
}

struct daftarbiaya
{
	int Jenis;
	int Jumlah;
	float lama;
	float Biaya;
	struct daftarbiaya *next;
 };

 
 float convert(int tipe,int howmuch, float jam);
 
struct daftarbiaya *head = NULL;
struct daftarbiaya *current = NULL;
void printList();

void printList() {
   struct daftarbiaya *ptr = head;
   while(ptr != NULL)
   		{
   		printf("%d\t%d Buah\t%.2f jam\tRp.%.2f\n", ptr->Jenis, ptr->Jumlah, ptr->lama, ptr->Biaya);

   		ptr =ptr->next;
   		}
	}


void insert(int Jenis,int Jumlah, int lama) {
	
   struct daftarbiaya*link = (struct daftarbiaya*) malloc(sizeof(struct daftarbiaya));
	
  	link->Jenis = Jenis;
  	link->Jumlah = Jumlah;
  	link->lama= lama; 
	link->Biaya = convert(link->Jenis,link->Jumlah, link->lama);
   
   link->next = head;
	
   head = link;
}

int alat()
{
	int banyakalat;
	int i;
	int nomoralat; 
	float howlong;
	int banyak;
	
	printf("\t\t=============================================\n");
	printf("\t\t|         WATTAGE ALAT ALAT LISTRIK         |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| 1. Kulkas   = 125 Watt                    |\n");
	printf("\t\t| 2. AC       = 736 Watt                    |\n");
	printf("\t\t| 3. Komputer = 260 Watt                    |\n");
	printf("\t\t| 4. TV       = 120 Watt                    |\n");
	printf("\t\t| 5. Lampu    = 12  Watt                    |\n");
	printf("\t\t=============================================\n\n\n");
	
	printf("Berapa banyak jenis alat listrik yang anda pakai : ");
	scanf("%d", &banyakalat);
	
	printf("Mohon masukkan jenis alat(nomornya), jumlah alatnya, dan lama dipakainya dalam sehari :\n");
	printf("Contoh : 1(jenis alat)   1(jumlah alat)   1(lama dipakai dalam jam)\n");
	for(i=0;i<banyakalat;i++)
	{
		scanf("%d %d %f", &nomoralat, &banyak, &howlong);
		insert(nomoralat,banyak, howlong);
	}
	
	printList();
	return 0;
	printf("Press any key to continue");
	getch();
	system("cls");
	ulang();
}

float convert(int tipe, int howmuch, float jam)
{
	float totalbiaya;
	
	if(tipe==1)
	{
		totalbiaya = jam*howmuch*125*30/1000*1352;
		return totalbiaya;
	}
	else if(tipe==2)
	{
		totalbiaya = jam*howmuch*736*30/1000*1352;
		return totalbiaya;
	}
	else if(tipe==3)
	{
		totalbiaya = jam*260*howmuch*30/1000*1352;
		return totalbiaya;
	}	
	else if(tipe==4)
	{
		totalbiaya = jam*120*howmuch*30/1000*1352;
		return totalbiaya;
	}	
	else if(tipe==5)
	{
		totalbiaya = jam*12*howmuch*30/1000*1352;
		return totalbiaya;
	}
	else
	{
		printf("jenis alat yang anda masukkan salah!");
	}
		
}

int ulang()
{
	int menuulang;
	
	printf("\t\t=============================================\n");
	printf("\t\t|  Apakah anda ingin kembali ke menu awal?  |\n");
	printf("\t\t=============================================\n");
	printf("\t\t| 1. Ya                                     |\n");
	printf("\t\t| 99.Tidak                                  |\n");
	printf("\t\t=============================================\n\n");
	printf("Pilihan Menu : ");
	scanf("%d", &menuulang);
	
		if(menuulang==1)
			{
				system("cls");
				main();
			}
		else if(menuulang==99)
			{
				system("cls");
				printf("\t\t=============================================\n");
				printf("\t\t|  TERIMA KASIH TELAH MENGGUNAKAN ALAT INI  |\n");
				printf("\t\t=============================================\n");
				return 0;
			}
		else
			{
				system("cls");
				printf("\nMenu yang anda masukkan salah, mohon coba lagi\n");
				printf("Press any key to continue...");
				getch();
				system("cls");
				ulang();		
			}
	
}
