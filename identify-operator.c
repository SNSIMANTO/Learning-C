#include<stdio.h>
void identifyOperator(char opr)
{
    switch(opr){
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            printf("\t%c is an arithmetic operator\n", opr);
            break;
        case '&':
        case '|':
        case '^':
        case '~':
            printf("\t%c is a bitwise operator.\n", opr);
            break;
        case '=':
        case '<':
        case '>':
        case '!':
            printf("\t%c is a relational or assignment operator.\n", opr);
            break;
        default:
            printf("\t%c is not a recognized operator.\n", opr);

    }
}

int main()
{
    char opr;
    scanf("%c", &opr);
    identifyOperator(opr);
}
