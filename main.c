#include <stdio.h>

// deklarasi fungsi
void konversi_suhu();
void konversi_jarak();
void konversi_berat();
void konversi_waktu();
void celcius();
void farenheit();
void kelvin();

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








// Fungsi untuk konversi jarak
void konversi_jarak(){
    float input;
    printf("\n--- Konversi Jarak ---\n");
    printf("Masukkan Kilometer: ");
    scanf("%f", &input);

    printf("Meter      : %.2f\n", input * 1000);
    printf("Centimeter : %.2f\n", input * 100000);
}

// Fungsi untuk konversi berat
void konversi_berat() {
    float input;
<<<<<<< HEAD
    printf("\n-- KONVERSI BERAT --\n");
    printf("Masukan Kilogram: ");
=======
    printf("\n--- KONVERSI BERAT ---\n");
    printf("Masukkan Kilogram: ");
>>>>>>> ae19efc6c053ab4d828af20e613fc0fc56a3f5d8
    scanf("%f", &input);

    printf("Gram : %.2f\n", input * 1000);
    printf("Pons : %.2f\n", input * 10);
}

// Fungsi untuk konversi waktu
void konversi_waktu() {
    float input;
    printf("\n--- KONVERSI WAKTU ---\n");
    printf("Masukkan Jam: ");
    scanf("%f", &input);

    printf("Menit : %.2f\n", input * 60);
    printf("Detik : %.2f\n", input * 3600);
<<<<<<< HEAD
}

//Fungsi untuk konversi suhu
void konversi_suhu(){
    int inputpilihan1;
    printf("\n-- KONVERSI SUHU--\n");
    printf ("1. Celcius\n2. Farenheit\n3. Kelvin");
    printf ("Pilihan: ");
    switch (inputpilihan1)
    {
    case 1: celcius(); break;
    case 2: farenheit(); break;
    case 3: kelvin(); break;
    
    default:
    printf("\nPilihan tidak valid!\n");
        break;
    }
}

void celcius(){
    int besarSuhu=0;
    int pilihanSuhu;
    printf("\n-- Berapa besar suhu? --\n");
    printf ("Celcius: ");
    scanf("%f", &besarSuhu);
    printf("\n-- Konversi suhu ke? --\n");
    printf ("1. Farenheit\n2. Kelvin");
    printf ("Pilihan: ");
    scanf("%f", &pilihanSuhu);
    switch (pilihanSuhu)
    {
    case 1: printf ("Farenheit: %d", besarSuhu=(besarSuhu*9)/5 + 32); break;
    case 2: printf ("Kelvin: %d", besarSuhu+273.15 ); break;
            default:
                printf("\nPilihan tidak valid!\n");
        }
    }
void farenheit(){
    int besarSuhu=0;
    int pilihanSuhu;
    printf("\n-- Berapa besar suhu? --\n");
    printf ("Farenheit: ");
    scanf("%f", &besarSuhu);
    printf("\n-- Konversi suhu ke? --\n");
    printf ("1. Celcius\n2. Kelvin");
    printf ("Pilihan: ");
    scanf("%f", &pilihanSuhu);
    switch (pilihanSuhu)
    {
    case 1: printf ("Celcius: %d", besarSuhu=(besarSuhu*5)/9-32); break;
    case 2: printf ("Kelvin: %d", besarSuhu=(((besarSuhu-32)*5)/9)+273.15 ); break;
            default:
                printf("\nPilihan tidak valid!\n");
        }
    }

    void kelvin(){
    int besarSuhu=0;
    int pilihanSuhu;
    printf("\n-- Berapa besar suhu? --\n");
    printf ("Kelvin: ");
    scanf("%f", &besarSuhu);
    printf("\n-- Konversi suhu ke? --\n");
    printf ("1. Farenheit\n2. Celcius");
    printf ("Pilihan: ");
    scanf("%f", &pilihanSuhu);
    switch (pilihanSuhu)
    {
    case 1: printf ("Celcius: %d", besarSuhu=besarSuhu-273.15); break;
    case 2: printf ("Farenheit: %d", besarSuhu=(((besarSuhu-273.15)*9)/5)+32); break;
            default:
                printf("\nPilihan tidak valid!\n");
        }
    }




=======
}
>>>>>>> ae19efc6c053ab4d828af20e613fc0fc56a3f5d8
