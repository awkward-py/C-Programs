#include <stdio.h>
#include <stdlib.h>

int main() {
   
    char *items[] = {"Pizza", "Burger", "Coca Cola", "Chowmein", "Ice-cream", "Rice", "Salad", "HotDog", "Sandwich", "Donut"};
    int prices[] = {200, 150, 50, 100, 80, 120, 40, 100, 80, 60};

    int numItems = 10;  

    char choice;
    int itemNumber;
    int total = 0;

    printf("Welcome to the Food Ordering System!\n");
    printf("Menu:\n");

    for (int i = 0; i < numItems; i++) {
        printf("%d. %s - Rs.%d\n", i + 1, items[i], prices[i]);
    }

    printf("Enter the item numbers you'd like to order (0 to stop):\n");

    while (1) {
      
        scanf("%d", &itemNumber);

        if (itemNumber == 0) {
            break; 
        }

        if (itemNumber < 1 || itemNumber > numItems) {
            printf("Invalid item number. Please try again.\n");
            continue;
        }

        
        total += prices[itemNumber - 1];

        printf("Added %s to your order. Current total: $%d\n", items[itemNumber - 1], total);
    }

    printf("Your total bill is: $%d\n", total);
    printf("Thank you for ordering with us!\n");

    return 0;
}
