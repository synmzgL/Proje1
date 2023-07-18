#include <stdio.h>
#include <stdlib.h>

//2 yildiz 75
//3 yildiz 100
//(ayný odadan 2 kisi faydalanabilir ama yemek hizmeti ek ücrete tabidir)
//kahvalti 15
//yemek 35
//musteri struct olsun adi,soyad,kahvalti,yemek,otel,kisi olsun icinde
//5 musteri tanimla
//2 yildizli oteli secen musterilerin adi basan fonks.
//kahvalti edenleri sayan fonks.
//musterinin odeyecegi fiyati bulan fonks.
//2 yildizli otelde kalanlarin adini,soyadini,kahvalti sayisini,odeyecegi ucreti basan c programi

struct musteri{
		char ad[15];
		char soyad[15];
		int kahvalti;
		int yemek;
		int otel;
		int kisi;
	};



void kahvaltisay(struct musteri k[4])
{
	int i,sayac=0;
	for(i=0;i<4;i++)
	{
		if(k[i].kahvalti==1)
		{
			printf("%s %s",k[i].ad,k[i].soyad);
			sayac++;
		}
	}
	printf(" %d kisi kahvalti ediyor\n",sayac);
}

void hesap(struct musteri j)
{
	int yildiz;
	int ucret=0;
	
		//kahvalti ucreti
		if(j.kahvalti==1)
		{
			ucret+=15;
		}
		if(j.yemek==1)
		{
			ucret+=35;
		}
		if(j.otel==1)
		{
			printf("kac yildiz(2 & 3): ");
			scanf("%d",&yildiz);
			if(yildiz==2)
			{
				ucret+=75;
			}
			else
			{
				ucret+=100;
			}
		}
		if(j.kisi==2)
		{
			int a;
			printf("2.kisi yemek(evet için-> 1):");
			scanf("%d",&a);
			if(a==1)
			{
				ucret+=35;
			}
		}
		if(yildiz==2)
		{
			printf("%s %s %d\n",j.ad,j.soyad,ucret);
		}
		yildiz=0;
}

int main() {
	struct musteri m[4]={{"sayeste","synmzgl",0,1,1,2},{"ali","ne",0,0,0,1},{"ayse","can",1,0,1,2},{"gül","nur",0,1,0,1}};
	int i=0;
	
	kahvaltisay(m);
	
	for(i=0;i<4;i++)
	{
		hesap(m[i]);	
	}
	
	
	return 0;
}
