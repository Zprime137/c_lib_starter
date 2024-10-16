// __dependencies__.h
#ifndef GLOBALS_H
#define GLOBALS_H

// Example basic includes, update according to your needs

#include <stdio.h>  // For printf, FILE, fopen, fwrite, fread, etc.
#include <stdlib.h> // For malloc, free, etc.
#include <stdint.h> // For fixed-width integer types like uint64_t
#include <stddef.h> // For size_t
#include <string.h> // For string manipulation functions like snprintf
#include <unistd.h> // For checking file existence and permissions
#include <assert.h>
#include <time.h>
#include <sys/stat.h> // For creating directories (mkdir)
#include <pthread.h>

// For data hashing validation
#include <openssl/evp.h>
#include <openssl/sha.h>

// Library Modules
#include <logger.h> // Logger Module

// Global Defintions
// Directories
#define DIR_output "output"

// minimum and maximum macros
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) < (b)) ? (b) : (a))

#endif // UTILS_H
