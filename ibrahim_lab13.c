//file handling program

#include <stdio.h>
#include <stdlib.h>
void insert()
{
    FILE *fileptr;
    char info[1000];
    fileptr = fopen("student.txt", "a");
    if (fileptr == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter Data to Append\n");
    printf("\n<NAME ROLL_NO. SUB1 SUB2 SUB3 PERCENTAGE> ---> Format\n");
    fflush(stdin);
    fgets(info, 1000, stdin);
    fputs(info, fileptr);
    printf("Appended Sucessfully\n");
    fclose(fileptr);
}
void display()
{
    FILE *fileptr;
    fileptr = fopen("student.txt", "r");
    if (fileptr == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    char c;
    printf("\nNAME ROLL_NO. SUB1 SUB2 SUB3 PERCENTAGE\n");
    while ((c = fgetc(fileptr)) != EOF)
    {
        putchar(c);
    }
    fclose(fileptr);
}
void deleter()
{
    FILE *fileptr;
    fileptr = fopen("student.txt", "r");
    if (fileptr == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    FILE *temp;
    int line;
    printf("Enter the Line Number that you want to Delete : ");
    scanf("%d", &line);
    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    char c[1000];
    int count = 1;
    while (fgets(c, 1000, fileptr) != NULL)
    {
        if (line != count)
        {
            fputs(c, temp);
        }
        count++;
    }
    fclose(fileptr);
    fclose(temp);

    fileptr = fopen("student.txt", "w");
    if (fileptr == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    temp = fopen("temp.txt", "r");
    if (temp == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    while (fgets(c, 1000, temp) != NULL)
    {
        fputs(c, fileptr);
    }
    fclose(fileptr);
    fclose(temp);
}
void updater()
{
    FILE *fileptr;
    fileptr = fopen("student.txt", "r");
    if (fileptr == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    FILE *temp;
    int line;
    printf("Enter the Line Number that want to Update : ");
    scanf("%d", &line);
    char info[1000];
    printf("Enter Data to Update\n");
    printf("\n<NAME ROLL_NO. SUB1 SUB2 SUB3 PERCENTAGE> ---> Format\n");
    fflush(stdin);
    fgets(info, 1000, stdin);
    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    char c[1000];
    int count = 1;
    while (fgets(c, 1000, fileptr) != NULL)
    {
        if (line != count)
        {
            fputs(c, temp);
        }
        else
        {
            fputs(info, temp);
        }
        count++;
    }
    fclose(fileptr);
    fclose(temp);
    fileptr = fopen("student.txt", "w");
    if (fileptr == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    temp = fopen("temp.txt", "r");
    if (temp == NULL)
    {
        printf("Unable to Open File!!!\n");
        exit(EXIT_FAILURE);
    }
    while (fgets(c, 1000, temp) != NULL)
    {
        fputs(c, fileptr);
    }
    fclose(fileptr);
    fclose(temp);
}

int main()
{
    while (1)
    {
        printf("\nMENU:\n1.Insert Row\n2.Delete Row\n3.Update Row\n4.Display\n5.Exit\n");
        int c;
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            deleter();
            break;
        case 3:
            updater();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("End of Program\n");
            return 0;
            break;
        default:
            printf("Invalid Input\n");
        }
    }
}