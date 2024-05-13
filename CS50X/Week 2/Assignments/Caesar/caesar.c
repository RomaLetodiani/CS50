#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* caesar(int key);

int main(int argc, char *argv[]){
    if (argc != 2 || !isdigit(*argv[1])){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] to an integer
    int key = atoi(argv[1]);

    char result = caesar(key);

    printf(result);

    return 0;
}

char* caesar(int key){
    return "hello from caesar\n";
}
