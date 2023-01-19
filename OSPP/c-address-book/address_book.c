#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#include "address_book.h"

struct Person
{
    char *name;
    char *age;
    char *phone_number;
};


struct Address_book
{
    person_t *person_info[400];
    int *size;
};

void print_person(const person_t *person){
    printf("Name: %s\n", person->name);
    printf("Age: %s\n", person->age);
    printf("Phone number: %s\n", person->phone_number);
    return;
}
/*
void print_address_book(const address_book_t *address_book){
    int size = *(address_book->size);
    printf("==== Address book (%d entries) =====\n\n", address_book->size);
    for(int i = 0; i < address_book->size; i++){
        print_person(address_book->person_info[i]);
    }
    return;
}*/

static void make_space_person(person_t *person){
    person->name = calloc (1, 500);
    person->age = calloc (1, 500);
    person->phone_number = calloc (1, 500);
    return;
}

person_t *make_person(){
    person_t *person = calloc (1, sizeof (person_t));
    make_space_person(person);
    printf("\nName: ");
    fgets(person->name, 5000, stdin);
    printf("\nAge: ");
    fgets(person->age, 5000, stdin);
    printf("\nPhone number: ");
    fgets(person->phone_number, 5000, stdin);
    return person;
}

address_book_t *create_address_book(void){
  /*address_book_t ab = calloc (1, sizeof address_book_t);
    int *size;
    scanf("%d", size);
    ab->size = size;
    for(int i = 0; i < ab->size; i++){
        ab->person_info[i] = make_person();
    }*/

    return NULL;
}

void destroy_address_book(address_book_t *address_book){
    free (address_book->person_info);
    free(address_book->size);
    free (address_book);
    return;
}
