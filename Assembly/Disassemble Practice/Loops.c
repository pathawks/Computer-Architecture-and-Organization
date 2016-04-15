#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
    int inNum, outNum;

    inNum = atoi(argv[1]);

    for (outNum = 0; outNum < inNum; ++outNum)
        printf("%d\n", outNum);

    return 0;
}
