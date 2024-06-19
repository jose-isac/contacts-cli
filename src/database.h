#include <string.h>

#ifndef CONTACT_STRUCT
#include "contact_struct.h"
#endif

#ifndef CONTACTS_DB
#define CONTACTS_DB
#define DB_SIZE 4

Contact contacts[] = {
    {"Isac", "88 99492-5975"},
    {"Everton", "88 99999-9999"},
    {"Dina", "88 97777-7777"},
    {"Rita", "88 96666-6666"}
};

void list_contacts(void){
    int i;
    for (i = 0; i < DB_SIZE; i++){
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n\n", contacts[i].phoneNumber);
    }
}

void search_for(char *name){
    int i; 
    for (i = 0; i < DB_SIZE; i++) {
        if (strstr(contacts[i].name, name)){
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n\n", contacts[i].phoneNumber);
        }
    }
}

#endif
