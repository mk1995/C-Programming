## C Programming HSEB

## Authors

- [@mk1995](https://www.github.com/mk1995)


## File Handling in C programming

During programming, it is often required that we need to work with different types of file. C programming supports file handling and allows us to read and write files programmatically. 

## COncept of data files

We frequently use files for storing information which can be processed by our programs. Such files are called data files. A file is a bunch of bytes stored on some storage device.

Most of the application program processes a large volume of data which is permanently stored in data files. In order to store information permanently and retrieve, we need to use data files.

While developing software essential data is stored in data files or databases because data communication between the console unit and program is tedious and error-prone. Some of the problems which may occur while inputting data from console are:
- A lot of time is taken for data entry.
- Entire data would be re-entered if a mistake is made in input data.
- If the same data is to be processed later on, it would be entered afresh i.e. for every run, we require the same data entry.

So, to overcome above-mentioned problems we use data files which allows us to store and retrieve data in our program.

## The FILE Pointer
As we know, we can have many files on our disk. While dealing with files, in our program, we need to specify which files we wish to use. In c programming, we use a new data type called file pointer to communicate with files.

Every file we open has its own file pointer variable. When we wish to read from a file or write to a file, we need to specify the file pointer variable. We can declare these file pointer variables as follows:

#FILE Pointer Syntax
Syntax to declare file pointer variables in C programming is:

```
FILE *file_pointer1, *file_pointer2, *file_pointer3, ..., *file_pointerN;
```

FILE Pointer Example

```
FILE *fptr;
```
Here fptr is file pointers and using fptr we can communicate with files.

```
FILE *source, *destination;
```

Here source, destination are two file pointers.



## Opening and Closing File
# Opening Data File
A data file must be opened before it can be processed. Since files can be used in different ways i.e. for reading or writing to or both.

In C programming, the mode of file utilization is specified while opening the data file and library function fopen() defined in stdio.h is used to open a file.
Syntax
```
fopen()
```

General syntax for fopen() is:

```
file_pointer_name = fopen("filename", "mode");
```
