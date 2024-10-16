// utils.h
#ifndef UTILS_H
#define UTILS_H

#include <__dependencies__.h> // includes project dependencies and globale definitions

// utility functions
uint64_t int_pow(uint64_t base, int exp);
void print_sha256_hash(const unsigned char *hash);
int create_dir(const char *dir);

#endif // UTILS_H
