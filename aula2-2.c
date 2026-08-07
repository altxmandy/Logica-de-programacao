#include <stdio.h>

int main() {
    unsigned short int n1 = 10000, n2 = 2000;
    printf("\tOverflow\n");
    printf("%hu", n1 + n2);
    return 0;
}

//%hu -> especificador de formato para unsigned short int
//%u -> especificador de formato para unsigned int
//%hd -> especificador de formato para short int