#include <stdio.h>

int main()
{
    // declaring a pointer of FILE type to hold the file and its content
    FILE *file_ptr;
    

    // Initialising the value to the file_ptr pointer with fopen() function in READ only mode.
    file_ptr = fopen("notes_write.txt", "w");

    if( file_ptr != NULL){
        
        printf("\nFile opened successfully.\n");
        printf("File memory Address: %d \n", &file_ptr);        
        printf("File size: %d Kb.\n", sizeof(file_ptr));
        printf("File content: %s \n\n", *file_ptr); 

        char content[100] = "Aello World.\n My name is lexa and I am your AI guide.";
        
        // The fputc() function is used to write a single character into file. It outputs a character to a stream.
        // fputc(content[4], file_ptr);
        
        // // write long string using array of char using for loop
        // for(int i=0; i<=strlen(content); i++){
        //     fputc(content[i], file_ptr);
        // }
        
        // The fputs() function writes a line of characters into file. It outputs string to a stream.
        // fputs(content, file_ptr);
        
        // fprintf() function prints the formated strings.
        // fprintf(file_ptr, content);

        // int age = 80;
        // char name[100] = "Hari Lal yadav";
        // fprintf(file_ptr, "Name\t\t\t\t\t\t\tAge\n");
        int total = 1;
        printf("%d", total);
        while (total<=20)
        {
            int age = 80;
            char name[100] = "Hari Lal Prasad yadav";
            fprintf(file_ptr, "%s\t\t\t\t\t%d\n", name, age);
            total++;
        }
        

        fclose(file_ptr);
    }
    else{
        printf("Sorry");
        
    }





    return 0;
}
