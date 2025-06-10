#include <stdio.h>
#include <stdlib.h>

int main() {
    int sifre, girilen_sifre, secim;
    float bakiye = 0;
    float miktar;

    sifre = 1234;
    
    printf("Hosgeldiniz\n");
    printf("Lutfen sifrenizi girin: ");
    scanf("%d", &girilen_sifre);

    if (girilen_sifre != sifre) {
        printf("Hatalı Sifre!\n");
        return 1;
    }

    do {
        printf("\nIslemler:\n");
        printf("1. Bakiye Goruntule\n");
        printf("2. Para Yatir\n");
        printf("3. Para Cek\n");
        printf("4. Cikis\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Mevcut Bakiyeniz: %.2f TL\n", bakiye);
                break;

            case 2:
                printf("Yatirmak istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > 0) {
                    bakiye += miktar;
                    printf("Yeni Bakiyeniz: %.2f TL\n", bakiye);
                } else {
                    printf("Gecersiz miktar!\n");
                }
                break;

            case 3:
                printf("Cekmek istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > 0 && miktar <= bakiye) {
                    bakiye -= miktar;
                    printf("Yeni Bakiyeniz: %.2f TL\n", bakiye);
                } else {
                    printf("Yetersiz bakiye veya gecersiz miktar!\n");
                }
                break;

            case 4:
                printf("Cikis yapiliyor.\n");
                break;

            default:
                printf("Gecersiz secim!\n");
        }

    } while (secim != 4);

    return 0;
}
