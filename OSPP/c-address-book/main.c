#include "address_book.h"

int main(int argc, char const *argv[]){
    person_t *person = make_person();
    print_person(person);
    return 0;
}