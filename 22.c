#include <cs50.h>
#include <stdio.h>


int main(void)
{
     static char s[32];
     printf("Vvedite, pozhaluysta stroku do 32 simvolov: " );
     fgets(s,sizeof(s),stdin);    
     printf("Vy vveli: \n");
     //fputs(s, stdout);
     for (int i = 0; i < sizeof(s); i++)
     {
         printf("%c\n", s[i]);
     }
     return 0;
}