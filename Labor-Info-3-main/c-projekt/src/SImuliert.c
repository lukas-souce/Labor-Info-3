#include <stdio.h>
#include<string.h>
#include <unistd.h>
#include <stdlib.h>//für rand der scheiß

int main() 
{
    FILE *Döner= fopen("messung.txt","w");//scheiß kack wie schreibt
    fprintf(Döner,"Messreihe SImuliert\n");
    fprintf(Döner,"-----------------------------------------\n");
    int x=0;
    while (x<20)
    {
        
        char buffer[256];
        memset(buffer,0,sizeof(buffer));
        float random_zahlen = 100+((float)rand()/RAND_MAX)*20;
        snprintf(buffer,sizeof(buffer),"%f", random_zahlen);
        printf("gelesen: %s\n",buffer);
         x +=1;
        fprintf(Döner,"wert %d: %s\n",x,buffer);
       
    }
    return 0;
    


}