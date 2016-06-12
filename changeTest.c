#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
     
    printf("Vvedite, pozhaluysta chislo v formate 1.24 \n"); 
    int giveChange = GetFloat();
    giveChange = giveChange * 100; //translate grivny v kopeiki
    int currentNominalMonety = 25;
    int coinCount = 0;      //kolichestvo monet
    //int divChange = 0;
    int sdachaOstalas = 0; 
   ///Tselim deleniem proveryaem
    sdachaOstalas = giveChange / currentNominalMonety;  //proveryaem vhodit li znachene monety v obschee kolichestvo sdachi
  //divChange skolko monet vsyali,
    coinCount = giveChange % currentNominalMonety; //esli vhodit znachenie monetki v obschee kolvo, to berem ostatok
   
    printf("kolichestvo monet ostalos ot obschego kolichestva : %d \n ", coinCount);
    printf("vsyali monet currentNominala : %d \n ", sdachaOstalas);
    
    return 0;  
}