#include<stdio.h>
#include<string.h>

int main(void)
{
    char mystrg[60];
    int leng, g;
    scanf( "%s", mystrg );
    leng = strlen(mystrg);
    for(g = leng - 1; g >= 0; g--) {
        printf("%c", mystrg[g]);        
}
}   
