#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaPalavras(char frase[]){
    int i,total=0;
    int flagPalavra=0;
   
   
    for(i=0;frase[i]!='\0' && frase[i]!='\n';i++) {
        if(!flagPalavra && frase[i]!=' '){
            flagPalavra=1;
            total++;
        }
   else if(flagPalavra && frase[i]==' '){
       flagPalavra=0;
   }
    }
    return total;
}

int main (void)
{
char frase[1000];
int i, flag=0, total=0;

printf("Entre com uma frase\n");
fgets(frase,1000,stdin);
total=contaPalavras(frase);


printf("O número de palavras é: %d\n",total);

return 0;
}
