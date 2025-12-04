#include <stdio.h>

int main() {
    int minutes, hours, mins;

    scanf("%d", &minutes);

    hours = minutes / 60;
    mins = minutes % 60;

    printf("%d Hour(s) %d Minute(s)", hours, mins);

    return 0;
}
