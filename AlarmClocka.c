#include <stdio.h>

int update_time (int num1, int num2); /*Decklaration av en funtion som uppdaterar present_time tills det är lika med time_for_alarm*/

int main() {
  int present_time;
  int time_for_alarm;
  int updated_time;

    printf("Enter the current time: "); 
    scanf("%d", &present_time);  
  
    printf("Enter the time for alarm: ");
    scanf("%d", &time_for_alarm);

updated_time = update_time (present_time, time_for_alarm); /*Anrop av funktionen*/
printf("Alarm" );

   return 0;
}


/*Funktion som uppdaterar current_time tills det är tid för Alarm*/
int update_time(int num1, int num2) {

int result; 
for ( num1; num1!=num2 ; num1++){
  int timmar = num1/10000; /*Vid heltal divition får vi ett svar som är heltal. Och på så sätt får vi timmar. T.ex 123456/10000=12. Får vi 12 timmar.*/
  
  /*Om timmar bilr över eller 24. Så blir tiden inställd på till 0 och börjar att räkna upp igen till larmen. t.ex när tiden är 23:34:22 och larm är 00:05:20. 
  Då kommer tiden att lopa för evigt om vi inte har denna if-sats och tiden kan inte var 25 timmar*/
  if(timmar>=24){ 
    num1= 0;
  };

  int minuter_sekunder = num1%10000; // för att kunna räkna minuter tar vi först rest. 
  int minuter = minuter_sekunder/100; // vi dividerar rest med 100 för att få minuter
    if(minuter>59){
      num1 += 4000; /*T.ex 12:60:00 + 4000 = 13:00:00 */ 
    }

  int sekunder = minuter_sekunder%100; 
    if(sekunder>=59){
      num1 += 40; /*T.ex 12:48:60 + 4000 = 12:49:00*/
    }

    printf("%d:%d:%d\n", timmar, minuter, sekunder);
  }
result = num1;

return result; 
}