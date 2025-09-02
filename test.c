#include <stdio.h>

int main() {

    // INPUT NILAI-NILAI
    printf("Enter first score: ");
    scanf("%f", &skor1);

    printf("Enter second score: ");
    scanf("%f", &skor2);

    // ITUNG RATA2 SEKOR
    average = (skor1 + skor2) / 2;

    // NAMPILIN SEKOR
    printf("Average: %.2f\n", average);

    if (average >= 60) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
