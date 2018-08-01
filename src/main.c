#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main (int argc, char *argv[]) {
	int opt;
	FILE *fp_input;
	char buf_string[256];
    
	// Detect the end of the options.
	while((opt = getopt(argc, argv, "i:")) != -1 ) {
		switch(opt) {
			case 'i': 
				if((fp_input = fopen(optarg,"r")) == NULL ) {
					fprintf(stderr, "Error opening inputfile Path: %s\n", optarg);
					return -1;
				} else {
					printf("Succeed to open inputfile Path: %s\n", optarg);
				}
				break;
			default:
				printf("Usage: %s -i [filepath] \n", argv[0]);
				return -1;
		}
	}

	// Write an algorithm program in this section.

	while(1) {
	fscanf(fp_input, "%s", buf_string);
		if(feof(fp_input))
			break;
		printf("%s\n", buf_string);
	}

	// Input file close
	fclose(fp_input);
	return 0;
}
