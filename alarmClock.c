/*Sushil K C: suhilkc@kth.se: 20020418-xxxx*/
#include <stdio.h>
int timmar (int time); /*Funktioner som räknar timmar,minuter och sekunder*/
int minuter (int time);
int sekunder (int time);

int main() {
    int present_time; 
    int time_for_alarm;

    printf("Enter the current time: "); 
    scanf("%d", &present_time);  
  
    printf("Enter the time for alarm: ");
    scanf("%d", &time_for_alarm);

    while (present_time != time_for_alarm){

 /*hade lite problem med att det skrevs ut 23:0 mellan tiden 23:59:59 och 0:0:0. När sekunder blir 59 så plusas det på +40 sen +1 och när det är 235959 blir det 236000.*/   
        if (present_time== 236000){ 
            present_time=0; /*Tiden börja om från 00:00:00*/
        }
        
        present_time =timmar(present_time);/*Anrop av funktionener*/
        present_time= minuter(present_time);
        present_time= sekunder(present_time);
        present_time++;
    }
    printf("!!ALARM!!" );
    return 0;
}

// Funktion som räknar timmar
int timmar(int time){
    int timmar = time/10000;
  
    if(timmar>23){ 
        time= 0;
    }
    else{
        printf("%d:", timmar);
    }
  return time;
}

// Funktion som räknar minuter
int minuter(int time){
  int minuter = time%10000/100; // vi dividerar rest med 100 för att få minuter
    if(minuter>59){
      time += 4000; /*T.ex 12:60:00 + 4000 = 13:00:00 */ 
    }
    else
    {
      printf("%d:", minuter);
    }
  return time;
}

// Funktion som räknar minuter
int sekunder(int time){
 int sekunder = time%100; 
    if(sekunder>=59){
      time += 40; /*T.ex 12:48:60 + 4000 = 12:49:00*/
    }
 printf("%d\n", sekunder);
 return time;
}



