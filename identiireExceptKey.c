#include<stdio.h>
#include<ctype.h>
#include<string.h>

const char *keywords[] = {"auto","break","case","char","continue","do","default","const","double","else","enum","extern","for","if","goto","float","int","long","register","return","signed","static","sizeof","short","struct","switch","typedef","union","void","while","volatile","unsigned"};
int isValidKeywords(const char *str){
    int size = sizeof(keywords)/sizeof(keywords[0]);
    for(int i = 0; i < size; i++){
        if(strcmp(str, keywords[i]) == 0){
            return 1;
        }
    }
    return 0;
}

int isValidIdentifier(const char *str){
    if(str[0] == '\0')
        return 0;
    if(!isalpha(str[0]) && str[0] != '_')
        return 0;
    for(int i = 1; str[i] != '\0'; i++){
        if(!isalnum(str[i]) && str[i] != '_')
            return 0;
    }
    if(isValidKeywords(str))
        return 0;

    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: \n");

    scanf("%[^\n]s", str);


    if(isValidIdentifier(str)){
        printf("%s is a valid identifier", str);
    } else {
        printf("%s is not a valid identifier", str);
    }
}
