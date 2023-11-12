#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

    int operator;

    // Print a welcome message to the user.
    printf("! ======= ! WELCOME TO 'MultiFuncPro' ! ======= ! \n\n");
    printf("There are many project arround us! Har Project me jo dikhta hai, Wo hamare project me milta hai!!\n\n");

    // Prompt the user to choose an operation.
    printf("Please choose any options\n\n");

    // Display the available operations to the user.
    printf("┌─────────────────────┐  ┌────────────────────────┐\n");
    printf("│ 1. Sum              │  │ 11. Vowels             │\n");
    printf("│ 2. Subtraction      │  │ 12. Calculator         │\n");
    printf("│ 3. Multiplication   │  │ 13. Average 3 no       │\n");
    printf("│ 4. Divide           │  │ 14. Leap Year          │\n");
    printf("│ 5. Area of triangle │  │ 15. Square Pattern     │\n");
    printf("│ 6. Area of rectangle│  │ 16. ATM                │\n");
    printf("│ 7. Even or odd      │  │ 17. Student Management │\n");
    printf("│ 8. Factorial        │  │ 18. Triangle Pattern   │\n");
    printf("│ 9. Prime no.        │  │ 19. Sum natural no.    │\n");
    printf("│ 10. Swapping        │  │ 20. P+, N-, zero check │\n");
    printf("└─────────────────────┘  └────────────────────────┘\n");


    scanf("%d",&operator);

    //-- Main switch section start --->

    switch(operator){

        case 1:{
            int a,b;

            printf("Enter two no : ");
            scanf("%d %d", &a, &b);

            int sum = a+b;

            printf("%d", sum);
            break;
        }
        case 2:{
            int a,b;

            printf("Enter two no : ");
            scanf("%d %d", &a, &b);

            int sum = a-b;

            printf("%d", sum);
            break;  
        }
        case 3:{
            int a,b;

            printf("Enter two no : ");
            scanf("%d %d", &a, &b);

            int sum = a*b;

            printf("%d", sum);
            break;
        }
        case 4:{
            int a,b;

            printf("Enter two no : ");
            scanf("%d %d", &a, &b);

            int sum = a/b;

            printf("%d", sum);
            break; 
        }
        case 5:{

            float base, height, area;
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);  
            break;
        }
        case 6:{

            float length, width, area;
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %.2f\n", area);
            break; 
        }
        case 7:{

            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            if (num % 2 == 0) {
                printf("%d is even.\n", num);
            } else {
                printf("%d is odd.\n", num);
            }
            break;
        }
        case 8:{

            int num, factorial = 1;
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            for (int i = 1; i <= num; i++) {
                factorial *= i;
            }
            printf("Factorial: %d\n", factorial);
            break;
        }
        case 9:{

            int num, isPrime = 1;
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            if (num <= 1) {
                isPrime = 0;
            } else {
                for (int i = 2; i * i <= num; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime) {
                printf("%d is a prime number.\n", num);
            } else {
                printf("%d is not a prime number.\n", num);
            } 
            break;
        }
        case 10:{

            int num1, num2, temp;
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            temp = num1;
            num1 = num2;
            num2 = temp;
            printf("After swapping: %d %d\n", num1, num2); 
            break;
        }
        case 11:{

            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);
            
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    printf("%c is a vowel.\n", ch);
                } else {
                    printf("%c is a consonant.\n", ch);
                }
            } else {
                printf("Invalid input.\n");
            }
            break;
        }

        case 12:{

            char operator;
            double num1, num2, result;

            printf("Enter an operator (+, -, *, /): ");
            scanf(" %c", &operator);

            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            switch (operator) {

                case '+':
                    result = num1 + num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '*':
                    result = num1 * num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '/':
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result: %.2lf\n", result);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
                    
                default:
                    printf("Error: Invalid operator.\n");
            }
                    break;
        }

        case 13:{

            float num1, num2, num3, average;
            printf("Enter three numbers: ");
            scanf("%f %f %f", &num1, &num2, &num3);
            average = (num1 + num2 + num3) / 3.0;
            printf("Average: %.2f\n", average);
            break;
        }

        case 14:{

            int year;
            printf("Enter a year: ");
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
            break;
        }

        case 15:{

            int side;
            printf("Enter the side length: ");
            scanf("%d", &side);

            for (int i = 1; i <= side; i++) {
                for (int j = 1; j <= side; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        }

        // ATM functionality for balance check, withdrawal, deposit, and exit.
        case 16:{

            int atmPin = 1234;

            int card;
            int pin;
            int option;
            int paisa = 12000;

            int amount;
            int deposit;

            printf("!------------------! Welcome to the ATM Service !------------------!\n\n");
            printf("Please enter your debit card number: ");
            scanf("%d", &card);

            sleep(2);

            printf("Please enter your 4-digit secret PIN: ");
            scanf("%d", &pin);


            if (pin == atmPin) {
            
                    printf("\n!!-- Please choose any option from Main Menu --!!\n");
                    // clrscr();
                    printf("\nMain Menu:\n");
                    sleep(1);
                    printf("1. Check Balance\n");
                    sleep(1);
                    printf("2. Withdraw Money\n");
                    sleep(1);
                    printf("3. Deposit Money\n");
                    sleep(1);
                    printf("4. Exit\n");
                    sleep(1);
                    printf("Enter your choice: ");
                    scanf("%d", &option);
                    // clrscr();

                    switch (option) {
                    
                        case 1:
                            sleep(2);
                            printf("Your balance is Rs. %d\n", paisa);
                            break;

                        case 2:

                            sleep(2);
                            printf("Enter the amount to withdraw: ");
                            scanf("%d", &amount);

                            if (amount <= 0) {
                                sleep(2);
                                printf("Invalid amount\n");
                            } 
                            else if (amount > paisa) {
                                sleep(2);
                                printf("Insufficient balance\n");
                            } 
                            else {

                                sleep(2);
                                printf("You have withdrawn %d\n", amount);
                                printf("Your current balance is %d", paisa-amount );
                            }
                            break;

                        case 3:

                            sleep(2);
                            printf("Enter the amount to deposit: ");
                            scanf("%d", &deposit);

                            if (deposit <= 0) {
                                sleep(2);
                                printf("Invalid amount\n");
                            } 
                            else {
                            
                                sleep(2);
                                printf("You have deposited %d\n", deposit);
                                printf("And your current balance is %d", paisa + deposit );
                            }
                            break;

                        case 4:

                            sleep(2);
                            printf("! ------------------------------- ! Thank you for using the our ATM service! ------------------------------- ! \n");
                            exit(0);

                        default:

                            sleep(2);
                            printf("Invalid option. Please try again.\n");
                            break;

                }

            } 

            else {
                sleep(4);
                // clrscr();
                printf("Invalid PIN. Please try again!\n");
            }
            break;
        }

        case 17:{

        //     #define MAX_STUDENTS 100

        //     struct Student {
        //         int roll_no;
        //         char name[50];
        //         char course[50];
        //     };

        //     void addStudent(struct Student students[], int *count) {
        //         if (*count >= MAX_STUDENTS) {
        //             printf("Student database is full. Cannot add more students.\n");
        //             return;
        //         }
        
        //         struct Student newStudent;
        //         printf("Enter Roll Number: ");
        //         scanf("%d", &newStudent.roll_no);
        //         printf("Enter Name: ");
        //         scanf(" %[^\n]s", newStudent.name);
        //         printf("Enter Course: ");
        //         scanf(" %[^\n]s", newStudent.course);

        //         students[*count] = newStudent;
        //         (*count)++;
        //         printf("Student added successfully.\n");
        //     }          

        //     void displayStudents(struct Student students[], int count) {
        //         printf("Roll Number\tName\t\tCourse\n");
        //         for (int i = 0; i < count; i++) {
        //             printf("%d\t\t%s\t\t%s\n", students[i].roll_no, students[i].name, students[i].course);
        //         }
        //     }

        //     void searchStudent(struct Student students[], int count, int roll_no) {
        //         for (int i = 0; i < count; i++) {
        //             if (students[i].roll_no == roll_no) {
        //                 printf("Roll Number\tName\t\tCourse\n");
        //                 printf("%d\t\t%s\t\t%s\n", students[i].roll_no, students[i].name, students[i].course);
        //                 return;
        //             }
        //         }
        //         printf("Student with Roll Number %d not found.\n", roll_no);
        //     }

        //     void deleteStudent(struct Student students[], int *count, int roll_no) {
        //         for (int i = 0; i < *count; i++) {
        //             if (students[i].roll_no == roll_no) {
        //                 for (int j = i; j < (*count - 1); j++) {
        //                     students[j] = students[j + 1];
        //                 }
        //                 (*count)--;
        //                 printf("Student with Roll Number %d deleted.\n", roll_no);
        //                 return;
        //             }
        //         }
        //         printf("Student with Roll Number %d not found.\n", roll_no);
        //     }

        //     int main() {
        //         struct Student students[MAX_STUDENTS];
        //         int studentCount = 0;
        //         int choice;

        //         while (1) {
        //             printf("\nStudent Management System\n");
        //             printf("1. Add Student\n");
        //             printf("2. Display Students\n");
        //             printf("3. Search Student\n");
        //             printf("4. Delete Student\n");
        //             printf("5. Exit\n");
        //             printf("Enter your choice: ");
        //             scanf("%d", &choice);

        //             switch (choice) {
        //                 case 1:
        //                     addStudent(students, &studentCount);
        //                     break;
        //                 case 2:
        //                     displayStudents(students, studentCount);
        //                     break;
        //                 case 3:
                           
        //                     printf("Enter Roll Number to search: ");
        //                     scanf("%d", &roll_no);
        //                     searchStudent(students, studentCount, roll_no);
        //                     break;
        //                 case 4:
        //                     printf("Enter Roll Number to delete: ");
        //                     scanf("%d", &roll_no);
        //                     deleteStudent(students, &studentCount, roll_no);
        //                     break;
        //                 case 5:
        //                     printf("Exiting the program.\n");
        //                     exit(0);
        //                 default:
        //                     printf("Invalid choice. Please try again.\n");
        //             }
        //         }

        //     }
        //     break;
        // }

        case 18:{

            int rows;
            printf("Enter the number of rows: ");
            scanf("%d", &rows);

            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        }

        case 19:{

            int n, sum = 0;
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++) {
                sum += i;
            }
            printf("Sum of natural numbers from 1 to %d is %d\n", n, sum);
            break;
        }

        case 20:{

            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            if (num > 0) {
                printf("%d is positive.\n", num);
            } else if (num < 0) {
                printf("%d is negative.\n", num);
            } else {
                printf("The number is zero.\n");
            }
            break;
        }

        //invalid option if user press any other number.
        default:

            printf("Invalid option");    

    }

    return 0;

}