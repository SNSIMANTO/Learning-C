#include<stdio.h>
void identifySeparetor(char spr)
{
    switch(spr){
        case ';':
        case ',':
        case '.':
        case ':':
        case '(':
        case ')':
        case '[':
        case ']':
        case '{':
        case '}':
            printf("\t%c is a separetor\n", spr);
            break;
        default:
            printf("\t%c is not a separetor.\n", spr);

    }
}

int main()
{
    char spr;
    scanf("%c", &spr);
    identifySeparetor(spr);
}
