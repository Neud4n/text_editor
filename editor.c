#include <unistd.h>

int main(){
    char c;
    while(read(STDIN_FILENO, &c, sizeof(char)) == 1 && c != 'q');
    return 0;
}