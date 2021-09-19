#include <stdio.h>

int update_time (int num1, int num2); /*Decklaration av en funtion som uppdaterar present_time tills det är lika med time_for_alarm*/
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

  update_time (present_time, time_for_alarm); /*Anrop av funktionen*/
  printf("Alarm" );
  return 0;
  }


/*Funktion som uppdaterar current_time tills det är tid för Alarm*/
int update_time(int num1, int num2) {

    for ( num1; num1!=num2 ; num1++){
        num1 =timmar(num1);/*Anrop av funktionen*/
        num1= minuter(num1);
        num1= sekunder(num1);
        }
    int result = num1;
    return result; 
}

// Funktion som räknar timmar
int timmar(int time){
  int timmar = time/10000;
    if(timmar>=24){ 
        time= 0;
    };
  printf("%d:", timmar);
  return time;
}

// Funktion som räknar minuter
int minuter(int time){
  int minuter = time%10000/100; // vi dividerar rest med 100 för att få minuter
    if(minuter>59){
      time += 4000; /*T.ex 12:60:00 + 4000 = 13:00:00 */ 
    }
  printf("%d:", minuter);
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



