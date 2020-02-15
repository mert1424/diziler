#include <stdio.h>
#define BOYUT 10
int main() {

    int dizi[BOYUT]={2,4,8,1,18,19,45,76,89};
    int i,tur,tut;
    printf("siralamadan once dizi");
    for(i=0;i<BOYUT-1;i++)
        printf("%4d",dizi[i]);
             for(tur=1;tur<BOYUT-1;tur++)
             for(i=1;i<BOYUT-2;i++)
                 if(dizi[i]>dizi[i+1]){
                     tut=dizi[i];
                     dizi[i]=dizi[i+1];
                     dizi[i+1]=tut;
                 }
printf("\n Veriler artan siralamada \n");
                 for(i=0;i<=BOYUT-1;i++)
                     printf("%4d",dizi[i]);
                     printf("\n");

    return 0;
}
