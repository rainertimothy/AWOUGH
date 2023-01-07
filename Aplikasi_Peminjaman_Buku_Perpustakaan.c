#include <stdio.h>
#include <stdlib.h>

FILE *listbuku;
FILE *userlog;
int i;

typedef struct{

    char name[50];
    char place[50];
}studentdata;

typedef struct{
    char judul[50];
    int harga;
}buku;

buku buku1;

void reading(){
    listbuku = fopen("listbuku.txt", "r");
    i = 0;
    char singleline[50];
    printf("Judul Buku :\n");
    while(!feof(listbuku)){
        fgets(singleline, 50, listbuku);
        printf("%d. %s\n", i + 1,singleline);
        i++;
    }
    char choice;
    fclose(listbuku);
    printf("Do u want to continue?(Y/N)\n");
      scanf(" %c", &choice);
      switch (choice) {
      case 'Y':
        printf("Press enter to continue...\n");
        getchar();
        system("CLS");
        
        break;
      case 'y':
        printf("Press enter to continue...\n");
        getchar();
        system("CLS");
        
        break;
      case 'N':
        system("CLS");
            printf("Zǎo shang hǎo zhōng guó!\n");
            printf("  Xiàn zài wǒ yǒu\n");
            printf("   bing chilling\n");
            exit(0);;
      case 'n':
        system("CLS");
            printf("Alongside courage and perserverance\n");
            printf("  we shape and define our future\n");
            printf("             ~ 22-1 ~\n");
            exit(0);
      default:
        printf("Error.\n");
        exit(1);
      }

}

void insertion()
{
    studentdata fivestudents;
    int i;
    userlog = fopen("Userlog.txt", "a");
        puts("Insert name: ");
        getchar();
        scanf("%[^\n]", fivestudents.name);
        getchar();
        puts("Insert your address: ");
        scanf("%[^\n]", fivestudents.place);
    fprintf(userlog, "%s %s\n", fivestudents.name, fivestudents.place);
    fclose(userlog);
}

void stylemenu(){
    int option;
    do{
    printf("|-------------------------------|\n");
    printf("|    Welcome To The Main Menu.  |\n");
    printf("|    1. Insert Userdata         |\n");
    printf("|    2. Check Available Books   |\n");
    printf("|    3. Borrow a Book           |\n");
    printf("|    4. Exit the program.       |\n");
    printf("|-------------------------------|\n");
    
    scanf(" %d", &option);
    switch(option){
        case 1:
        insertion();
        break;
        case 2:
        reading();
        break;
        case 3:
        break;
        case 4:
        printf("Alongside courage and perserverance\n");
        printf("  we shape and define our future\n");
        printf("             ~ 22-1 ~\n");
        printf("Press enter to exit the program...\n");
        getchar();getchar();
        system("CLS");
        exit(0);
        default:
        break;
    }

    }while(option != 4);
}


void main(){
    stylemenu();
}

void booking(){



}





