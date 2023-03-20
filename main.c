/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

// Struct linked list
typedef struct node
{
    int data;
    node *next;
    node *prev;
} node;

int main()
{
    int res;
    
    printf("Masukkan jumlah elemen: ");

    printf("Masukkan elemen linked list pertama: ");
    printf("Masukkan elemen linked list kedua: ");

    printf("Masukkan arah putaran list pertama: ");
    printf("Masukkan arah putaran list kedua: ");
    
    printf("Hasil: %d", res);
}
