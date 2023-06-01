%{
#include <stdio.h>
int vowels = 0;
int consonants = 0;
%}

%%
[aAeEiIoOuU]    {vowels++;}
[^aAeEiIoOuU\n] {consonants++;}
\n              {printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
                 vowels = 0; consonants = 0;}
%%

int main(void) {
    yylex();
    return 0;
}
