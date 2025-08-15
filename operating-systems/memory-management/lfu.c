#include <stdio.h>

void main() {
    int n, i, in[90], f, out[90], fl[90], c[90], j, pf = 0, min, count[90];

    printf("Enter the length of integer string: ");
    scanf("%d", &n);

    printf("Enter the integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &in[i]);
        fl[i] = 0;
    }

    printf("Enter the number of frames: ");
    scanf("%d", &f);

    for (i = 0; i < f; i++) {
        out[i] = -1;
        printf("%d\t", out[i]);
    }
    printf("\n");

    for (i = 0; i < f; i++) {
        count[i] = 0;
    }

    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < f; j++) {
            if (out[j] == in[i]) {
                fl[i] = 1;
                count[j]++;
                found = 1;
                break;
            }
        }

        if (!found) {
            if (i < f) {
                out[i] = in[i];
                count[i] = 1;
                pf++;
            } else {
                min = 0;
                for (j = 1; j < f; j++) {
                    if (count[j] < count[min]) {
                        min = j;
                    }
                }
                out[min] = in[i];
                count[min] = 1;
                pf++;
            }
        }

        for (j = 0; j < f; j++) {
            printf("%d\t", out[j]);
        }
        printf("\tPage faults: %d\n", pf);
    }
}