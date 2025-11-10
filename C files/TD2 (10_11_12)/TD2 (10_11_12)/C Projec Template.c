#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool LeapYear(int year) {
    bool c1 = (year % 4 == 0 && year % 100 != 0);
    bool c2 = (year % 400 == 0);
    return c1 || c2;
}
int main() {
    /*
	// 10 Simple Calculator
    float a, b;
    char OpType;

	printf("Enter the first number a: "); scanf("%f", &a);
	printf("Enter the first number b: "); scanf("%f", &b);
	printf("Enter the operation type:  "); scanf(" %c", &OpType); //the space is important
	switch (OpType) {
		case '+': 
			printf("a + b = %f", a + b);
			break;
		case '-':
			printf("a - b = %f", a - b);
			break;
		case '*':
			printf("a * b = %f", a * b);
			break;
		case '/':
			if (b == 0)
				printf("Division by 0 is undefined");
			else
			    printf("a / b = %f", a / b);
			break;
		default: 
			printf("Undefined binary operation");

	}
	printf("\n*************************\n");

	//11 Day of the Week
    printf("Enter a day of the week\n");
    printf("(1) Sunday\n");
    printf("(2) Monday\n");
    printf("(3) Tuesday\n");
    printf("(4) Wednesday\n");
    printf("(5) Thursday\n");
    printf("(6) Friday\n");
    printf("(7) Saturday\n");
    printf("Your choice ?  ");

    short DayInt;
    scanf("%hd", &DayInt);
    switch (DayInt) {
    case 1:
        printf("\nIt's Sunday :)\n");
        system("color C0");
        break;
    case 2:
        printf("\nIt's Monday :)\n");
        system("color E0");
        break;
    case 3:
        printf("\nIt's Tuesday :)\n");
        system("color 10");
        break;
    case 4:
        printf("\nIt's Wednesday :)\n");
        system("color 20");
        break;
    case 5:
        printf("\nIt's Thursday :)\n");
        system("color F0");
        break;
    case 6:
        printf("\nIt's Friday :)\n");
        system("color 80");
        break;
    case 7:
        printf("\nIt's Saturday :)\n");
        system("color 30");
        break;
    default:
        printf("\nYou should pick a number between 1 and 7\n");
        system("color 4F");
    }
    printf("\n*************************\n");

    //12 Saisons of the year
    printf("Enter a month of the year\n");
    printf("(1) January\n");
    printf("(2) February\n");
    printf("(3) March\n");
    printf("(4) April\n");
    printf("(5) May\n");
    printf("(6) June\n");
    printf("(7) July\n");
    printf("(8) August\n");
    printf("(9) September\n");
    printf("(10) October\n");
    printf("(11) November\n");
    printf("(12) December\n");
    printf("Your choice ?  ");

    short MonthInt;
    scanf("%hd", &MonthInt);
    if (MonthInt < 0 || MonthInt>12) {
        printf("Choose a number between 1 and 12");
    }
    else if (MonthInt >= 1 && MonthInt <= 3) {
        printf("It's Winter :)");
        if (MonthInt == 3)
            printf("Winter ends on 20th March and then Spring starts");
    }
    else if (MonthInt >= 4 && MonthInt <= 6) {
        printf("It's Spring :)");
        if (MonthInt == 6)
            printf("Spring ends on 20th June and then Summer starts");
    }
    else if (MonthInt >= 7 && MonthInt <= 9) {
        printf("It's Summer :)");
        if (MonthInt == 9)
            printf("Summer ends on 20th September and then Fall starts");
    }
    else if (MonthInt >= 10 && MonthInt <= 12) {
        printf("It's Fall :)");
        if (MonthInt == 12)
            printf("Fall ends on 20th December and then Winter starts");
    }
    printf("\n*************************\n");

    // 13 Price by Distance
    float Distance;
    printf("Enter the traveled distance in (KM)"); scanf("%f", &Distance);
    if (Distance < 0) {
        printf("Enter a valid distance ");
    }
    else if (0 < Distance && Distance < 5) {
        printf("The price is %f (DA)", Distance * 2);
    }
    else if (5 <= Distance && Distance < 15) {
        printf("The price is %f (DA)", Distance * 1.5);
    }
    else {
        printf("The price is %f (DA)", Distance);
    }
    printf("\n*************************\n");
    */
    //14 Valid date
    int Day, Month, Year;
    printf("Eter the year "); scanf("%d", &Year);
    printf("Eter the month "); scanf("%d", &Month);
    printf("Eter the day "); scanf("%d", &Day);
    bool InvalidDay = (Day < 1 || Day > 31);
    bool InvalidMonth = (Month < 1 || Month > 12);
    bool InvalidYear = Year < 1;

    if (InvalidDay || InvalidMonth || InvalidYear) {
        printf("Invalid date :^|");
    }
    else {
        if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
            if (Day <= 31) {
                printf("Valid date :)");
            }
        }
        else if (Month == 2) {
            if (LeapYear(Year) && Day <= 29) {
                printf("Valid date :)");
            }
            else if (LeapYear(Year)==0 && Day <= 28) {
                printf("Valid date :)");
            }
            else {
                printf("Invalid date");
            }
        }
        else if (Day <= 30) {
            printf("Valid date :)");
        }
        else
            printf("Invalid date :^| ");

    }
    
    




    return 0;
}