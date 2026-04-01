#include <stdio.h>

int main() {
    printf("=== KALKULATOR KONVERSI ===\n");
    printf("===============================");
    
    return 0;

    #include <stdio.h>

 // menambah fitur mengubah ke menit dan detik
{
    int pilihan;
    float jam;

    do {
        printf("\n=== KALKULATOR KONVERSI WAKTU ===\n");
        printf("1. Konversi Jam ke Menit\n");
        printf("2. Konversi Jam ke Detik\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("\nMasukkan jumlah jam: ");
                scanf("%f", &jam);
                printf("Hasil: %.2f jam = %.2f menit\n", jam, jam * 60);
                break;

            case 2:
                printf("\nMasukkan jumlah jam: ");
                scanf("%f", &jam);
                printf("Hasil: %.2f jam = %.2f detik\n", jam, jam * 3600);
                break;

            case 3:
                printf("\nTerima kasih! Program selesai.\n");
                break;

            default:
                printf("\nPilihan tidak valid! Coba lagi.\n");
        }

    } while(pilihan != 3);

    return 0;
}
}
