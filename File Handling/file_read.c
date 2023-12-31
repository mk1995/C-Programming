#include <stdio.h>

int main()
{
    // declaring a pointer of FILE type to hold the file and its content
    FILE *file_ptr;
    

    // Initialising the value to the file_ptr pointer with fopen() function in READ only mode.
    file_ptr = fopen("notes_write.txt", "r");

    if( file_ptr != NULL){
        
        printf("\nFile opened successfully.\n");
        printf("File memory Address: %d \n", &file_ptr);        
        printf("File size: %d Kb.\n", sizeof(file_ptr));
        printf("File content: %s \n\n", *file_ptr); 

        char content[500];
        
        // The fgetc() function returns a single character from the file. It gets a character from the stream. It returns EOF at the end of file
        // char single_char = fgetc(file_ptr);
        // printf("fgetc():  %c \n", single_char);
        

        // fgets(content, 100, file_ptr);
        // printf("fgets():  %s \n", content);

        // The fgets() function reads a line of characters from file. It gets string from a stream.
        // fgets(content, 100, file_ptr);
        // printf("fgets():  %s \n\n", content);
        int a;
        char n[50];
        /*
        %49[^\t\n]: This format specifier is used to read a string from the file until it encounters either a tab (\t) character or a newline (\n) character, or it reaches the maximum length of 49 characters (whichever comes first). Let's break it down further:

        49: The number 49 is a width specifier that limits the number of characters read by %[^\t\n] to 49 (excluding the null-terminator). This ensures that the read string doesn't exceed the size of the character array n (which is 50 characters).

        [^\t\n]: The [...] is a scanset or character set in fscanf. It allows you to specify a set of characters to be accepted as input. In this case, ^\t\n means any character except for tab or newline. So, %[^\t\n] will read characters until it encounters a tab or newline character.

        \t\t\t\t\t: This part of the format specifier matches exactly five tab characters. This is used to consume the tabs following the name string, ensuring the fscanf function expects to find five tabs after reading the name.

        %d: This format specifier is used to read an integer from the file.

        \n: This part of the format specifier matches a newline character, ensuring the fscanf function expects to find a newline character after reading the integer.
        */
        
        /*
        the format specifier %49[^\t\n]\t\t\t\t\t%d\n is used to read a name 
        (a sequence of characters that doesn't contain tabs or newlines) followed by exactly five tabs and an integer, ending with a newline character.
        The name is stored in the character array n, and the integer is stored in the variable a. 
        The %49[^\t\n] ensures that the name is not longer than 49 characters to prevent buffer overflow issues.
        */
        while (fscanf(file_ptr, "%49[^\t\n]\t\t\t\t\t%d\n", n, &a) == 2)
        {            
            printf("%s   %d\n", n, a);
        }
        
            
        
        // while(fscanf(file_ptr, "%s" , content) != EOF){
        //     printf("%s ", content);
        // }
            
        


        fclose(file_ptr);
    }
    else{
        printf("Sorry");
        
    }





    return 0;
}
