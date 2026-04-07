// 12S25023 - Ferdinand Nicolas Sihombing

#include <stdio.h>

struct Purchase {
    int quantity;
    double price_per_book;
    double discount;
    double total_payment;
};

int main() {
    struct Purchase order;

    scanf("%d", &order.quantity);
    scanf("%lf", &order.price_per_book);

    double total = order.quantity * order.price_per_book;

    if(total > 500000) {
        order.discount = total * 0.15;
    } else if(total >= 100000) {
        order.discount = total * 0.10;
    } else if(total > 50000) {
        order.discount = total * 0.05;
    } else {
        order.discount = 0;
    }

    order.total_payment = total - order.discount;

    if(order.discount == 0) {
        printf("---\n");
    } else {
        printf("%.2lf\n", order.discount);
    }

    printf("%.2lf\n", order.total_payment);

    return 0;
}