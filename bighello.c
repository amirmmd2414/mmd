#include <stdio.h>
void red(){printf("\033[0;31m");}
int main(){
    red();
    printf("hello world");
    printf("you are stupid");
}
