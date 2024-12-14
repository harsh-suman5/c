#include <stdio.h>

int main(){
    int bonus, balance;
    char sex;
    
    // Ask for user input
    printf("Enter your balance: ");
    scanf("%d", &balance);
    
    printf("Enter your sex (M for Male, F for Female): ");
    scanf(" %c", &sex); // Notice the space before %c to handle newline characters
    
    // Check sex and apply the bonus logic
    if(sex == 'F'){ // Use 'F' for female
        if (balance > 5000) {
            bonus = 0.05 * balance;
        } else {
            bonus = 0.02 * balance;
        }
    }
    else { // Assuming 'M' for male
        bonus = 0.02 * balance;
    }
    
    // Output the bonus
    printf("Your bonus is: %d\n", bonus);
      
    return 0;
}
