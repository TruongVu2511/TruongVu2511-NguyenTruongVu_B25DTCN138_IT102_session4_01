#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi;
    int so_dien;
    int tien_dien;

    printf("Nhap chi so cu: ");
    scanf("%d", &chi_so_cu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chi_so_moi);

    so_dien = chi_so_moi - chi_so_cu;

    if (so_dien < 0) {
        printf("Chi so moi phai lon hon chi so cu!\n");
        return 0;
    }

    if (so_dien < 50) {
        tien_dien = so_dien * 10000;
    } else if (so_dien < 100) {
        tien_dien = so_dien * 15000;
    } else if (so_dien < 150) {
        tien_dien =_

