
#include <utils.h>

uint64_t int_pow(uint64_t base, int exp)
{
    uint64_t result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

/**
 * @brief Print the SHA-256 hash in hexadecimal format.
 *
 * @param hash Pointer to the SHA-256 hash array.
 */
void print_sha256_hash(const unsigned char *hash)
{
    if (hash == NULL)
    {
        log_error("Null pointer passed to print_sha256_hash.");
        return;
    }

    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        printf("%02x", hash[i]);

    printf("\n");
}

// Create directory if it doesn't exist
int create_dir(const char *dir)
{
    struct stat st = {0};
    if (stat(dir, &st) == -1)
    {
        if (mkdir(dir, 0700) != 0)
        {
            // log error if mkdir fails
            log_error("mkdir failed to create %s :\\", dir);
            return -1;
        }
    }

    return 0; // Directory already exists or was successfully created
}
