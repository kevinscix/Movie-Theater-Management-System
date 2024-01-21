#include "movieTheaterDB.h"
#include "movieTheaterDB_movie.h"
#include "movieTheaterDB_actor.h"

int main() {
    struct MovieNode *movieList = NULL;
    struct ActorNode *actorList = NULL;

    char command;
    do {
        // Print menu and get user input
        printf("\nMain Menu:\n");
        printf("h - Print help\n");
        printf("m - Control movies\n");
        printf("a - Control actors\n");
        printf("q - Quit\n");
        printf("Enter command: ");
        scanf(" %c", &command);

        switch (command) {
            case 'h':
                // Prints help message
                printf("Help: \nh command will print the help message which will inform you how to use the program. "
                       "\nm command will bring you to a sub-menu which allows you to control the movies database. In this database you will be able to add movies' names, code, rating, and genre. "
                       "\na command will bring you to a sub-menu which allows you to control the actors database. In this database you will be able to add actors' code, names, ages and their IMDB page."
                       "\nq command will quit the program.");
                break;
            case 'm':
                // Call functions for movie control
                movieMenu(&movieList, &actorList);
                break;
            case 'a':
                // Call functions for actor control
                actorMenu(&actorList);
                break;
            case 'q':
                // Quit the program
                printf("Quitting the program. Goodbye!\n");
                break;
            default:
                // Invalid command
                printf("Invalid command. Please try again.\n");
        }
    } while (command != 'q');

    // Free allocated memory before exiting
    // ...

    return 0;
}