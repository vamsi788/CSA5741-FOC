#include <stdio.h>
#include <string.h>

void binarySubtraction(char a[], char b[]) {
    int la = strlen(a);
    int lb = strlen(b);
    int len = (la > lb) ? la : lb;

    char c[len];
    int borrow = 0;

    for (int i = 0; i < len; i++) {
        int A = (i < la) ? a[la - i - 1] - '0' : 0;
        int B = (i < lb) ? b[lb - i - 1] - '0' : 0;

        if (borrow == 1) {
            if (A == 0) {
                A = 1;
                borrow = 1;
            } else {
                A = 0;
                borrow = 0;
            }
        }

        if (A < B) {
            c[len - i - 1] = (A + 2 - B) + '0';
            borrow = 1;
        } else {
            c[len - i - 1] = (A - B) + '0';
        }
    }

    printf("Subtraction of two binary numbers: %s\n", c);
}

int main() {
    char a[100], b[100];

    printf("Enter first binary number: ");
    scanf("%s", a);

    printf("Enter second binary number: ");
    scanf("%s", b);

    binarySubtraction(a, b);

    return 0;
}
