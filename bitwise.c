#include <stdio.h>

int main(){
    unsigned char register_led=0;
    printf("1. status awal register (desimal): %d\n", register_led);

    register_led = register_led | (1 << 3);
    printf("2. status led setelah dinyalakan (desimal): %d\n", register_led);

    if(register_led & (1 << 3)) {
        printf("3. hasil pemeriksaan : BENAR, LED posisi ke-3 sedang menyala");
    }else{
        printf("3. hasil pemeriksaan : SALAH, LED posisi ke-3 MATI.\n");
    }
    return 0;
}