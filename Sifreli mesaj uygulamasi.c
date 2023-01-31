#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    setlocale(LC_ALL, "Turkish");

    printf("Mesaj �ifreleme Program�m�za ho� geldiniz!\nBu program ile �ifreli mesajlar g�nderebilirsiniz!\n"
           "Mesaj g�nderebilmeniz i�in sizden birka� bilgi isteyece�iz.\n\n"
           "Ancak unutmay�n, bu program g�venlik amac�yla olu�turuldu�u i�in yaln�zca 1 kez girme hakk�n�z var.\n"
           "Bu sebeple bilgileri do�ru yazd���n�zdan emin olmadan onaylamay�n�z.\n"
           "Aksi h�lde mesaj�n�z g�nderilemez.\n\n"
           "Girmeniz gereken bilgiler �unlard�r:\nAl�c�n�n ad� ve soyad�, g�nderen ki�inin T.C. kimlik numaras� ve g�ndermek istedi�iniz mesaj.\n"
           "E�er al�c�n�n birden fazla ad� varsa l�tfen sadece birini giriniz.\n"
           "Son olarak hat�rlatmalar: Yaln�zca 1000 karakter girme hakk�n�z bulunmakta ve mesaj�n�z� girerken t�rk�e karakter kullanmaman�z gerekmektedir.\n"
           "Ayr�ca mesaj�n�z� girerken bo�luk tu�u yerine l�tfen '_' i�aretini kullan�n�z.\n\n");

    printf("L�tfen mesaj g�ndermek istedi�iniz ki�inin ad�n� ve soyad�n� yaz�n�z: ");
    char alici_ad[20],alici_soyad[20];
    scanf("%s",alici_ad);
    scanf("%s",alici_soyad);
    printf("\nAl�c�n�n soyad�: %s ad�: %s\n\n",alici_ad,alici_soyad);

    long long TC_kimlik_numarasi;
    long long TC_dogrulama;
    printf("Mesaj� g�nderen ki�inin TC kimlik numaras�n� giriniz: ");
    scanf("%lld", &TC_kimlik_numarasi);
    printf("TC kimlik numaran�z: %lld", TC_kimlik_numarasi);

    printf("\n\n\n");

    char mesaj[1000];
    printf("L�tfen g�ndermek istedi�iniz mesaj� giriniz:\n\n");
    scanf("%s",mesaj);

    char soru[5];

    printf("Mesaj�n�z� girdiyseniz saklamak i�in terminali temizlemeniz gerekmektedir.\nTerminali temizlemek i�in l�tfen 'evet' yaz�n�z.\n");
    scanf("%s", soru);

    if (strcmp(soru, "evet") == 0)
    {
        system("CLS");
    }
    printf("Mesaj� g�r�nt�lemek i�in l�tfen T.C. kimlik numaran�z� giriniz:");
    scanf("%lld",&TC_dogrulama);

    if (TC_dogrulama==TC_kimlik_numarasi)
    {
        printf("\n\nMesaj�n�z: %s\n",mesaj);
    }
    else if (TC_kimlik_numarasi!=TC_dogrulama)
    {
        int i, j;
        int n = strlen(mesaj);
        for (i = 0; i < n-1; i++)
        {
            for (j = i+1; j < n; j++)
            {
                if (mesaj[i] > mesaj[j])
                {
                    char temp = mesaj[i];
                    mesaj[i] = mesaj[j];
                    mesaj[j] = temp;
                }
            }
        }
        printf("Yanl�� TC kimlik numaras� girdi�iniz i�in sadece �ifrelenmi� mesaja eri�ebilirsiniz:\n\n %s", mesaj);
    }
    getch();
    return 0;
}

/*
char a[1]="c",b[1]="d",c[1]="e",d[1]="f",e[1]="g",f[1]="h",g[1]="i",h[1]="j",i[1]="k",j[1]="l",k[1]="m",l[1]="n",
        m[1]="o",n[1]="p",o[1]="r",p[1]="s",r[1]="t",s[1]="u",t[1]="v",u[1]="y",v[1]="z",y[1]="a",z[1]="b",w[1]="x",x[1]="q",q[1]="w";
int sayi0=8,sayi1=9,sayi2=0,sayi3=1,sayi4=2,sayi5=3,sayi6=4,sayi7=5,sayi8=6,sayi9=7;
 */

