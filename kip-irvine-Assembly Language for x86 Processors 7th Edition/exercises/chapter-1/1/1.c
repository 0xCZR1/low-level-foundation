
#include <stdio.h>
#define MAX_SIZE 16

short int binary_string_to_int(char *binary_string){

    int len = 0;
    char *p = binary_string;

    if(binary_string == NULL || binary_string[0] == '\0')
        return -1;


    while (*p != '\0'){
        if (*p != '0' && *p != '1') {
            return -1;
        }
        len++;
        p++;
    }

    if (len > MAX_SIZE) {
        return -1;
    }
    short int result = 0;
    for (int i = 0; i < len; i++) {
        result = result * 2 + (binary_string[i] - '0');
    }

    return result;

}

int main(void){

    char my_array[] = "0101010101010101";

    short int result = binary_string_to_int(my_array);

    printf("%d", result);
}
