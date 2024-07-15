#include <stdio.h>
#include <string.h>

#define STANDARD_SIZE 80

//my implementation of 'strcat'

void MY_strcat(char *to, char from[]);

int main(){
    
    //defining my arrays and variables
    char standardPhrase[] = "with this phrase :)";
    char myPhrase[STANDARD_SIZE] = "this will be completed, ";
    char cPhrase[STANDARD_SIZE] = "this will be completed, ";
    
    // using my function
    MY_strcat(myPhrase, standardPhrase);
    printf("%s\n", myPhrase);
    
    
    // using the c function
    strcat(cPhrase, standardPhrase);
    printf("%s\n", cPhrase);
    
    return 0;
}


void MY_strcat(char *to, char from[]){
    
    // finding the size of the array 'to'
    int i = 0;
    while(to[i] != '\0'){
        i++;
    }
    
    // "why didn't you make like your code on github?"
    // because i don't want to create another variable just to do exactly
    // the same thing 'i' does, and i just realised i could have done it 
    // this way instead of my original code on github ;-;

    // setting the characters in 'to'
    int j;
    for(j = 0; j != i; j++){
        to[i + j] = from[j];
    }
    
    to[i + j] = '\0';
}
