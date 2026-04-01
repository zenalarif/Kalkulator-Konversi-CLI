#include <stdio.h>

// deklarasi fungsi
void konversi_suhu();
void konversi_jarak();
void konversi_berat();
void konversi_waktu();

int main() {
    int pilih;

    do {
        printf("\n=====================================\n");
        printf("   KALKULATOR KONVERSI SATUAN CLI\n");
        printf("=====================================\n");
        printf("1. Konversi Suhu\n");
        printf("2. Konversi Jarak\n");
        printf("3. Konversi Berat\n");
        printf("4. Konversi Waktu\n");
        printf("0. Keluar\n");
        printf("=====================================\n");
        printf("Pilih menu: ");
        scanf("%d", &pilih);

        switch(pilih) {
            case 1: konversi_suhu();
            case 2: konversi_jarak(); break;
            case 3: konversi_berat(); break;
            case 4: konversi_waktu(); break;
            case 0:
                printf("\nTerima kasih sudah menggunakan program!\n");
                break;
            default:
                printf("\nPilihan tidak valid!\n");
        }

    } while(pilih != 0);

    return 0;
}

// ==============================
// FUNGSI-FUNGSI
// ==============================

// Fungsi untuk konversi suhu




// vexana gerry








// Fungsi untuk konversi jarak
void konversi_jarak(){
    float input;
    printf("\n---Konversi Jarak---\n");
    printf("Masukkan kilometer: ");
    scanf("%f", &input);

    printf("Meter : %.2f\n", input*1000);
    printf("Centimeter : %.2f\n", input*10000);
}


// Fungsi untuk konversi berat
void konversi_berat() {
    float input;
    printf("\n-- KONVERSI BERAT --\n");
    printf("Masukan Kilogram: ");
    scanf("%f", &input);

    printf("Gram : %.2f\n", input*1000);
    printf("pons : %.2f\n", input*10);
}

// Fungsi untuk konversi waktu
void konversi_waktu() {
    float input;
    printf("\n--- KONVERSI WAKTU ---\n");
    printf("Masukkan Jam: ");
    scanf("%f", &input);

    printf("Menit : %.2f\n", input * 60);
    printf("Detik : %.2f\n", input * 3600);
}

//Fungsi untuk konversi suhu
void konversi_suhu() {
    float input;
    printf("\n--- Konversi Suhu ---\n");
    printf("Masukkan Celsius: ");
    scanf("%f", &input);

    printf("Fahrenheit : %.2f\n", (input * 9/5) + 32);
    printf("Kelvin     : %.2f\n", input + 273.15);
}




