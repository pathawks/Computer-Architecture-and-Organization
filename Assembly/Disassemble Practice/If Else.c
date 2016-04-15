#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
    int inNum, outNum;

    inNum = atoi(argv[1]);

    if (inNum >= 16 && inNum != 32)
        outNum = inNum + 64;
    else if (inNum > 2 && inNum <= 8)
        outNum = 4;
    else
        outNum = -1;

    printf("%d\n", outNum);

    return 0;
}
