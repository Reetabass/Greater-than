#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main (){
    int x, y;
    char string_true[30], mystring_false[30], input[30], input2[30], z[30];


    
    while(1) {//code will run indefinently unless there is a break, run because true(1)
        
        printf("Enter and interger or type 'exit' to end: ");
        
        if (fgets(input, 30, stdin) == NULL || strcmp(input, "exit\n") == 0) 
        {
            break;
        }
        size_t len=strlen(input);
        if (len >= 0 && input [len - 1] == '\n') {
            input[len - 1] = '\0';    
        
        } 
        else { 
            printf("\ninvalid imput. Please enter an integer or type 'exit' to end.");
            continue;
        }
        
        if (sscanf(input, "%d", &x) !=1)    
        {
            printf("\ninvalid imput please enter an integer or type 'exit' to end");

            continue;

        }
        if (sscanf(input, "%d", &x) ==1)  
        {
            break;
        }
    }
 
   
    while(1) {
        
        printf("\nEnter a second integer or type 'exit' to end: ");
        
        if (fgets(input2, 30, stdin) == NULL || strcmp(input2, "exit\n") == 0)
        {
            return 0;
        }
        size_t len=strlen(input2);
        if (len >= 0 && input2 [len - 1] == '\n') {
            input2[len - 1] = '\0';    
        
        } 
        else { 
            printf("\ninvalid imput. Please enter an integer or type 'exit' to end.");
            continue;
        }

        if (sscanf(input2, "%d", &y) !=1)
        {
            printf("\ninvalid imput please enter an integer or type 'exit' to end");

            continue;
        }
        if (sscanf(input2, "%d", &y) ==1)  
        {
            break;
        }
    }
    sleep(2);
    
    printf("\nThe two integers you entered are %d and %d.", x, y);
    
    if (x>y) {
       sleep(2);
       printf("\n\n%d is the larger integer.", x);

    } else if (y>x) {
        sleep(2);
        printf("\n\n%d is the greater number", y);
    } else if (x==y) {
        sleep(2);
        printf("\n\n%d and %d are equal.", x, y);
    }

    return 0;
    
}