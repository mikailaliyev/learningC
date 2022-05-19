#include <stdio.h>

int main() {
    char name[] = "Mikayil";
    char *pName[] = &name;
    printf("%s", *pName);
    return 0;
}