#ifndef ASSIGNMENT5_MOVIETHEATERDB_H
#define ASSIGNMENT5_MOVIETHEATERDB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_GENRE_LENGTH 25
#define MAX_IMDB_LENGTH 50

struct Movie {
    int code;
    char name[MAX_NAME_LENGTH];
    char genre[MAX_GENRE_LENGTH];
    float rating;
};

struct MovieNode {
    struct Movie data;
    struct MovieNode* next;
};

struct Actor {
    int code;
    char name[MAX_NAME_LENGTH];
    int age;
    char imdb_profile[MAX_IMDB_LENGTH];
};

struct ActorNode {
    struct Actor data;
    struct ActorNode* next;
};

// Function prototypes for managing movies
void insertMovie(struct MovieNode** head);
void searchMovie(struct MovieNode* head, int code);
void updateMovie(struct MovieNode* head, int code);
void printMovies(struct MovieNode* head);
void eraseMovie(struct MovieNode** head, int code);

// Function prototypes for managing actors
void insertActor(struct ActorNode** head);
void searchActor(struct ActorNode* head, int code);
void updateActor(struct ActorNode* head, int code);
void printActors(struct ActorNode* head);
void eraseActor(struct ActorNode** head, int code);

#endif