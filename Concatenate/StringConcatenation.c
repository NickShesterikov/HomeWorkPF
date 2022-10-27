#include<stdio.h>
#include<stdlib.h>

char* get_string(int* len) {
    *len = 0; 
    int capacity = 1; 
    char* string = (char*)malloc(sizeof(char));

    char c = getchar(); 

    while (c != '\n') {
        string[(*len)++] = c;

        if (*len >= capacity) {
            capacity *= 2; 
            string = (char*)realloc(string, capacity * sizeof(char));
        }

        c = getchar();         
    }

    string[*len] = '\0';

    return string;
}

char* cocnatenate(char* string1, int len1, char* string2, int len2) {
    char* tmp = (char)malloc(sizeof(char) * (len1 + len2 + 1)); //len1 - длина 1 массива, len1 - второго, а +1 для дополнительного пробела
    for (int i = 0; i < len1; i++) {
        tmp[i] = string1[i];
    }
    tmp[len1] = " "; //len1 - т к в цикле сверху последний элемент = len1-1
    for (int i = 1; i < len2+1; i++) {
        tmp[i] = string1[i];
    }
    
    return tmp;
}

int main() {
    int len, len1, len2; 
    char* string1 = get_string(&len); 
    len1 = len;
    char* string2 = get_string(&len);
    len2 = len;

    printf("Use some magic: '%s'\n", string1[1]);
    free(string1);
    free(string2);

    return 0;
}

