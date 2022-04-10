#include <stdio.h>
#define MAXLINE 1000

int length(char s[], int lim);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    bool longest1;
    char line[MAXLINE];
    char longest[MAXLINE];


    checkTwice();
    return 0;
}


int length(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n' && (c = getchar()) == ' ' && (c = getchar()) == '\t'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from []) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}