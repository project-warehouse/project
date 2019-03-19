//Denda Perpustakaan

#include <math.h>
#include <stdio.h>

int main(){
    int level, buku;
    int tgl_pinjam, tgl_kembali, terlambat;
    double denda;

    scanf("%d %d", &level, &buku);
    scanf("%d %d", &tgl_pinjam, &tgl_kembali);

    terlambat = tgl_kembali - tgl_pinjam - 5;

    if(terlambat > 0){
        switch(level){
        case 3:
            if(terlambat < 7){
                denda = 4 * terlambat * buku;
            }
            if(terlambat >= 7 && terlambat < 14){
                denda = 6 * terlambat * buku;
            }
            if(terlambat >= 14){
                denda = 7 * terlambat * buku;
            }
            break;
        case 2:
            if(terlambat < 7){
                denda = 3 * terlambat * buku;
            }
            if(terlambat >= 7){
                denda = 5 * terlambat * buku;
            }
            break;
        case 1:
            denda = 2 * terlambat * buku;
            break;
        }
    }
    else{
        denda = 0;
    }

    if(tgl_kembali % 3 == 0){
        denda *= 0.8;
    }

    printf("%d\n",(int)floor(denda));

    return 0;
}
