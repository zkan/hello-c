#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int count(int (*pred)(char c), char *word) {
    int count = 0;
    int len = strlen(word);
    for(int i = 0; i < len; ++i) {
        char c = word[i];
        if(pred(c)) {
            ++count;
        }
    }
    return count;
}

/*void test_count_vowels() {*/
/*    printf("%d\n", count_vowels("rawitat"));*/
/*    printf("%d\n", count_vowels("engineer"));*/
/*    printf("%d\n", count_vowels("EngIneEr"));*/
/*}*/

int main(int argc, char* argv[]) {
    printf("%d\n", count(is_vowel, argv[1]));

    return 0;
}
