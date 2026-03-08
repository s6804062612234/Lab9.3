#include <stdio.h>
#define MAX 50
int countVowel(char []);
char allVowel[5][1] = {"A", "E", "I", "O", "U"};
int aVowel=0, eVowel=0, iVowel=0, oVowel=0, uVowel=0;

void main() {
    char text[MAX];
    int cVowel, i, j;
    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    
    for(i=0; i<5; i++) {
        printf("%c: ", allVowel[i][0]);
        if(i==0) {
            printf("%d", aVowel);
        } else if(i==1) {
            printf("%d", eVowel);
        } else if(i==2) {
            printf("%d", iVowel);
        } else if(i==3) {
            printf("%d", oVowel);
        } else if(i==4) {
            printf("%d", uVowel);
        }
        
        printf("\n");
    }
}

int countVowel(char t[]) {
    int i=0, count=0;
    while (i<MAX && t[i]!='\0') {
        if (t[i]=='A' || t[i]=='a' || t[i]=='E' || t[i]=='e' || t[i]=='I' || t[i]=='i' || t[i]=='O' || t[i]=='o' || t[i]=='U' || t[i]=='u') {
        count++;
            switch(t[i]) {
                case 'A':
                case 'a':
                    aVowel++;
                    break;
                case 'E':
                case 'e':
                    eVowel++;
                    break;
                case 'I':
                case 'i':
                    iVowel++;
                    break;
                case 'O':
                case 'o':
                    oVowel++;
                    break;
                case 'U':
                case 'u':
                    uVowel++;
                    break;
            }
        }
        
        i++;
    }
    return(count);
}
