  #include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float addresh;
} s[5];

int main() {
    int i;
    printf("Enter  students:\n");

    
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].addresh);
    }
    printf("Displaying Information:\n\n");

    
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("addresh: %.1f", s[i].addresh);
        printf("\n");
    }
    return 0;
}

  




