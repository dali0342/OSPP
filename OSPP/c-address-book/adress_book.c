#include <string.h>
#include <stdio.h>


#include "address_book.h"



void print_person(const Person *person){
    printf("Name: %s\n", person->name);
    printf("Age: %d\n", person->age);
    printf("Phone number: %s\n", person->telenum);
    return;
}

void print_address_book(const Address_book *address_book){
    return;
}

Address_book *create_address_book(void){
    Person *person = calloc (1, sizeof Person);
    int namelenght;
    char buf[namelenght];
    Person->name = fgets(buf, namelenght, stdin);

    
    return 
}

void destroy_address_book(Address_book *address_book);