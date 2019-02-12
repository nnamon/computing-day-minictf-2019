#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void print_me() {
    system("/bin/cat /flag");
}

int check_password() {
    char * password = "great_password_friend";
    char buffer[64] = {0};
    printf("Please enter the password: ");
    read(0, buffer, 128);
    if (strlen(buffer) != 0) {
        return (strcmp(password, buffer) == 0);
    }
    else {
        return 0;
    }
}

int main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    if (check_password()) {
        puts("Correct!");
    }
    else {
        puts("Incorrect!");
    }
}
