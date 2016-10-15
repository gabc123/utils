#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME_MAX_LENGTH 500

void append_file_to_output(FILE *input,char *inputName,FILE *output) 
{
    fprintf(stderr, "Processing file: %s\n", inputName);
    fprintf(output,"\n\nFile: %s\n",inputName);
    char ch = '\0';
    while(0 < fscanf(input,"%c",&ch)) {
        fprintf(output,"%c",ch );
    }
}

int get_target_file_path(char *buffer, FILE *input, size_t n) 
{
    char ch = '\0';
    int i = 0;
    int ret = 0;
    while(0 < fscanf(input,"%c",&ch) && i < n) {
        if(ch == '\n') {
            buffer[i] = '\0';
            break;
        } 
        buffer[i] = ch;
        i++;
    }
    buffer[n - 1] = '\0';
    return i;
}

int concatenate_files(FILE *output) 
{
    int fileCount = 0;
    char inputName[FILENAME_MAX_LENGTH];
    FILE *input = NULL;
    while(0 < get_target_file_path(inputName,stdin,FILENAME_MAX_LENGTH)) {
        input = fopen(inputName,"r");
        if (input == NULL) {
            fprintf(stderr, "error: file not found: %s\n", inputName);
            continue;
        }

        append_file_to_output(input,inputName,output);
        fclose(input);
        fileCount++;
    }
    return fileCount;
}

int main(int argc,char *argv[]) 
{
    char outputName[FILENAME_MAX_LENGTH];
    FILE *output = stdout;
    if (argc == 2) {
        strncpy(outputName,argv[1],FILENAME_MAX_LENGTH);
        outputName[FILENAME_MAX_LENGTH - 1] = '\0';
        output = fopen(outputName,"a");
        if (output == NULL) {
            fprintf(stderr, "could not create output file: %s\n", outputName);
            output = stdout;
        }
    }
    int count = concatenate_files(output);
    fprintf(stderr, "\nFiles processed: %d\n", count);
    return 0;
}
