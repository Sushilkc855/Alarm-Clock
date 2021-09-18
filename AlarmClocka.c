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

updated_time = update_time (present_time, time_for_alarm); /*Anrop av funktion*/
printf("Alarm" );

   return 0;
}


/*Funktion som uppdaterar current_time tills det är tid för Alarm*/
int update_time(int num1, int num2){

int result; 
for ( num1; num1!=num2 ; num1++){ 
    printf("%d \n", num1);
  }
result = num1;

return result; 


}