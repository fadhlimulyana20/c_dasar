#include <stdio.h>
#include <stdbool.h>

void atm_bank(){
    bool condition = true;
    int pin[10] = {111111, 110100, 211198, 140845, 170845, 010606, 111001, 190910, 110119, 101010}, pilihan, saldo[10] = {3000000, 5000000, 15000000, 3000000, 5000000, 15000000,3000000, 5000000, 15000000, 5000000}, nominal, tujuan, nominal_tf;
    int pin_input;
    bool pin_condition = false;
    char pin_conditional;
    int index_pin;
    while(condition == true){
        printf("=============================================================================================\n");
        printf("\t%s", "Silahkan Masukkan PIN Anda : ");
        scanf("%d", &pin_input);
        for (int i = 0; i < 10; i++)
        {
            if (pin[i]==pin_input)
            {
                index_pin = i;
                pin_condition = true;
                printf("\t%s\n", "Anda Berhasil Login");
                break;
            }    
        }
        if (pin_condition == false)
        {
            printf("\t%s\n", "PIN anda Salah");
        }
        
        while (pin_condition == true)
        {
            printf("=============================================================================================\n");
            printf("\t%s\n", "1. Cek Saldo");
            printf("\t%s\n", "2. Penarikan Uang Tunai");
            printf("\t%s\n", "3. Transfer Uang");
            printf("=============================================================================================\n");
            printf("\t%s", "Masukkan Pilihan Anda : ");
            scanf("%d", &pilihan);
            if (pilihan == 1)
            {
                printf("\nJumlah Saldo : %d\n", saldo[index_pin]);

            }else if (pilihan == 2)
            {
                printf("\t%s", "Masukkan Nominal : ");
                scanf("%d", &nominal);
                printf("\nUang sebesar %d berhasil ditarik\n", nominal);
                saldo[index_pin] -= nominal;
            }else if (pilihan == 3)
            {
                printf("\t%s", "Masukkan Rekening Tujuan : ");
                scanf("%d", &tujuan);
                printf("\n\t%s", "Masukkan Jumlah Uang ; Rp. ");
                scanf("%d", &nominal_tf);
                printf("\tNo Rek : %d\n", tujuan);
                printf("\tNominal : %d\n", nominal_tf);
                saldo[index_pin] -= nominal_tf;
            }
            printf("Transaksi lagi : y/n\n");
            scanf("%s", &pin_conditional);
            printf("\n");
            if (pin_conditional == 'n')
            {
                pin_condition = false;
            }   
        }
    
    }
}

int main(){
    atm_bank();
}
