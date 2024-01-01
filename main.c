#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// �sim : Bayram Bar�� G�k
// Numara : 23219056

// SAB�T
float pi = 3.14;
//Fonksiyon
double metreyiInceCevir(double metre);


int main() {
    int ekle = 1;
    float sayi1, sayi2, us_alma, kare_kok, dairenin_alani, vucut_kitle_indeksi, ortalama,hiz;
    char op;
    double metre;
    do {
        printf("BILIMSEL HESAP MAKINESI \n");
        printf(" Lutfen Toplama '+' / Cikarma '-' / Bolme '/' / Carpma '*' / Metreyi inche cevirme 'm' / \n");
        printf(" Us Alma 'u' / Karekok Alma 'k' / Dairenin alani 'd'/ \n");
        printf("Vucut - Kitle indeksi hesaplama 'v'  operatorlerinden birini seciniz.\n");
        scanf_s(" %c", &op);

        switch (op) {
        case '+':
            // ... Toplama i�lemi
            printf("Lutfen iki sayi griniz.\n");
            scanf_s("%f %f", &sayi1, &sayi2);
            printf("Iki sayi toplandi.\n");
            printf("%.2f + %.2f = %.2f\n", sayi1, sayi2, sayi1 + sayi2);
            break;
        case '-':
            // ... ��karma i�lemi
            printf("Lutfen iki sayi griniz.\n");
            scanf_s("%f %f", &sayi1, &sayi2);
            printf("Iki sayinin farki bulundu.\n");
            printf("%.2f - %.2f = %.2f\n", sayi1, sayi2, sayi1 - sayi2);
            break;
        case '/':
            // ... B�lme i�lemi
            printf("Lutfen iki sayi giriniz.\n");
            scanf_s("%f %f", &sayi1, &sayi2);
            printf("Iki sayi bolundu.\n");
            if (sayi2 != 0)
                printf("%.2f / %.2f = %.2f\n", sayi1, sayi2, sayi1 / sayi2);
            else
                printf("Tanimsiz.");

            break;
        case '*':
            // ... �arpma i�lemi
            printf("Lutfen iki sayi griniz.\n");
            scanf_s("%f %f", &sayi1, &sayi2);
            printf(" Iki sayi carpildi.\n");
            printf("%.2f * %.2f = %.2f \n", sayi1, sayi2, sayi1 * sayi2);
            break;
        case 'u':
            // ... �s alma i�lemi
            printf("Birinci sayi taban, ikinci sayi ust olucak sekilde sayilari giriniz.\n");
            scanf_s("%f %f", &sayi1, &sayi2);
            printf(" Ust alma islemi yapidi.\n");
            us_alma = pow(sayi1, sayi2);
            printf("\n%.2f^%.2f = %.2f\n", sayi1, sayi2, us_alma);
            break;
        case 'k':
            // ... Karek�k alma i�lemi
            printf("Lutfen karekokunu almak istediginiz sayiyi giriniz.\n");
            scanf_s("%f", &sayi1);
            printf("Karekok alma islemi yapildi.\n");
            kare_kok = sqrt(sayi1);
            printf("%.2f sayisinin karekoku %.2f sayisina esittir.\n", sayi1, kare_kok);
            break;
        case 'd':
            // ... Dairenin alan� hesaplama
            printf("Lutfen dairenin yaricapini giriniz.\n");
            scanf_s("%f", &sayi1);
            printf("Dairenin alani hesaplandi\n.");
            dairenin_alani = pi * sayi1 * sayi1;
            printf("%.2f\n", dairenin_alani);
            break;
        case 'v':
            // ... V�cut Kitle �ndeksi hesaplama
            printf("Lutfen sirasiyla kilonuzu (kg) cinsinden ve boyunuzu(m) cinsinden giriniz.\n");
            scanf_s("%f  %f", &sayi1, &sayi2);
            printf("Vucut - Kitle indeksinizin sonucu belli oldu.\n");


            vucut_kitle_indeksi = sayi1 / (sayi2 * sayi2);


            printf("Vucut Kitle Indeksi (VKI): %.2f\n", vucut_kitle_indeksi);


            if (vucut_kitle_indeksi < 18.5) {
                printf("Durum: Zayif\n");
            }
            else if (vucut_kitle_indeksi >= 18.5 && vucut_kitle_indeksi < 25) {
                printf("Durum: Normal\n");
            }
            else if (vucut_kitle_indeksi >= 25 && vucut_kitle_indeksi < 30) {
                printf("Durum: Kilolu\n");
            }
            else {
                printf("Durum: Obez\n");
            }
            break;
        case 'm':
        {
            // Metreyi in�e �evir ve sonucu ekrana yazd�r
            printf("Metreyi girin: ");
            scanf_s("%lf", &metre);

            
            double inch = metreyiInceCevir(metre);
            printf("%.2f metre, %.2f ince esittir.\n", metre, inch);

        }
        break;
        case 'h':
            printf("Lutfen sirasiyla aracinizin alinan yolu ve aracinizin hizini giriniz.\n ");
            scanf_s("%f %f", &sayi1, &sayi2);
            hiz = sayi1 / sayi2;
            printf("Aracinizin hizi = %.2f", hiz);
        default:
            printf("Ge�ersiz operator girdiniz. Tekrar deneyin.\n");
        }

        printf("Baska bir islem yapmak istiyor musunuz? (1: Evet / 0: Hayir): ");
        scanf_s("%d", &ekle);

    } while (ekle);

    return 0;
}




// Metreyi in�e �eviren fonksiyon
double metreyiInceCevir(double metre) {
    const double METRE_TO_INCHE = 39.3701; // 1 metre = 39.3701 in�

    return metre * METRE_TO_INCHE;
}

