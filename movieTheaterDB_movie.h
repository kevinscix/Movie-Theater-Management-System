#ifndef MOVIETHEATERDB_MOVIE_H
#define MOVIETHEATERDB_MOVIE_H

#include "movieTheaterDB.h"



void insertMovie(struct MovieNode** head);
void searchMovie(struct MovieNode* head, int code);
void updateMovie(struct MovieNode* head, int code);
void printMovies(struct MovieNode* head);
void eraseMovie(struct MovieNode** head, int code);

#endif
