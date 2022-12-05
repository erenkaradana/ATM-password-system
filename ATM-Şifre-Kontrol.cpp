#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	
		printf("Bildigilendirme --> sifre 'math'\n\n\n ");
	int sayac=2;
	char input[10];
	int i; 
	
	char sifre[10]="math";
	giris:
	printf("Sifrenizi giriniz --> ");
	gets(input);

	if(strcmp(sifre,input)==0){
		printf("Sifre dogru girildi.\n");
	}
	else if(strcmp(sifre,input)==1){
		
		while(sayac!=0){
		printf("Sifre yanlis. Tekrar deneyiniz \n");
		sayac--;
		goto giris;
			
		}
			if(sayac==0){
			printf("Sifre deneme hakkiniz doldu.");
			return 0;
			}
		
	}
	getch();
	return 0;
	 
} 
