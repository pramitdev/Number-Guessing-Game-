#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;//Generates Random number
    //printf("\nEnter the number is %d",number);
    //Keep Running the loop untill the number is guessed
    do{
        printf("Guess the number betwen 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");
        }
        else if(guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguess);
        }
        nguess++;

    }while(guess!=number);
    return 0;
    
}
