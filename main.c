/*rock-paper-scissors game.
input number {1,2,3} for RPS respectively
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	printf("R[1]-P[2]-S[3]:\n");
	
	while(TRUE){
		
		int input;
		int stack = 0;
		//set seed
		srand ( time (NULL) ); 
		int random_value = ((rand() % 3)+1); //rng 1 to 3
		scanf("%d", &input);
		
		if(random_value > input){
			printf("pc win @, %d,\n", random_value);
			stack = stack + 1;
		}
		else if(random_value == input){
			printf("draw\n");
		}
		else if(input > 3){
			printf("cheat! lose\n");
		}
		else{
			printf("you win; pc%d, \n", random_value);
		}

	}

	return 0;	
}

