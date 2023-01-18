
#ifndef __ADDRESS_BOOK_H__
#define __ADDRESS_BOOK_H__

typedef struct Address_book address_book_t;
typedef struct Person person_t;
/* Function declarations. Do not modify! Implement those functions in address_book.c */
void print_person(const person_t *person);
void print_address_book(const address_book_t *address_book);

address_book_t *create_address_book(void);
void destroy_address_book(address_book_t *address_book);
person_t *make_person();

#endif /* __ADDRESS_BOOK_H__ */
