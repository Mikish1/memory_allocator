#ifndef PARTC_H
#define PARTC_H

typedef struct header_t {
    int size;
    int magic;
    struct header_t *next;
} header_t;

typedef struct footer_t {
    int size;
    int magic;
    struct footer *prev;
} footer_t;

int M_Init(int size);

void *M_Alloc(int size);

void M_Display();

int M_Free(void *p);

#endif