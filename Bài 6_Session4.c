#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi;
    int so_dien, tien_dien;

    printf("Nhap chi so cu: ");
    scanf("%d", &chi_so_cu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chi_so_moi);

    so_dien = chi_so_moi - chi_so_cu;
    printf("So dien tieu thu: %d kWh\n", so_dien);

    if (so_dien < 50) {
        tien_dien = so_dien * 10000;
        printf("Tien dien phai tra: %d VND (muc 1 - 10.000 VND/kWh)\n", tien_dien);
    } 
    else if (so_dien < 100) {
        tien_dien = so_dien * 15000;
        printf("Tien dien phai tra: %d VND (muc 2 - 15.000 VND/kWh)\n", tien_dien);
    } 
    else if (so_dien < 150) {
        tien_dien = so_dien * 20000;
        printf("Tien dien phai tra: %d VND (muc 3 - 20.000 VND/kWh)\n", tien_dien);
    } 
    else if (so_dien < 200) {
        tien_dien = so_dien * 25000;
        printf("Tien dien phai tra: %d VND (muc 4 - 25.000 VND/kWh)\n", tien_dien);
    } 
    else {
        tien_dien = so_dien * 30000;
        printf("Tien dien phai tra: %d VND (muc 5 - 30.000 VND/kWh)\n", tien_dien);
    }

    return 0;
}



           
