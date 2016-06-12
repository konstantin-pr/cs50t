#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
     
    printf("Vvedite, pozhaluysta chislo v formate 1.24 \n"); 
    float changeToGive = GetFloat(); //schitivaem obschee znachenie sdachi
  
    int precision = 2; // kolvo znakov
    int gryvni = (int)changeToGive;
    int kopeiki = (int) (( changeToGive - floor (changeToGive) ) * pow(10, precision));
    //printf("Gryvni: %d\n Kopeiki: %d\n", changeToGive, gryvni, kopeiki);
    
    gryvni = gryvni * 100; //perevod gryvni v kopeiki
    int changeToGive = gryvni + kopeiki; //skolko vsego dat
        
    int currentNominalMonety = 25; 
	int i = 0; //vitok tshykla, pervy raz v tsikle rabotaem s monetoy 25 kop
	//vsego 4 raznih monety 
	//poka ostalas sdacha,  daem
	while (changeToGive > 0 && i < 4) { //poka zdacha est, daem
            //vsego nominalov monet 4 shtuki 25, 10, 5, 1, po zadaniyu rabotaem bez masivov
	        //opredelim s kakim nominalom monety rabotaem	       
	        if (i == 1){
	            currentNominalMonety = 10;
	        } else 
	        if (i == 2){
	            currentNominalMonety = 5;
	        } else
	        if (i == 3){
	            currentNominalMonety = 1;
	        }
	        else  return;
	
	         //berem solko ostalos ot deleniya obshei sumy / tekushiy nominal monetu
	         //umenschaem sdachu na eto kolichestvo
	          
	        printf("kolichestvo sdachi tekuschim nominalom  monet: %d \n ", changeToGive / currentNominalMonety);
         
	        changeToGive = changeToGive - changeToGive / currentNominalMonety; 
            //esli mozhno vsyat' ostatok , berem ostatok - eto i budet kolvo monet
            //tekushcego nominala
             printf("vsyali monet currentNominala : %d \n ", changeToGive % currentNominalMonety);
            coinCount = coinCount + changeToGive % currentNominalMonety; 
	          
	        i++;         
	    } 
	  
    
    
    return 0;
    
    int currentNominalMonety = 25;
    int coinCount = 0;      //kolichestvo monet
    //int divChange = 0;
    int sdachaOstalas = 0; 
  ///Tselim deleniem proveryaem
    
   
   
    
      
}