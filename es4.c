#include<stdio.h>
#include <string.h>
void swap(int *a, int *b);

int main(void){
        int a = 5;
        a++;
        int *pa=&a;
        printf("a vale %d, a e' all'indirizzo di memoria %p\n", *pa, pa);

        int b[5] = {1,2,3,4,5};
        int *pb = &b;
        while(b<&b[5]){
                printf("%d\t", *b);
                b++;
        }
        printf("\n");

        // sostiuire in c la stringa miao
        char c[5] = "ciao";
        strcpy(c,"miao");
        printf("%s\n", c);

        // sostituire in d la stringa miao
        char *d = "ciao";
        d = 'miao';
        printf("%s\n", d);

        // invertire il contenuto delle variaibili aa e bb
        int aa = 3;
        int bb = 4;
        int *pa, *pb;
        printf("Priva di swap: aa=%d bb=%d\n", *pa, *pb);
        swap(paa, pbb);
        printf("Dopo swap: aa=%d bb=%d\n", *pa, *pb);

        return 0;

}

void swap(int *a, int *b){
        int tmp = a;
      
}