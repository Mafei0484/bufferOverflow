#include <stdio.h>
#include <string.h>




char largebuff[] = "12345123451234512345123451234512345123451234512345======AABBCCDD";

int main(int argc, char * argv[])
{
    
    char smallbuf[32];
    //while(1){;}
    strcpy(smallbuf, largebuff);
    return 0;
}
