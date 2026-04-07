// 12S25023 - Ferdinand Nicolas Sihombing

#include <stdio.h>

struct Operation {
    char operator;
    int total;
    int first_input;
    int count;
};

int main() {
    struct Operation op;
    int num;

    scanf(" %c", &op.operator);

    if(op.operator == '*') {
        op.total = 1;
    } else {
        op.total = 0;
    }

    op.count = 0;
    int first = 1; // untuk menandai input pertama

    while(op.count < 5) {
        scanf("%d", &num);

        if(first) {
            op.first_input = num;
            op.count++;
            printf("%c\n", op.operator);
            printf("%d\n", num);
            if(op.operator == '+') op.total = 0 + num;
            else if(op.operator == '-') op.total = 0 - num;
            else if(op.operator == '*') op.total = 1 * num;
            printf("%d\n", op.total);
            first = 0;
        } else {
            printf("%c\n", op.operator);
            printf("%d\n", op.first_input);
            printf("%d\n", op.total);
            if(num == -1) {
                printf("-1\n0\n");
                break;
            }
            printf("%d\n", num);
            if(op.operator == '+') op.total = op.total + num;
            else if(op.operator == '-') op.total = op.total - num;
            else if(op.operator == '*') op.total = op.total * num;
            printf("%d\n", op.total);
        }

        op.count++;
    }

    return 0;
}