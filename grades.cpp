#include <stdio.h>

int main() {
    float p, c, b, m, cs;
    scanf("%f %f %f %f %f", &p, &c, &b, &m, &cs);

    float total = p + c + b + m + cs;
    float percentage = (total / 500.0) * 100.0;

    if (percentage >= 90)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 40)
        printf("Grade E");
    else
        printf("Grade F");

    return 0;
}

