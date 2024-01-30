#include <stdio.h>
#include <ctype.h>

int main() {
    char question[][100] = {"1. What's a programmer's favorite game?: ",
                            "How does a computer apologize?: ",
                            "What's a cat's favorite dessert?: "    };

    char options[][100] = {"A. Ludu B. Football C. Hide and Seek(with bugs) D. Minecraft",
                            "A. I am sorry B. Ctrl+V C. Ctrl+R D. Ctrl+Z",
                            "A. Ice-cream B. Micecreame C. Blueberry Muffins D. Brownie"    };

    char answers[3] = {'C', 'D', 'B'};
    int numberOfQuestion = sizeof(question)/sizeof(question[0]);

    char guess;
    int score;

    printf("******************************************Quiz Game`*****************************************\n\n\n");

    for (int i = 0; i < numberOfQuestion; i++) {
        printf("%s\n\n\n", question[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");

        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!!!\n");
            score++;
        } else {
            printf("Wrong\n");
            score--;
        }
    }
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestion);
    return 0;
};