
#include <stdio.h>
#include <string.h>

char *reverse(char*);



int main(int argc, char **argv) {
    if(argc < 2) {
        printf("usage: %s \"some string\"\n", argv[0]);
        return 0;
    }
    for(int i = 1; i < argc; i++) {
        printf("%s\n", reverse(argv[i]));
    }
}



char *reverse(char *str) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        char temp = *(str + i);
        *(str + i) = *(str + len - 1 - i);
        *(str + len - 1 - i) = temp;
    }
    return str;
}
