#include<stdio.h>
#include<string.h>
#include<stdbool.h>
const char *keywords[] = {"auto","break","case","char","continue","do","default","const","double","else","enum","extern","for","if","goto","float","int","long","register","return","signed","static","sizeof","short","struct","switch","typedef","union","void","while","volatile","unsigned"};
bool isKeywords(const char *word){
    int size = sizeof(keywords)/sizeof(keywords[0]);
    for(int i = 0; i < size; i++){
        if(strcmp(word, keywords[i]) == 0){
            return true;
        }
    }
    return false;
}
int main()
{
    char word[50];
    scanf("%49[^\n]s", word);
    if(isKeywords(word)){
        printf("This is a reserved keyword");
    } else {
        printf("This is not a reserved keyword");
    }
    return 0;
}
