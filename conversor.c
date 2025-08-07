/*
    Unit Converter Program
    ----------------------
    Converts between temperature, distance, pressure, weight, and volume units.
    Written in C for educational and demonstrative purposes.

    Author: [Sandra Martin Elias]
    Date: [2025/08/07]
*/

#include<stdio.h>

float get_number();
void handle_temperature();
void handle_distance();
void handle_pressure();
void handle_weight();
void handle_volume();

int main() 
{
    int selection1, selected2;
    char contin='y';
    
    while (contin=='y') // Main program loop - repeats until user decides to exit
    {
        selection1=-1;
        selected2=0;

        while (selection1<0 || selection1>5)  // Show the main menu until a valid option is selected (0–5)
        {
            printf("What do you want to convert?\n0: Exit\n1: Temperature\n2: Distance\n3: Pressure\n4: Weight\n5: Volume\n");
            scanf(" %i",&selection1);  
            
            if (selection1>0 && selection1<=5)
            {
                    switch (selection1)  // Call the appropriate conversion handler based on the user's choice
                    {
                        case 1:
                            handle_temperature();
                            break;
                        case 2:
                            handle_distance();
                            break;
                        case 3:
                            handle_pressure();
                            break;
                        case 4:
                            handle_weight();
                            break;
                        case 5:
                            handle_volume();
                            break;
                    }
            } else if(selection1>5 || selection1<0){
                if (scanf(" %i", &selection1) != 1) {
                    printf("Invalid input. Please enter a number. Press enter to continue\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    selection1 = -1;
                }
            }
        }
        if (selection1==0)
        {
            contin='n'; // User chose to exit
        } else{
            contin='x'; // Reset loop control
        }

        if (selection1!=0)  // Ask the user whether they want to continue or exit
        {
            while (contin!='y' && contin!='n')
            {
                printf("Do you want to convert more? y/n\n");
                scanf(" %c",&contin);
            }
        }
        
        if (contin=='n')
        {
            printf("Thank you. See you soon!");
        }
    }
    return 0;
}

float get_number() // Prompts the user for a float input with validation
{
    float initial;

    while (1)  // Check if input is a valid float
    {
        printf("Insert value to convert: ");
        if(scanf("%f",&initial)!=1)
        {
            printf("Invalid input. Please try again. Press enter to continue\n");
            while (getchar() != '\n' && getchar() != EOF);
        } else{
            return initial;
        }
    } 
}

void handle_temperature() // Handles temperature conversions
{
    float initial, converted;
    int selection2=0;

    while (selection2<1 || selection2>2)   // Show temperature conversion options until valid selection is made
    {
        printf("1: ºC to ºF\n2: ºF to ºC\n");
        if (scanf(" %i", &selection2) != 1) {
            printf("Invalid selection. Please try again. Press enter to continue\n");
            while (getchar() != '\n' && getchar() != EOF);
        }
    }
                            
    if (selection2>0 && selection2<3)
        {
            initial=get_number(); 

            switch (selection2)
            {
            case 1:
                converted=1.8*initial+32; // Celsius to Fahrenheit
                printf("%.2f °C are %.2f °F\n",initial,converted);
                break;
            
            case 2:
                converted=5.0/9.0*(initial-32); // Fahrenheit to Celsius
                printf("%.2f °F are %.2f °C\n",initial,converted);                               
                break;
            }
        } else {
            printf("Invalid selection. Please try again.\n");
        }
}

void handle_distance() // Handles distance conversions
{
    float initial, converted;
    int selection2=0;

    while (selection2<1 || selection2>5)   // Show temperature conversion options until valid selection is made
    {
        printf("1: km to miles\n2: miles to km\n3: m to ft\n4: ft to m\n");
        if (scanf(" %i", &selection2) != 1) {
            printf("Invalid selection. Please try again. Press enter to continue\n");
            while (getchar() != '\n' && getchar() != EOF);
        }
    }

    if (selection2>0 && selection2<5)
    {
        initial=get_number();   

        switch (selection2)
        {
            case 1:
                converted=initial/1.60934; // Kilometers to Miles
                printf("%.2f km are %.2f miles\n",initial,converted);
                break;
            
            case 2:
                converted=initial*1.60934; // Miles to Kilometers
                printf("%.2f miles are %.2f km\n",initial,converted);                               
                break;
            case 3: 
                converted=initial*3.28084; // Meters to Feet
                printf("%.2f m are %.2f ft\n",initial,converted);
                break;
            case 4:
                converted=initial/3.28084; // Feet to Meters
                printf("%.2f ft are %.2f m\n",initial,converted);
                break;
        }
        } else {
            printf("Invalid selection. Please try again\n");
        }
}

void handle_pressure() // Handles pressure conversions
{
    float initial, converted;
    int selection2=0;

    while (selection2<1 || selection2>2)   // Show temperature conversion options until valid selection is made
    {
        printf("1: pa to atm\n2: atm to pa\n");
        if (scanf(" %i", &selection2) != 1) {
            printf("Invalid selection. Please try again. Press enter to continue\n");
            while (getchar() != '\n' && getchar() != EOF);
        }
    }
    
    if (selection2>0 && selection2<3)
    {                                
        initial=get_number();    

        switch (selection2)
        {
        case 1:
            converted=initial/101325.0; // Pascals to Atmospheres
            printf("%.2f pa are %.2f atm\n",initial,converted);
            break;
        
        case 2:
            converted=initial*101325.0; // Atmospheres to Pascals
            printf("%.2f atm are %.2f pa\n",initial,converted);                               
            break;
        }
        } else {
            printf("Invalid selection. Please try again.\n");
        }
}

void handle_weight() // Handles weight conversions
{
    float initial, converted;
    int selection2=0;

    while (selection2<1 || selection2>2)   // Show temperature conversion options until valid selection is made
    {
        printf("1: kg to lb\n2: lb to kg\n");
        if (scanf(" %i", &selection2) != 1) {
            printf("Invalid selection. Please try again. Press enter to continue\n");
            while (getchar() != '\n' && getchar() != EOF);
        }
    }
    
    if (selection2>0 && selection2<3)
    {                              
        initial=get_number();    

        switch (selection2)
        {
        case 1:
            converted=initial*2.20462; // Kilograms to Pounds
            printf("%.2f kg are %.2f lb\n",initial,converted);
            break;
        
        case 2:
            converted=initial/2.20462; // Pounds to Kilograms
            printf("%.2f lb are %.2f kg\n",initial,converted);                               
            break;
        }
        } else {
            printf("Invalid selection. Please try again.\n");
        }
}

void handle_volume() // Handles volume conversions
{
    float initial, converted;
    int selection2=0;

    while (selection2<1 || selection2>2) 
    {
        printf("1: L to gal\n2: gal to L\n");
        if (scanf(" %i", &selection2) != 1) {
            printf("Invalid selection. Please try again. Press enter to continue\n");
            while (getchar() != '\n' && getchar() != EOF);
        }
    }
    
    if (selection2>0 && selection2<3)
    {                                
        initial=get_number();    

        switch (selection2)
        {
        case 1:
            converted=initial*0.264172; // Liters to Gallons
            printf("%.2f L are %.2f gal\n",initial,converted);
            break;
        
        case 2:
            converted=initial/0.264172; // Gallons to Liters
            printf("%.2f gal are %.2f L\n",initial,converted);                               
            break;
        }
        } else {
            printf("Invalid selection. Please try again.\n");
        }
}