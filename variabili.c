
/* 
    variabili e specificatori di caratteri 
*/
#include <stdio.h>
#include<limits.h>

int main(){
    printf("%-25s %-25s %-25s\n","Tipo", "Byte Occupati","Minimo/Massimo");
    printf("%-25s %-25s %-25s\n","----", "-------------","--------------");


    printf("%-25s %-25lu %d/%d\n","char", sizeof(char),CHAR_MIN,CHAR_MAX);
   // printf("%-25s %-25lu %d/%d\n","signed char", sizeof(signed char),SCHAR_MIN,SCHAR_MAX);

    printf("%-25s %-25lu %d/%d\n","unsigned char", sizeof(unsigned char),0,UCHAR_MAX);
    printf("%-25s %-25lu %d/%d\n","int", sizeof(int),INT_MIN,INT_MAX);
    printf("%-25s %-25lu %d/%u\n","unsigned int", sizeof(unsigned int),0,UINT_MAX);
    printf("%-25s %-25lu %d/%u\n","short int", sizeof(short int),SHRT_MIN,SHRT_MAX);
    printf("%-25s %-25lu %ld/%ld\n","long int", sizeof(long int),LONG_MIN,LONG_MAX);
    //ha poco senso utilizzare il long long int in architetture a 64 bit coincide con il long int
    printf("%-25s %-25lu %ld/%lld\n","long long int", sizeof(long long int),LLONG_MIN,LLONG_MAX);
    
    printf("%-25s %-25lu %g/%f\n","double", sizeof(double),__DBL_MIN__,__DBL_MAX__);
    printf("%-25s %-25lu %e/%e\n","double", sizeof(double),__DBL_MIN__,__DBL_MAX__);


    // come si dichiara una variabile 

    //tipo_variabile nome_variabile
    // esempio:
    //int numerointero;
    //char carattere;

    int numerointero=2;
    char carattere='c';

    printf("Sto visualizzando il contenuto della variabile numerointero %d\n", numerointero);
    printf("Sto visualizzando il contenuto della variabile carattere %c\n", carattere);

    printf("Sto visualizzando l'indirizzo di memoria della variabile numerointero %p\n", &numerointero);
    printf("Sto visualizzando l'indirizzo di memoria della variabile  carattere %p\n", &carattere);

    printf("Sto visualizzando l'indirizzo di memoria della variabile numerointero %d\n", sizeof(*(&numerointero)));
    printf("Sto visualizzando l'indirizzo di memoria della variabile  carattere %d\n", sizeof(*(&carattere)));

    return 0;
}
