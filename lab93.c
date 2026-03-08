#include <stdio.h>
#define MAX 100
int add(char []);

int main() {
    char text[MAX];
    int sum;
    printf("Enter text : ");
    scanf("%s", text);
    sum = add(text);
    printf("%d", sum);
    
    return 0;
}

int add(char t[]) {
    int total=0, i;
    
    for(i=0; t[i]!='\0'; i++) {
        if (t[i] >= '0' && t[i] <= '9') {
            total += t[i] - '0';
        }
    }
    
    return total;
}
