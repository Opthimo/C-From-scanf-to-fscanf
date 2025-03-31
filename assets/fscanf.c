#include <stdio.h>

int main(void) {
    FILE *file = fopen("./input.txt", "r");
    if (!file) {
        perror("Could not open file");
        return 1;
    }

    char name[32];
    int age;

    fscanf(file, "%31s %d", name, &age);
    printf("Name: %s, Age: %d\n", name, age);

    fclose(file);
    return 0;
}