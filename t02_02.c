// 12S25023 - Ferdinand Nicolas Sihombing

#include <stdio.h>

struct Menu {
    int level;
    char name[20];
    char conclusion[30];
};

int main() {
    struct Menu menus[5] = {
        {1, "staple food", "you need side dishes"},
        {2, "side dishes", "you need vegetables"},
        {3, "vegetables", "good"},
        {4, "fruits", "very good"},
        {5, "milk", "perfect"}
    };

    int choice;
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 5) {
        for(int i = choice-1; i >= 0; i--) {
            printf("%s\n", menus[i].name);
        }
        printf("%s\n", menus[choice-1].conclusion);
    }

    return 0;
}