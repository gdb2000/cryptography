#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//encrypts and decrypts using caesar`s method and a 26 letter alphabet other symbols remain unencrypted
char encrypt_letter(char c, int key, int encrypts){
    char a;
    if(isupper(c)){a = 'A';}
    else if(islower(c)){a = 'a';}
    else{return c;}
    if(encrypts){return (c - a + key) % 26 + a;}
    else{return (c - a - key) % 26 + a;}
    
}
void encrypt_string(char *plaintext, int key, int encrypts){
    int i =0;
    while(plaintext[i]!=0){
        plaintext[i++] = encrypt_letter(plaintext[i],key, encrypts);
    }
}
int main(int argc, char** argv){
    if(argc != 4 || !isdigit(*argv[2]) || ! isdigit(*argv[3])){
        printf("Usage: <program name, text, key, encrypt: bool");
    }
    
    encrypt_string(argv[1],atoi(argv[2]),atoi(argv[3]));
    printf("%s\n",argv[1]);
}
