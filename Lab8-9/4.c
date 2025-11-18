// Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address. 

#include <stdio.h>

union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    printf("-------------------------------------------------\n");
    printf("        PRESENT ADDRESS DISPLAY USING UNION       \n");
    printf("-------------------------------------------------\n");

    printf("Enter your Name: ");
    scanf(" %[^\n]", addr.name);
    printf("Name: %s\n", addr.name);

    printf("\nEnter your Home Address: ");
    scanf(" %[^\n]", addr.home_address);
    printf("Home Address: %s\n", addr.home_address);

    printf("\nEnter your Hostel Address: ");
    scanf(" %[^\n]", addr.hostel_address);
    printf("Hostel Address: %s\n", addr.hostel_address);

    printf("\nEnter your City: ");
    scanf(" %[^\n]", addr.city);
    printf("City: %s\n", addr.city);

    printf("\nEnter your State: ");
    scanf(" %[^\n]", addr.state);
    printf("State: %s\n", addr.state);

    printf("\nEnter ZIP Code: ");
    scanf(" %[^\n]", addr.zip);

    printf("\n-------------------------------------------------\n");
    printf("             YOUR PRESENT ADDRESS                \n");
    printf("-------------------------------------------------\n");

    // Since all members share the same memory,
    // only the last entered value (ZIP) is retained.
    printf("ZIP Code: %s\n", addr.zip);
    printf("-------------------------------------------------\n");

    printf("Note: Since this is a UNION, only one value is stored at a time.\n");
    printf("Hence, the last entered field (ZIP Code) overwrites the previous data.\n");

    printf("\nThank you for using the Address Display Program!\n");

    return 0;
}