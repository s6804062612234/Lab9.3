#include <stdio.h>
#include <string.h>
char loginData[5][64]={"user1","user2","user3","user4","user5"};
char passwordData[5][64]={"pass1","pass2","pass3","pass4","pass5"};

int checkLogin(char *login, char *passwd) {
    int i;
    for(i=0; i<5; i++) {
        if( !strcmp(login, loginData[i]) && !strcmp(passwd, passwordData[i]))
            return 1;
    }
    return 0;
}

int main() {
	char login[64];
	char password[64];

    printf("Enter login : "); gets(login);
    printf("Enter password : "); gets(password);
    if( checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
}
