#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
     
    printf("Vvedite, pozhaluysta chislo v formate 1.24 \n"); 
    int changeToGive = GetFloat(); //sdachu vidat' monetami
  
    float tselaya, drobnaya; 
    drobnaya =  modff(changeToGive, &tselaya); //vydelyaem tselyu i drobnuyu chast
     
    
    printf("Tselaya 123  chast' %lf \n", tselaya);
    printf("Kopeiki chast' %lf \n", drobnaya);
    
    //tselaya chast, tselaya chast * 100
    //drobnaya chast
    
    
    return 0;
    int currentNominalMonety = 25;
    int coinCount = 0;      //kolichestvo monet
    //int divChange = 0;
    int sdachaOstalas = 0; 
   ///Tselim deleniem proveryaem
    sdachaOstalas = changeToGive / currentNominalMonety;  //proveryaem vhodit li znachene monety v obschee kolichestvo sdachi
  //divChange skolko monet vsyali,
    coinCount = changeToGive % currentNominalMonety; //esli vhodit znachenie monetki v obschee kolvo, to berem ostatok
   
    printf("kolichestvo monet ostalos ot obschego kolichestva : %d \n ", coinCount);
    printf("vsyali monet currentNominala : %d \n ", sdachaOstalas);
    
      
}