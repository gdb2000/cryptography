#include <stdio.h>
#include <ctype.h>
# encrypts and decrypts using caesar`s method and a 26 letter alphabet other symbols remain unencrypted
char encrypt_letter(char c, int key){
    char a;
    if isupper(c){a = 'A'}
    else if islower(c){a = 'a'}
    else{return c}
    return (c - a + key) % 26 + a
}
char[] encrypt_word(char[] plaintext, int key){
    char[] encrypted_text = char[len(plaintext)];
    int i;
    for(i=0 ; plaintext[i]!=0; i++){
        encrypted_text[i] = encrypt_letter(plaintext[i],key);
    }
    plaintext[i] = 0;
    return encrypted_text;
}
int main(int argc, char** argv){
    printf("%s",encrypt_word(argv[1]));
}
