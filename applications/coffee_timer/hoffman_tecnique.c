#include <stdio.h>
#include <math.h>

void wait(unsigned int seconds) {
    for(unsigned int i=seconds; i>0;i--){
        Sleep(1);
        printf("%u\n",i);
    }
}

int main() {
    float coffee_amount;
    unsigned int water_amount,bloom;
    
    printf("Enter the amount of coffee (in grams): ");
    scanf("%f", &coffee_amount);
    bloom = round(coffee_amount*2);
    
    water_amount = round(coffee_amount * 16.6666666);
    
    printf("Amount of water: %u grams\n", water_amount);
    Sleep(10);
    
    printf("Pour %i as a bloom\n", bloom);
    printf("Swirl the bed of coffee\n");
    printf("Wait for 30 seconds\n");
    wait(30);
    
    unsigned int weight40 = round(water_amount*.40);
    unsigned int weight60 = round(water_amount*.60);
    
    printf("Add water till weight displays %u\n", weight60);
    printf("Timer: 20 seconds\n");
    wait(20);
    
    printf("Pour the remaining %u grams water\n", weight40);
    printf("Stir counterclockwise once and clockwise once\n");
    printf("Wait for 20 seconds\n");
    wait(20);
    
    printf("Swirl the coffee\n");
    
    printf("Coffee is done!\n");
    
    return 0;
}