#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char wordList[5][20] = {"pizza","messi","ronaldo","football","renault"};
    char word[20];
    int atempts = 7;
    int tries = 0;
    srand(time(NULL));
    int randomIndex = rand() % 5;
    strcpy(word, wordList[randomIndex]);
    char correctWord[strlen(word)];
    for (int i = 0; i < strlen(word); i++)
    {
        correctWord[i] = '_';
    }
    correctWord[strlen(word)] = '\0';



    
    
    while (atempts > 0 && strcmp(word, correctWord) != 0)
    {   
        printf("%s\n", correctWord);
        printf("guess a letter: ");
        char guess;
        scanf("%c", &guess);
        getchar();
        int correct = 0;
        
        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] == guess)
            {
                correctWord[i] = guess;
                correct = 1;
            }
            
        }

        if (!correct)
        {
            atempts--;
            printf("incorrect guess, you have %d guesses left\n", atempts);
        }
        if (strcmp(word, correctWord) == 0)
        {
            printf("you did it, the word is %s\n", correctWord);
        }
        tries++;
        
        
    }
    if (atempts == 0)
    {
        printf("you ran out of atempts, the word was %s\n", word);
    }
    
    printf("your score is %d\n", tries);
    return 0;
}