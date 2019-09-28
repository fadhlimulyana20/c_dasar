#include <stdio.h>
#include <math.h>

//deklarasi variabel
	int jari2, panjang1, panjang2, lebar;
	float phi = 3.14;

//area
int luas_persegi(){
    //input data
    printf("Masukkan nilai panjang persegi\t:");
	scanf("%d", &panjang1);

    //menghitung luas
    int luas_persegi = panjang1*panjang1;

    //mencetak output
    printf("Luas persegi\t:%d\n", luas_persegi);
} 

int luas_Persegi_panjang(){
    //input
    printf("Masukkan nilai panjang persegi panjang\t:");
	scanf("%d", &panjang2);
	
	printf("Masukkan nilai lebar persegi panjang\t:");
	scanf("%d", &lebar);

    //menghitung luas
    int luas_persegi_panjang = lebar*panjang2;

    //mencetak output
    printf("Luas persegi panjang\t:%d\n", luas_persegi_panjang);
}

float luas_lingkaran(){
	//input
    printf("Masukkan nilai jari-jari lingkaran\t:");
	scanf("%d", &jari2);
    
    //menghitung luas
    float luas_lingkaran = phi*(pow(jari2,2));

    //mencetak luas
    printf("Luas lingkaran\t:%.2f\n", luas_lingkaran);
}

//volume
	float radius;
	int panjang1, lebar1, tinggi1, panjang2, lebar2, tinggi2;

float volume_bola(){
    //input
    printf("Masukkan nilai radius\t:");
	scanf("%f", &radius);

    //menghitung volume
    float volume_bola = (4*phi*(pow(radius, 3)))/3;

    //mencetak output
    printf("Volume Bola\t: %.2f\n", volume_bola);
}

int volume_balok(){
    //input
    printf("Masukkan nilai panjang1\t:");
	scanf("%d", &panjang1);
	printf("Masukkan nilai lebar1\t:");
	scanf("%d", &lebar1);
	printf("Masukkan nilai tinggi1\t:");
	scanf("%d", &tinggi1);

    //menghitung volume
    int volume_balok = panjang1*lebar1*tinggi1;

    //mencetak output
    printf("Volume balok\t:%d\n", volume_balok);   
}

int volume_limas(){
    //input
    printf("Masukkan nilai panjang2\t:");
	scanf("%d", &panjang2);
	printf("Masukkan nilai lebar2\t:");
	scanf("%d", &lebar2);
	printf("Masukkan nilai tinggi2\t:");
	scanf("%d", &tinggi2);

    //menghitung volume
    int volume_limas = (panjang2*lebar2*tinggi2)/3;

    //mencetak output
    printf("Volume limas\t:%d\n", volume_limas);
}

int main(){
    int opt;
    while(opt != 0){
        printf("Pilih untuk menghitung\n");
        printf("1.\tLuas\n");
        printf("2.\tVolume\n");
        printf("Pilihan\t:");
        scanf("%d", &opt);
        if (opt == 1){
            printf("1.\tLuas Persegi\n");
            printf("2.\tLuas Persegi Panjang\n");
            printf("3.\tLuas Lingkaran\n");
            printf("Masukkan 0 untuk mengakhiri sesi\n");
            printf("Pilihan\t:");
            scanf("%d", &opt);
            if (opt == 1){
                luas_persegi();
            } else if (opt == 2){
                luas_Persegi_panjang();
            }else if (opt == 3){
                luas_lingkaran();
            }   
        } else if (opt ==2){
            printf("1.\tVolume Bola\n");
            printf("2.\tVolume Balok\n");
            printf("3.\tVolume Limas\n");
            printf("Masukkan 0 untuk mengakhiri sesi\n");
            printf("Pilihan\t:");
            scanf("%d", &opt);
            if (opt == 1){
                volume_bola();
            } else if (opt == 2){
                volume_balok();
            }else if (opt == 3){
                volume_limas();
            }   
        }
    }


}