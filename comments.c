#include<stdio.h>
#include<string.h>
int main()
{
    char code[100];
    //fgets(code, sizeof(code), stdin);
    scanf("%[^\n]s", code);

    if(code[0] == '/' && code[1] == '/'){
        printf("single line comments");
    }
    if((code[0] == '/' && code[1] == '*')){
        int len = strlen(code);
        if(code[len-2] == '*' && code[len-1] == '/'){
            printf("multi line comments");
        }
    }
    if((code[0] != '/' && code[1] != '/') || ((code[0] != '/' && code[1] != '*'))){
        printf("no comments");
    }
}
