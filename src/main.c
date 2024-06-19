#include <stdio.h>
#include <stdlib.h>
#include "database.h"
#include <unistd.h>

int isRunning = 1;
int page = 0;

void menu(void){
    system("clear");
    puts("Contacts CLI");
    puts("[1] List contacts");
    puts("[2] Search for contact");
    puts("[3] Exit");

    scanf("%1i", &page);

    switch (page) {
        case 1:
            system("clear");
            int isAtList = 1;
            while (isAtList) {
                list_contacts();
                puts("Enter 0 to go back");
                scanf("%1i", &isAtList);
                system("clear");
            }
            break;
        case 2:
            system("clear");
            int isAtSearch = 1;
            while (isAtSearch){

                char name[20];
                printf("Enter the name: "); 
                scanf("%20s", name);
                name[strcspn(name, "\n")] = 0;    
                search_for(name);

                puts("Enter 0 to go back");
                scanf("%1i", &isAtSearch);
                system("clear");
            }
            break;
        case 3:
            isRunning = 0;
            break;
        case 0:
        default:
            sleep(1);
            system("clear");
    }


}

int main(void){
    while (isRunning){
        menu(); 
    }
    return EXIT_SUCCESS;
}
