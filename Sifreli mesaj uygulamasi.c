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

    printf("Mesaj Þifreleme Programýmýza hoþ geldiniz!\nBu program ile þifreli mesajlar gönderebilirsiniz!\n"
           "Mesaj gönderebilmeniz için sizden birkaç bilgi isteyeceðiz.\n\n"
           "Ancak unutmayýn, bu program güvenlik amacýyla oluþturulduðu için yalnýzca 1 kez girme hakkýnýz var.\n"
           "Bu sebeple bilgileri doðru yazdýðýnýzdan emin olmadan onaylamayýnýz.\n"
           "Aksi hâlde mesajýnýz gönderilemez.\n\n"
           "Girmeniz gereken bilgiler þunlardýr:\nAlýcýnýn adý ve soyadý, gönderen kiþinin T.C. kimlik numarasý ve göndermek istediðiniz mesaj.\n"
           "Eðer alýcýnýn birden fazla adý varsa lütfen sadece birini giriniz.\n"
           "Son olarak hatýrlatmalar: Yalnýzca 1000 karakter girme hakkýnýz bulunmakta ve mesajýnýzý girerken türkçe karakter kullanmamanýz gerekmektedir.\n"
           "Ayrýca mesajýnýzý girerken boþluk tuþu yerine lütfen '_' iþaretini kullanýnýz.\n\n");

    printf("Lütfen mesaj göndermek istediðiniz kiþinin adýný ve soyadýný yazýnýz: ");
    char alici_ad[20],alici_soyad[20];
    scanf("%s",alici_ad);
    scanf("%s",alici_soyad);
    printf("\nAlýcýnýn soyadý: %s adý: %s\n\n",alici_ad,alici_soyad);

    long long TC_kimlik_numarasi;
    long long TC_dogrulama;
    printf("Mesajý gönderen kiþinin TC kimlik numarasýný giriniz: ");
    scanf("%lld", &TC_kimlik_numarasi);
    printf("TC kimlik numaranýz: %lld", TC_kimlik_numarasi);

    printf("\n\n\n");

    char mesaj[1000];
    printf("Lütfen göndermek istediðiniz mesajý giriniz:\n\n");
    scanf("%s",mesaj);

    char soru[5];

    printf("Mesajýnýzý girdiyseniz saklamak için terminali temizlemeniz gerekmektedir.\nTerminali temizlemek için lütfen 'evet' yazýnýz.\n");
    scanf("%s", soru);

    if (strcmp(soru, "evet") == 0)
    {
        system("CLS");
    }
    printf("Mesajý görüntülemek için lütfen T.C. kimlik numaranýzý giriniz:");
    scanf("%lld",&TC_dogrulama);

    if (TC_dogrulama==TC_kimlik_numarasi)
    {
        printf("\n\nMesajýnýz: %s\n",mesaj);
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
        printf("Yanlýþ TC kimlik numarasý girdiðiniz için sadece þifrelenmiþ mesaja eriþebilirsiniz:\n\n %s", mesaj);
    }
    getch();
    return 0;
}

/*
char a[1]="c",b[1]="d",c[1]="e",d[1]="f",e[1]="g",f[1]="h",g[1]="i",h[1]="j",i[1]="k",j[1]="l",k[1]="m",l[1]="n",
        m[1]="o",n[1]="p",o[1]="r",p[1]="s",r[1]="t",s[1]="u",t[1]="v",u[1]="y",v[1]="z",y[1]="a",z[1]="b",w[1]="x",x[1]="q",q[1]="w";
int sayi0=8,sayi1=9,sayi2=0,sayi3=1,sayi4=2,sayi5=3,sayi6=4,sayi7=5,sayi8=6,sayi9=7;
 */

