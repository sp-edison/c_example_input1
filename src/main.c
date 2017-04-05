#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main (int argc, char *argv[]) {
    int opt;
    FILE *fp_input;

    while((opt = getopt(argc, argv, "i:")) != -1 ) {
        switch(opt) {
            case 'i': 
                fp_input = fopen(optarg,"r");
                break;
            default:
                printf("Usage: %s [-t nsecs] [-n] name\n", argv[0]);
                exit(1);
        }
    }
    if(fp_input == NULL){
        printf("Failed to open input file for -i \n",);
        exit(1);
    }




    fclose(fp_input);
	return 0;
}
