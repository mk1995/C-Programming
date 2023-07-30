#include <stdio.h>

int main()
{
    // declaring a pointer of FILE type to hold the file and its content
    FILE *file_ptr;
    

    // Initialising the value to the file_ptr pointer with fopen() function
    file_ptr = fopen("notes1.txt", "w");

    if( file_ptr != NULL){
        
        printf("\nFile opened successfully.\n");
        // printf("File memory Address: %d \n", &file_ptr);        
        // printf("File size: %d Kb.\n", sizeof(&file_ptr));
        // printf("File content: %s \n\n", *file_ptr); 

    	    /*
                Rest of the code as per given task.
            */


        // closing the pointer file. 
        fclose(file_ptr);
    }
    else{
        printf("Sorry no file available.");
        
    }

    return 0;
}
