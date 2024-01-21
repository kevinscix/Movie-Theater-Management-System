#include "movieTheaterDB_movie.h"

void movieMenu(struct MovieNode** movieList, struct ActorNode** actorList) {
    char command;
    do {
        // Print movie menu and get user input
        printf("\nMovie Menu:\n");
        printf("i - Insert a new movie\n");
        printf("s - Search for a movie\n");
        printf("u - Update a movie\n");
        printf("p - Print all movies\n");
        printf("e - Erase a movie\n");
        printf("q - Back to main menu\n");
        printf("Enter command: ");
        scanf(" %c", &command);

        switch (command) {
            case 'i':
                insertMovie(movieList);
                break;
            case 's':
                // Implement searchMovie function
                break;
            case 'u':
                // Implement updateMovie function
                break;
            case 'p':
                printMovies(*movieList);
                break;
            case 'e':
                // Implement eraseMovie function
                break;
            case 'q':
                // Back to the main menu
                break;
            default:
                printf("Invalid command. Please try again.\n");
        }
    } while (command != 'q');
}

// Implement other movie-related functions as needed
